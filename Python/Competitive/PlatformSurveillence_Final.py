

import csv
import psutil
import sys
import os
import time
import schedule
import smtplib
from email.message import EmailMessage

def Mail_Info(Filename ):
    Sender = "panditvansh437@gmail.com"

    Pass = "adssuxkldhokfakf"

    receiver = "pandit.20vansh@gmail.com"

    Subject = "System Report"

    Body =""" Jay Ganesh
    Your System report is Completed 
    The Report is Attached in the CSV file 

    Thank You
    """

    Send_Email(Sender,Pass,receiver,Subject,Body,Filename)

    print("Email Sent")

def Send_Email(Sender , Pass, Receiver , Subject , Body , FileName):

    msg = EmailMessage()

    msg["From"] = Sender
    msg["to"] = Receiver
    msg["Subject"] = Subject

    msg.set_content(Body)

    fobj = open(FileName,"rb")

    FileData = fobj.read()

    fobj.close()

    msg.add_attachment(FileData,maintype = "application",subtype = "octet-stream",filename = "Report.csv")

    smtp = smtplib.SMTP_SSL("smtp.gmail.com",465)

    smtp.login(Sender,Pass)

    smtp.send_message(msg)

    smtp.quit()

            

def ProcessScan():
    ListProcess = []
    for proc in psutil.process_iter() :
        info = proc.as_dict(attrs = ["pid","name","username","status"])
        info["cpu_percent"] = proc.cpu_percent(None)
        info["memory_percent"] = proc.memory_percent()

        ListProcess.append(info)

    return ListProcess        

def PlatformSurveillence(FolderName):
    
    Border = "-"*50

    Ret = False
    Ret = os.path.exists(FolderName)
    if (Ret == True):
        Ret = os.path.isdir(FolderName)
        if(Ret == False):
            print("Unable to proceed as Folderanem is existing as flder name is not s directory")
            return


    else:
        os.mkdir(FolderName)
        print("Directory for the log file gets created successfully ")

    TimeStamp = time.strftime("%y-%m-%d_%H-%M-%S")

    FileName = os.path.join(FolderName,"Marvellous_%s.csv" %TimeStamp)

    fobj = open(FileName,"w",newline="",encoding="utf-8")

    print("CSV File gets Successfully created ")

    header = ["Active Cores","CPU Usage","RAM USage","Total RAM Available","Network Sent","Network Received","PID","Name","Username","Status","CPU USage","RAM Usage"]

    writer = csv.writer(fobj)

    writer.writerow(header)

    fobj.close()

    fobj = open(FileName,"a",newline="",encoding="utf-8")

    writer=csv.writer(fobj)

    # RAM information
    memory = psutil.virtual_memory()

    # Network USage
    Netobj = psutil.net_io_counters()
    #Process Log

    Data = ProcessScan()

    i = 0

    for info in Data:
        if i == 0:
            data = [psutil.cpu_count(),psutil.cpu_percent(),memory.percent,memory.total,
                    (Netobj.bytes_sent / (1024 * 1024)),(Netobj.bytes_recv/ (1024 * 1024)),
                    info.get("pid"),info.get("name"),info.get("username"),info.get("status"),
                    info.get("cpu_percent"),info.get("memory_percent")
                    ]

            writer.writerow(data)   
        else:
            data =  ["","","","","","",
                    info.get("pid"),info.get("name"),info.get("username"),info.get("status"),
                    info.get("cpu_percent"),info.get("memory_percent")]
            writer.writerow(data)
        i = i + 1

    fobj.close()

        
    Mail_Info(FileName)


def main():

    Border = "-"*50
    print(Border)
    print("---- Marvellous platform surveilence system ----")
    print(Border)

    # --h and --U
    if(len(sys.argv) == 2):

        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("This Automation is used to perform ")
            print("1 : It fetchs information of running processes")
            print("2 : It fetchs information about the Primary storage as RAM")
            print("3 : It fetchs information about the Secondary storage as HDD")
            print("4 : It fetchs information about the Micro Processor")
            print("5 : It Gets auto schedule periodically")
            print("6 : It maintains all records in Log file")
            print("7 : It sends log file through mail periodically")
            

        elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Use the Automation Script as : ")
            print(f"python {sys.argv[0]} Time_Interval Folder_Name ")
            print("Time_Interval : Time in minutes for periodic execution")
            print("Folder_Name : Name of the log for file creation")


        else:
            print("Unable to proceed as there is no matching arguments")
            print("Please use --h or --u flag for more details")


    elif(len(sys.argv) == 3):

        #print("CPU Usage :",psutil.cpu_percent())
        print("Scheduler Started Successfully")
        print("Press ctr + c to abort the automation script")
        schedule.every(int(sys.argv[1])).seconds.do(PlatformSurveillence,sys.argv[2])

        while(True):
            schedule.run_pending()
            time.sleep(1)

    else:
        print("Invalid number of argument")
        print("Unable to proceed as arguments are not matching")
        print("Please use --h or --u flag for more details")


    print(Border)
    print("---Thank you for using our automation systems---")
    print("---- Marvellous platform surveilence system ----")
    print(Border)


if __name__ == "__main__":
    main()