using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace D1114182003_3
{
    public partial class Form1 : Form
    {
        public int a;//第幾個功能
        public double n1,n2,sum;//計算用

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            a = 2;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            a = 3;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        private void radioButton4_CheckedChanged(object sender, EventArgs e)
        {
            a = 4;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        private void radioButton5_CheckedChanged(object sender, EventArgs e)
        {
            a = 5;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = false;
        }

        private void radioButton6_CheckedChanged(object sender, EventArgs e)
        {
            a = 6;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = false;
        }

        private void radioButton7_CheckedChanged(object sender, EventArgs e)
        {
            a = 7;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        private void radioButton8_CheckedChanged(object sender, EventArgs e)
        {
            a = 8;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        private void radioButton9_CheckedChanged(object sender, EventArgs e)
        {
            a = 9;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        private void radioButton10_CheckedChanged(object sender, EventArgs e)
        {
            a = 10;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = false;
        }

        private void radioButton11_CheckedChanged(object sender, EventArgs e)
        {
            a = 11;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = false;
        }

        private void radioButton12_CheckedChanged(object sender, EventArgs e)
        {
            a = 12;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        private void radioButton13_CheckedChanged(object sender, EventArgs e)
        {
            a = 13;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        private void radioButton14_CheckedChanged(object sender, EventArgs e)
        {
            a = 14;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                if(a == 14 || a ==11 || a == 10 || a == 6 || a == 5)
                {
                    n1 = Convert.ToDouble(textBox1.Text);
                }
                else
                {
                    n1 = Convert.ToDouble(textBox1.Text);
                    n2 = Convert.ToDouble(textBox2.Text);
                }

                switch (a)
                {
                    case 1:
                        sum = n1+n2;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 2:
                        sum = n1-n2;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 3:
                        sum = n1*n2;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 4:
                        sum = n1/n2;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 5:
                        sum = Math.Exp(n1);
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 6:
                        for (int i = 1; i<=n1; i++) sum+=i;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 7:
                        if (n1!=0 && n2 !=0) sum=1;
                        else sum=0;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 8:
                        if (n1==0 && n2 == 0)sum=0;
                        else sum=1;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 9:
                        if ((n1==0 && n2 == 0)||(n1!=0 && n2 !=0)) sum=1;
                        else sum=0;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 10:
                        if (n1==0) sum=1;
                        else sum=0;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 11:
                        sum = 1;
                        for (int i = 1; i<=n1; i++) sum*=i;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 12:
                        sum = Math.Pow(n1,n2);
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 13:
                        sum = Math.Pow(n1, 1/n2); ;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 14:
                        sum = 1/n1;
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 15:
                        sum = GCD(n1, n2);
                        label3.Text = Convert.ToString(sum);
                        break;
                    case 16:
                        sum = n1*n2/GCD(n1, n2);
                        label3.Text = Convert.ToString(sum);
                        break;
                }
            }
            catch
            {
                label3.Text = "輸入錯誤";
            }
        }

        double GCD(double a, double b)
        {
            if (b==0)
                return a;
            return GCD(b, a%b);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void radioButton15_CheckedChanged(object sender, EventArgs e)
        {
            a = 15;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        private void radioButton16_CheckedChanged(object sender, EventArgs e)
        {
            a = 16;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }

        public Form1()
        {
            InitializeComponent();
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            a = 1;
            sum = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox1.Enabled = true;
            textBox2.Enabled = true;
        }
    }
}
