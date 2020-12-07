package com.example.ss.ss_hms;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class m_login_complete extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_m_login_complete);

        Button to_main;
        to_main =(Button) findViewById(R.id.to_main);

        to_main.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_login_complete.this , MainActivity.class);
                startActivity(i);
            }
        });
       
        Button to_room_m;
        to_room_m =(Button) findViewById(R.id.manage_rooms);

        to_room_m.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_login_complete.this , room_management.class);
                startActivity(i);
            }
        });
       
        Button to_m_re;
        to_m_re =(Button) findViewById(R.id.reservation);

        to_m_re.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_login_complete.this , m_reservation.class);
                startActivity(i);
            }
        });
        
        Button to_checkout;
        to_checkout =(Button) findViewById(R.id.checkout);

        to_checkout.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_login_complete.this , checkout.class);
                startActivity(i);
            }
        });
        
        Button to_m_query;
        to_m_query =(Button) findViewById(R.id.query);

        to_m_query.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_login_complete.this , c_query.class);
                startActivity(i);
            }
        });
        

    }
}
