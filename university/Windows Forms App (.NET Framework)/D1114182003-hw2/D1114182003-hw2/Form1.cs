using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace D1114182003_hw2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                double h = Convert.ToDouble(textBox1.Text);
                double w = Convert.ToDouble(textBox2.Text);
                double c,d;
                c = w/(h*h);
                c = Math.Round(c,2);
                d = Math.Round(22*h*h, 2);
                string s;
                if(c < 18.5)
                {
                    s = "體重過輕";
                }
                else if (c < 27 && c >= 24)
                {
                    s = "體重過重";
                }
                else if(c < 30 && c >=27){
                    s = "輕度肥胖";
                }
                else if (c < 35 && c >=30)
                {
                    s = "中度肥胖";
                }
                else if (c <=35)
                {
                    s = "重度肥胖";
                }
                else
                {
                    s = "體重正常";
                }
                textBox1.Enabled = false;
                textBox2.Enabled = false;
                if (w-d>0)
                {
                    double ee;
                    ee = w-d;
                    label4.Text = "你的BMI= "+ c + "\n"+ s +"\n最佳體重:"+ d +"\n需減肥"+ ee +"公斤";
                }
                else
                {
                    double ee;
                    ee = d-w;
                    label4.Text = "你的BMI= "+ c + "\n"+ s +"\n最佳體重:"+ d +"\n需增肥"+ ee +"公斤";
                }
            }
            catch
            {
                MessageBox.Show("請輸入數字");
                textBox1.Clear();
                textBox2.Clear();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Enabled = true;
            textBox2.Enabled = true;
            textBox1.Clear();
            textBox2.Clear();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
