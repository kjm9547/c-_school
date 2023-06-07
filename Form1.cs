using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        
        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            comboBox3.Items.Clear();
            
            int index = comboBox2.SelectedIndex+1;
            if ( index==1)
            {
                for (int i = 0; i < 31; i++)
                {
                    comboBox3.Items.Add(i + 1);
                }
            }
            else if (index == 2)
            {
                for (int i = 0; i < 28; i++)
                {
                    comboBox3.Items.Add(i+1);
                }
            }
            
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = textBox1.Text;
            string radioValue;

            if(radioButton1.Checked){
                radioValue = radioButton1.Text;
            }
            else{
                radioValue =  radioButton2.Text;
            }
            label2.Text = radioValue;

            label3.Text= "생년월일 : " + comboBox1.s+ " 년" + comboBox2.SelectedItem + " 월" + comboBox3.SelectedItem +"일";
        }

        private void comboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
