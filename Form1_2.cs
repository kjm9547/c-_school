namespace _2022_2번
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
                int min = int.Parse(textBox1.Text);
                int max = int.Parse(textBox2.Text);
                int increment = int.Parse(textBox3.Text);
                string sumResult = "";
                string mulResult = "";
                label5.Text = "더한값: ";
                label6.Text = "곱한값: ";

                if (min > max || min == max)
                {
                    label4.Text = "최소 최대 값을 다시 확인해주세요";
                }
                else if(increment == 0) { 
                    label4.Text = "무한루프 돕니다.";
                    /*
                     * 무한 루프 돌리는 코드
                     * 
                     * while (true)
                        {
                            label5.Text = "무한루프";

                        }
                    */
                }
                else if(min >1 && min<20 && max<20 && max >1 && increment>1 && increment < 20)
                {
                    int sum = 0;
                    int mul = 1;

                    for(int i = min; i<=max; i += increment)
                    {
                        sumResult += i+" + ";
                        mulResult += i + " * ";
                        sum += i;
                        mul *= i;

                        
                    }
                    label4.Text = min + " 부터 " + max + " 까지 증가값 " + increment + "로";
                    sumResult = sumResult.Trim();
                    sumResult = sumResult.TrimEnd('+');
                    mulResult = mulResult.Trim();
                    mulResult = mulResult.TrimEnd('*');

                    label5.Text += sumResult + "= " + sum;
                    label6.Text += mulResult + "= " + mul;
                }
                else
                {
                    label4.Text = "1~20 사이의 수만 입력해주세요.";
                }

            }
            catch (Exception ex)
            {

            }
        }
    }
}