
import pandas as pd
import streamlit as st
import joblib
from pathlib import Path

st.set_page_config(page_title="Marvellous Infosystem Dashboard")
st.title("Marvellous Infosystem by Piyush Manohar Khernar")
st.header("Customer Churn Prediction")
st.write("Machine Learning Application Dashboard")

BASE_DIR = Path(__file__).resolve().parent

MODEL_PATH = BASE_DIR / "Marvellous_ML_Customer_Churn.pkl"

if not MODEL_PATH.exists():
    st.error(f"Model file not found: {MODEL_PATH}")
    st.stop()

model = joblib.load(MODEL_PATH)



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
