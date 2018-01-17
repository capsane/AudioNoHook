package com.capsane.audionohook;

// import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.app.Activity;
import android.widget.TextView;
import android.util.Log;

public class MainActivity extends Activity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("myjni");
        Log.e("loadLibrary", "load myjni is done");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) this.findViewById(R.id.sample_text);
        int add1 = 1;
        int add2 = 2;
        Log.e("to do native add", "...");

        // 为什么找不到这个native方法呢
        // int sum = add(add1, add2);
        int sum = 666666;
        tv.setText("sum = " + sum);
	    Log.e("123", "onCreate" + sum);
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native int add(int num1, int num2);
}
