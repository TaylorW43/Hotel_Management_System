package com.example.ss.ss_hms;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import android.widget.Button;
import android.view.View;
import android.content.Intent;


public class c_signup extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_c_signup);

        Button back_to_c_login;
        back_to_c_login =(Button) findViewById(R.id.back);

        back_to_c_login.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(c_signup.this , c_login.class);
                startActivity(i);
            }
        });
        
    }
}
