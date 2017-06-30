#region Using Statements
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
#endregion

namespace DiceGame
{
    public partial class Form1 : Form
    {
        #region Declaration

        Image[] diceImages;
        int[] dice;
        Random rand;

        //bool that switches back and forth for each button click 
        bool click; 

        //counter int. You win at 6 
        int winning; 

        //calculate function returns whether or not the answer was right 
        //(for messagebox)
        bool correct; 

        #endregion

        #region Initialization

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

            diceImages = new Image[7]; ;
            diceImages[0] = Properties.Resources.dice_blank;
            diceImages[1] = Properties.Resources.dice_1;
            diceImages[2] = Properties.Resources.dice_2;
            diceImages[3] = Properties.Resources.dice_3;
            diceImages[4] = Properties.Resources.dice_4;
            diceImages[5] = Properties.Resources.dice_5;
            diceImages[6] = Properties.Resources.dice_6;

            dice = new int[5] { 0, 0, 0, 0, 0 };

            rand = new Random();


            MessageBox.Show("Welcome to Flower(s) for CS122!" + Environment.NewLine +
                "Deduce the answer six times and you will win this game." + Environment.NewLine +
                "The answer can be 0 or an even number." + Environment.NewLine +
                "i.e possible answers would be: 0, 2, 4, 6, 8, etc...");

        }

        #endregion

        #region Private Methods


        //you have to realize that since you will click the button 
        //the button will say what you are going do next. 
        private void btn_rollDice_Click(object sender, EventArgs e)
        {
            int answer = 0;
            int calculated = 0;

            if (this.click == false)
            {

                btn_rollDice.Text = "See if you're correct";

                textBox1.Clear(); 

                RollDice();



                this.click = true;
            }
            else
            {

                btn_rollDice.Text = "Roll the dice.";

                //making sure that the user entered a valid input. 
                bool good = checkAnswer();

                //only calculate provided that the user entered a legit value. 
                if (good == true)
                {

                    //getting user answer and returning it
                    answer = getUserAnswer();
                    //calculating the dice 
                    calculated = calculateTotal();

                    //check answer could return a bool value
                    //if it's true then the correct answer was entered! 
                    correct = checkAnswer(answer, calculated);

                    this.click = false;
                }

                
                //changing the bool value so the NEXT time you click the button 
                //this.click = false;  
            }


        }




        private void RollDice()
        {

            //dice[] will hold the random number in each position. 
            //example: if dice[0] = 6 this would mean that the first dice will show an image of 6. 

            //diceImages holds all of the images of the dice. 

            for (int i = 0; i < dice.Length; i++)
                dice[i] = rand.Next(1, 6 + 1);

            lbl_dice1.Image = diceImages[dice[0]];
            lbl_dice2.Image = diceImages[dice[1]];
            lbl_dice3.Image = diceImages[dice[2]];
            lbl_dice4.Image = diceImages[dice[3]];
            lbl_dice5.Image = diceImages[dice[4]];
        }

        #endregion

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private bool checkAnswer()
        {
            bool success = false;

            string temp = textBox1.Text;

            //can't use mod operator because it's a string! If we converted to int then this would be pointless!
            //i.e. can't do (temp % 2 == 0)

            if (temp == "0" || temp == "2" || temp == "4" || temp == "6" || temp == "8" || temp == "10"
                 || temp == "12" || temp == "14" || temp == "16" || temp == "18" || temp == "20" )
            {
                success = true;
            }
            else
            {
                MessageBox.Show("That's not a valid answer!"+ Environment.NewLine +
                    "Try again!");

                textBox1.Clear(); 
            }


            return success; 
        }


        private int getUserAnswer()
        {

            string temp = textBox1.Text;

            int value = Convert.ToInt32(temp);

            return value;
        }


        private int calculateTotal()
        {
           
            int calculated = 0;

            for (int i = 0; i < dice.Length; i++)
            {
                if (dice[i] == 3)
                {
                    calculated += 2;

                }
                else if (dice[i] == 5)
                {
                    calculated += 4;

                }
            }

            return calculated;
        }

        private bool checkAnswer(int guess, int calculated)
        {
            bool correct = false; 

            if (guess == calculated)
            {
                this.winning++;

                correct = true;

                MessageBox.Show("That's correct!" +Environment.NewLine + 
                    "You have gotten " + winning + " correct");

            }
            else if(this.winning != calculated)
            {
                this.winning = 0;

                correct = false;

                string calcstring = Convert.ToString(calculated);

                MessageBox.Show("That's incorrect." + Environment.NewLine +
                    "The correct answer was:" + calcstring); 
                

            }
            else if (this.winning == 6)
            {
                //you are a winner! 
                //printDialog1
                MessageBox.Show("Congratulations, you win!");

            }

            return correct;
        }



        private void runGame()
        {


            int answer = 0;
            int calculated = 0;

            if (this.click != true)
            {
                RollDice();

                this.click = false;
            }
            else
            {
                answer = getUserAnswer();
                calculated = calculateTotal();
                checkAnswer(answer, calculated);
            }


            //click button once. 
            //dice get rolled. 
            //int calculated = calculateTotal(); 
            //user inputs answer.
            //clicks button again
            //btn_rollDice_Click2();
            //calculate the answer
            //check if answer is right. 
            //do it all again. 
            //??? Dispaly a cool message or some shit that they are champions of the sun ??? 
            //??? 
            //PROFIT 
        }

        /*

                Public Sub PerformCalculations()
           ' Code is entered here that performs a calculation.
           ' Display a message box informing the user that the calculations 
           ' are complete.
              MessageBox.Show("The calculations are complete", "My Application", _
                   MessageBoxButtons.OKCancel, MessageBoxIcon.Asterisk)
        End Sub

        // C#
        public void PerformCalculations() 
        {
           // Code is entered here that performs a calculation
           // Display a message box informing the user that the calculations 
           // are complete
           MessageBox.Show ("The calculations are complete", "My Application", 
        MessageBoxButtons.OKCancel, MessageBoxIcon.Asterisk);
        }

         */
    }
}
