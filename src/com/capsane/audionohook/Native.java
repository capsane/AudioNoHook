package com.capsane.audionohook;

import android.util.Log;

/**
 * @author capsane
 * Created by capsane on 18-1-17.
 */

public class Native{
    static {
        try {
            System.loadLibrary("myjni");
            Log.e("loadLibrary", "myjni is loaded");
        } catch (Exception e) {
            e.printStackTrace();
            Log.e("Exception", "myjni not loaded!!!!!");
        }
    }
    static native int add(int a, int b);
}
