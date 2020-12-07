package com.example.ss.ss_hms;

import android.app.AlertDialog;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class m_reservation extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_m_reservation);

        //add
        Button to_cash;
        to_cash =(Button) findViewById(R.id.c_cash);

        to_cash.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                AlertDialog.Builder builder = new AlertDialog.Builder(m_reservation.this);
                builder.setTitle("Test cash page");
                builder.setPositiveButton("True" ,  null );
                builder.setNegativeButton("False", null);
                builder.show();
            }
        });
        //end

        //add
        Button to_alipay;
        to_alipay =(Button) findViewById(R.id.c_alipay);

        to_alipay.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                AlertDialog.Builder builder = new AlertDialog.Builder(m_reservation.this);
                builder.setTitle("Test alipay page");
                builder.setPositiveButton("True" ,  null );
                builder.setNegativeButton("False", null);
                builder.show();
            }
        });
        //end

        //add
        Button to_wechat;
        to_wechat =(Button) findViewById(R.id.c_wechat);

        to_wechat.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                AlertDialog.Builder builder1 = new AlertDialog.Builder(m_reservation.this);
                builder1.setTitle("Test wechat page");
                builder1.setPositiveButton("True" ,  null );
                builder1.setNegativeButton("False", null);
                builder1.show();
            }
        });
        //end

        //add
        Button to_bankcard;
        to_bankcard =(Button) findViewById(R.id.c_bankcard);

        to_bankcard.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                AlertDialog.Builder builder2 = new AlertDialog.Builder(m_reservation.this);
                builder2.setTitle("Test debit page");
                builder2.setPositiveButton("True" ,  null );
                builder2.setNegativeButton("False", null);
                builder2.show();
            }
        });
        //end

        //add
        Button to_creditcard;
        to_creditcard =(Button) findViewById(R.id.c_creditcard);

        to_creditcard.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                AlertDialog.Builder builder3 = new AlertDialog.Builder(m_reservation.this);
                builder3.setTitle("Test credit page");
                builder3.setPositiveButton("True" ,  null );
                builder3.setNegativeButton("False", null);
                builder3.show();
            }
        });
        //end

        //add
        Button submit;
        submit =(Button) findViewById(R.id.c_confirm);

        submit.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                AlertDialog.Builder builder = new AlertDialog.Builder(m_reservation.this);
                builder.setTitle("Test success page");
                builder.setPositiveButton("True" ,  null );
                builder.setNegativeButton("False", null);
                builder.show();
            }
        });
        //end

        //add
        Button cancel;
        cancel =(Button) findViewById(R.id.c_cancel);

        cancel.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){

                Intent i = new Intent(m_reservation.this , m_login_complete.class);
                startActivity(i);
            }
        });
        //end
    }
}
