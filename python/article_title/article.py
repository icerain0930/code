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

    #生成js
    with open("js.txt", "w") as file:
        file.write("")
        file.write("document.querySelector(\"#sltKind2\").selectedIndex=2\n") #子分類 > 生活休閒
        file.write("document.querySelector(\"#title\").value=\"" + text +"\"\n") #標題 
        file.write("document.querySelector(\"#new_tag\").value=\"日常\"\n") #標籤 > 日常
        file.write("document.querySelector(\"#All-ages\").click()\n")#閱覽分級 > 全年齡
        
def save():#寫入新天數
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
#生成按鈕
generate = tk.Button(text="生成",command=choose)
generate.place(x=0,y=45)
#儲存按鈕
save = tk.Button(text="儲存",command=save)
save.place(x=0,y=100)
#讀取天數
listday = []
with open("file.txt", "r") as tf:
    lines = tf.read().split(',')
    
for line in lines:
    listday.append(line)



