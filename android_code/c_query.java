package com.example.ss.ss_hms;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import android.widget.Button;
import android.view.View;
import android.content.Intent;
import android.app.AlertDialog;


public class c_query extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_c_query);

        Button back;
        back =(Button) findViewById(R.id.back);

        back.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(c_query.this , MainActivity.class);
                startActivity(i);
            }
        });
  
        Button query;
        query =(Button) findViewById(R.id.query);

        query.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                AlertDialog.Builder builder = new AlertDialog.Builder(c_query.this);
                builder.setTitle("Test Find Page");
                builder.setPositiveButton("True" ,  null );
                builder.setNegativeButton("False", null);
                builder.show();
            }
        });
        //end

    }
}
