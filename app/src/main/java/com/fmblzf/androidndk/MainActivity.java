package com.fmblzf.androidndk;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

import com.fmblzf.androidndk.ndk.AndroidNDK;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String test = AndroidNDK.test("123");
        Log.e("MainActivity",test);
    }
}
