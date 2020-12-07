package com.example.ss.ss_hms;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class c_login_complete extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_c_login_complete);

        Button to_main;
        to_main =(Button) findViewById(R.id.to_main);

        to_main.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(c_login_complete.this , MainActivity.class);
                startActivity(i);
            }
        });
       
        Button to_query;
        to_query =(Button) findViewById(R.id.my_order);

        to_query.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(c_login_complete.this , c_query.class);
                startActivity(i);
            }
        });
   
        Button to_reservation;
        to_reservation =(Button) findViewById(R.id.reservation);

        to_reservation.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(c_login_complete.this , c_reservation.class);
                startActivity(i);
            }
        });
     
    }
}
