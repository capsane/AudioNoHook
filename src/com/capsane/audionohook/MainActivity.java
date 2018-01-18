package com.capsane.audionohook;

// import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.app.Activity;
import android.widget.TextView;
import android.util.Log;

public class MainActivity extends Activity {

    // Used to load the 'native-lib' library on application startup.
    static {
        try {
            System.loadLibrary("myjni");
            Log.e("loadLibrary", "myjni is loaded");
        } catch (Exception e) {
            e.printStackTrace();
            Log.e("Exception", "myjni not loaded!!!!!");
        }
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) this.findViewById(R.id.sample_text);
        int add1 = 1000;
        int add2 = 2000;
        Log.e("to do native add", "...");

        // 为什么找不到这个native方法呢
        int sum = add(add1, add2);
        // int sum = Native.add(add1, add2);
        // int sum = 666666;
        tv.setText("sum = " + sum);
	    Log.e("1231", "onCreate" + sum);
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    // public native int add(int num1, int num2);    
    public static native int add(int num1, int num2);

}
