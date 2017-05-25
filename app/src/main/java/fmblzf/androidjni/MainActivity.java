package fmblzf.androidjni;

public class MainActivity{
    /**
     * 静态加载so库文件
     */
    static {
        System.loadLibrary("native-lib");
    }
    public static native String stringFromJNI();;//是否静态不影响
}