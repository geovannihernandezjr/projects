import cv
import pandas as p
import sys
def get_input(question):
    #question to separate different choices if needed
    q = input(question)
    return q

def open_file(file_name):
    """get file name that is going to be opened"""
    try:
        csv = p.read_csv(file_name)#, index_col= 'Student Name')
    except IOError as e:
        print("Unable to open the file", file_name, "\n Make sure name is correct", e)
        input("\n\nPress the enter key exit.")
        sys.exit()
    else:
        return csv



df = p.read_csv("EE4390_List.csv")#, index_col = "Student Name")

def edit_csv():
    file_name = get_input(question = 'What is the name of the file you are trying to open')        
    df = open_file(file_name)
    columns = df.columns
    #This is for storing the name of the new column being inserted into the table (i.e. new column for grade title)
    newColumnName = get_input(question = 'Name of the New Column you want to add. ')
    #index is calculated using the number of columns - 1. 
    #This variable will be used to iterate through columns since it require ['name'][row]
    index = len(columns) - 1
    
    columnName = columns[index]
    numOfRows = len(df[columnName])
    
    newColumnRows = []
    
    
    try:
        q =get_input(question="Do you need to enter different data in each row?\n(N/n for No or Y/y for yes) ")
        if q == 'y' or 'Y' or 'yes' or 'Yes':
            print(q)
            value = get_input(question='Enter value corresponding to your data ')
            df.insert(index, newColumnName, value)
            index = index + 1
            columns = df.columns
            columnName = columns[index]
            print(df)
        elif q == 'n' or 'N' or 'no' or 'No':
            for row in range(numOfRows):
                print(df['Student Name'][row])
                newColumnRows.append(get_input(question='Enter value corresponding to your data '))
            df.insert(index, newColumnName, newColumnRows)
            index = index + 1
            print(q)
        else:
            raise ValueError('The input must be n,y,Y,N,No,no,Yes,yes. Value inputted: ' + q)
    except Exception as error:
        print('Error:  ' + repr(error))
    #df.insert(index, newColumnName, 0)
    #print(df)
while True:
    edit_csv()
    esc_key = cv.WaitKey(7) % 0x100
    #using the opencv library to use a keystroke to break the while loop and end program
    if esc_key == 27:
        break



        