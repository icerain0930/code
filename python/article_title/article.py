import os
import tkinter as tk

#文章標題
listtext = ['大學生活','Python','arduino 筆記','Linux','來做3D']

def choose():
    i = Var.get() - 1
    text = listtext[i] + ' - Day' +listday[i] 
    lab = tk.Label(text = text)
    lab.place(x=0,y=70)
    listday[i]=str(int(listday[i])+1)

def save():
    strA = ",".join(listday)
    with open("file.txt", "w") as file:
        file.write(strA)

def radio(a): #radiobutton
    stra = 'radio'+str(a)
    stra = tk.Radiobutton(text=listtext[a-1],variable=Var, value=a)
    a = (a-1)*100
    stra.place(x=a,y=20)

#圖形化介面
win = tk.Tk()
win.title('文章標題產生') # 更改視窗的標題
win.geometry('500x400')

article = tk.Label(text="選擇文章類型：")
article.place(x=0,y=0)
Var = tk.IntVar()
#產生radiobutton
for i in range(len(listtext)+1):
    radio(i)

generate = tk.Button(text="生成",command=choose)
generate.place(x=0,y=45)

save = tk.Button(text="儲存",command=save)
save.place(x=0,y=100)

listday = []
with open("file.txt", "r") as tf:
    lines = tf.read().split(',')
    
for line in lines:
    listday.append(line)
