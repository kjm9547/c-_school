namespace _2022_3번
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
                int num = int.Parse(textBox1.Text);
                string result = "";
                string primeText = "";
                string text = "";
                int cnt = 0;
                int prime = 0;
                int v = num / 100;
                if (num < 2 || num > 1000)
                {
                    label2.Text = "2~1000 사이의 수를 입력해주세요.";
                }
                else
                {
                    
                    for (int i = 1; i <= num; i++)
                    {
                        for (int y = 1; y <=i; y++)
                        {
                            if (i % y == 0)
                            {
                                cnt++;
                            }
                        }
                        if (cnt == 2)
                        {
                            prime++;
                            primeText += i +", ";
                            
                        }
                        cnt = 0;
                        
                        if ( i% 100 ==0)
                        {
                            text = i-99 + "부터 " + i + "까지 " + prime + " 개\n";
                            result += text + primeText;
                            result = result.Trim(' ');
                            result = result.TrimEnd(',');
                            result += "\n\n";
                            prime = 0;
                            primeText = "";
                            
                        }
                        
                        else if(i == num)
                        {
                            text = i- num%100+1 + "부터 " + i + "까지 " + prime + " 개\n";
                            result += text + primeText;
                        }
                                
                    }
                    label2.Text = result;
                }


                
            }
            catch(Exception ex)
            {
                if(textBox1.Text == "")
                {
                    label2.Text = "값이 비어있습니다.";
                }
                else
                {
                    label2.Text = "정수를 입력하시죠?";
                }
                
            }
        }
    }
}