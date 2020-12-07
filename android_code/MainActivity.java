package com.example.ss.ss_hms;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Button;
import android.view.View;
import android.content.Intent;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //add
        Button to_customer_login;
        to_customer_login =(Button) findViewById(R.id.customer_entry);

        to_customer_login.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(MainActivity.this , c_login.class);
                startActivity(i);
            }
    });
        //end


        //add
        Button to_m_login;
        to_m_login =(Button) findViewById(R.id.management_entry);

        to_m_login.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(MainActivity.this , m_login.class);
                startActivity(i);
            }
        });
        //end
}
}
