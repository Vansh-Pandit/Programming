import streamlit as st
import pandas as pd
import joblib

st.set_page_config(page_title="Marvellous Infosystem Dashboard")
st.title("Marvellous Infosystem by Piyush Manohar Khernar")
st.header("Customer Churn Prediction")
st.write("Machine Learning Application Dashboard")

model = joblib.load("Marvellous_ML_Customer_Churn.pkl")

st.subheader("Enter Customer details")

age = st.number_input("Customer Age",min_value=1)
tenure = st.number_input("Tenure (Months)",min_value=0)
Charges = st.number_input("Monthly charges",min_value=0)
support = st.number_input("Support calls",min_value=0)

if st.button("Predict Churn") :
    new_Customer = pd.DataFrame({
    "Age" : [age],
    "Tenure" : [tenure],
    "MonthlyCharges" : [Charges],
    "SupportCalls" : [support]
    })

    Prediction = model.predict(new_Customer)[0]

    
    if Prediction == 1:
        st.error("Customer is likely to churn")
    else :
        st.success("Customer is unlikely to churn")

st.divider()

st.caption("Marvellous Infosystems Dashboard")
