package com.example.ss.ss_hms;

import android.app.AlertDialog;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class checkout extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_checkout);

        
        Button cancel;
        cancel =(Button) findViewById(R.id.checkout_cancel);

        cancel.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(checkout.this , m_login_complete.class);
                startActivity(i);
            }
        });
       
        Button submit;
        submit =(Button) findViewById(R.id.checkout_confirm);

        submit.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                AlertDialog.Builder builder = new AlertDialog.Builder(checkout.this);
                builder.setTitle("Test success");
                builder.setPositiveButton("True" ,  null );
                builder.setNegativeButton("False", null);
                builder.show();
            }
        });
      
    }
}
