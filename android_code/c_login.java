package com.example.ss.ss_hms;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import android.widget.Button;
import android.view.View;
import android.content.Intent;



public class c_login extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_c_login);

        Button to_customer_signup;
        to_customer_signup =(Button) findViewById(R.id.c_signup);

        to_customer_signup.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(c_login.this , c_signup.class);
                startActivity(i);
            }
        });
        
        Button back_to_main;
        back_to_main =(Button) findViewById(R.id.back);

        back_to_main.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(c_login.this , MainActivity.class);
                startActivity(i);
            }
        });
       
        Button to_login_complete;
        to_login_complete =(Button) findViewById(R.id.signin_button);

        to_login_complete.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(c_login.this , c_login_complete.class);
                startActivity(i);
            }
        });
       

    }
}
