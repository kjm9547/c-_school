namespace _2022_1번
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            label2.Text = "";
            string str = "";
            int cnt = 0;
            try
            {
                int num = int.Parse(textBox1.Text);
                if (num < 0 || num > 100)
                {
                    label2.Text = "1~100 사이의 수를 입력해주세요";
                }
                else
                {
                    
                    for(int i=1; i<=num; i++)
                    {
                        if(i%2 == 0)
                        {
                            str += i + ",";
                            cnt++;
                           
                        }
                        if (cnt % 10 == 0 && i!= 100)
                        {
                            str += "\n";
                        }
                    }
                    if (cnt % 10 < 5 && cnt%10 != 0)
                    {
                        str = "한 줄에 5~10개가 오도록 다시 입력해주세요";
                    }
                    
                     str = str.TrimEnd(',');
                    label2.Text = str;
                }
            }
            catch(Exception ex)
            {
                if (textBox1.Text == "") { label2.Text = "값을 입력해주세요"; }
            }
            
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}