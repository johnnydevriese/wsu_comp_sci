namespace DiceGame
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.lbl_dice1 = new System.Windows.Forms.Label();
            this.lbl_dice2 = new System.Windows.Forms.Label();
            this.lbl_dice3 = new System.Windows.Forms.Label();
            this.lbl_dice4 = new System.Windows.Forms.Label();
            this.lbl_dice5 = new System.Windows.Forms.Label();
            this.btn_rollDice = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // lbl_dice1
            // 
            this.lbl_dice1.Image = global::DiceGame.Properties.Resources.dice_blank;
            this.lbl_dice1.Location = new System.Drawing.Point(194, 128);
            this.lbl_dice1.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.lbl_dice1.Name = "lbl_dice1";
            this.lbl_dice1.Size = new System.Drawing.Size(38, 41);
            this.lbl_dice1.TabIndex = 0;
            // 
            // lbl_dice2
            // 
            this.lbl_dice2.Image = global::DiceGame.Properties.Resources.dice_blank;
            this.lbl_dice2.Location = new System.Drawing.Point(236, 128);
            this.lbl_dice2.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.lbl_dice2.Name = "lbl_dice2";
            this.lbl_dice2.Size = new System.Drawing.Size(38, 41);
            this.lbl_dice2.TabIndex = 1;
            // 
            // lbl_dice3
            // 
            this.lbl_dice3.Image = global::DiceGame.Properties.Resources.dice_blank;
            this.lbl_dice3.Location = new System.Drawing.Point(278, 128);
            this.lbl_dice3.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.lbl_dice3.Name = "lbl_dice3";
            this.lbl_dice3.Size = new System.Drawing.Size(38, 41);
            this.lbl_dice3.TabIndex = 2;
            // 
            // lbl_dice4
            // 
            this.lbl_dice4.Image = global::DiceGame.Properties.Resources.dice_blank;
            this.lbl_dice4.Location = new System.Drawing.Point(320, 128);
            this.lbl_dice4.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.lbl_dice4.Name = "lbl_dice4";
            this.lbl_dice4.Size = new System.Drawing.Size(38, 41);
            this.lbl_dice4.TabIndex = 3;
            // 
            // lbl_dice5
            // 
            this.lbl_dice5.Image = global::DiceGame.Properties.Resources.dice_blank;
            this.lbl_dice5.Location = new System.Drawing.Point(362, 128);
            this.lbl_dice5.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.lbl_dice5.Name = "lbl_dice5";
            this.lbl_dice5.Size = new System.Drawing.Size(38, 41);
            this.lbl_dice5.TabIndex = 4;
            // 
            // btn_rollDice
            // 
            this.btn_rollDice.Location = new System.Drawing.Point(223, 260);
            this.btn_rollDice.Margin = new System.Windows.Forms.Padding(2);
            this.btn_rollDice.Name = "btn_rollDice";
            this.btn_rollDice.Size = new System.Drawing.Size(150, 41);
            this.btn_rollDice.TabIndex = 5;
            this.btn_rollDice.Text = "Roll the dice";
            this.btn_rollDice.UseVisualStyleBackColor = true;
            this.btn_rollDice.Click += new System.EventHandler(this.btn_rollDice_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(223, 221);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(150, 20);
            this.textBox1.TabIndex = 6;
            this.textBox1.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(588, 457);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.btn_rollDice);
            this.Controls.Add(this.lbl_dice5);
            this.Controls.Add(this.lbl_dice4);
            this.Controls.Add(this.lbl_dice3);
            this.Controls.Add(this.lbl_dice2);
            this.Controls.Add(this.lbl_dice1);
            this.Margin = new System.Windows.Forms.Padding(2);
            this.MaximizeBox = false;
            this.MaximumSize = new System.Drawing.Size(604, 495);
            this.MinimumSize = new System.Drawing.Size(604, 495);
            this.Name = "Form1";
            this.Text = "Flowers For CS-122";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbl_dice1;
        private System.Windows.Forms.Label lbl_dice2;
        private System.Windows.Forms.Label lbl_dice3;
        private System.Windows.Forms.Label lbl_dice4;
        private System.Windows.Forms.Label lbl_dice5;
        private System.Windows.Forms.Button btn_rollDice;
        private System.Windows.Forms.TextBox textBox1;
    }
}

