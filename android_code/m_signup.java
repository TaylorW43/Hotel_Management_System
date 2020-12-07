package com.example.ss.ss_hms;

import android.app.AlertDialog;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class m_signup extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_m_signup);

        //add
        Button back;
        back =(Button) findViewById(R.id.back);

        back.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_signup.this , m_login.class);
                startActivity(i);
            }
        });
        //end

        //add
        Button query;
        query =(Button) findViewById(R.id.signup);

        query.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                AlertDialog.Builder builder = new AlertDialog.Builder(m_signup.this);
                builder.setTitle("Test register success page");
                builder.setPositiveButton("True" ,  null );
                builder.setNegativeButton("False", null);
                builder.show();
            }
        });
        //end
    }
}
