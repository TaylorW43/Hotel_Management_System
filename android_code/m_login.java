package com.example.ss.ss_hms;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import android.widget.Button;
import android.view.View;
import android.content.Intent;


public class m_login extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_m_login);

        //add
        Button to_m_signup;
        to_m_signup =(Button) findViewById(R.id.signup);

        to_m_signup.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_login.this , m_signup.class);
                startActivity(i);
            }
        });
        //end

        //add
        Button to_m_login_complete;
        to_m_login_complete =(Button) findViewById(R.id.signin_button);

        to_m_login_complete.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_login.this , m_login_complete.class);
                startActivity(i);
            }
        });
        //end

        //add
        Button back;
        back =(Button) findViewById(R.id.back);

        back.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_login.this , MainActivity.class);
                startActivity(i);
            }
        });
        //end
    }
}
