using System;

using System.Runtime.InteropServices;

namespace cs_lib
{
  public class TestWrapper
  {
    [DllImport("libtest.dylib", EntryPoint="DoNothing")]
    public static extern void DoNothing();

    [DllImport("libtest.dylib", EntryPoint="ReturnString")]
    public static extern IntPtr ReturnString();

    [DllImport("libtest.dylib", EntryPoint="TakeAndReturnNewString")]
    public static extern IntPtr TakeAndReturnNewString(string OriginalString);

    [DllImport("libtest.dylib", EntryPoint="ReturnInt")]
    public static extern int ReturnInt();

    [DllImport("libtest.dylib", EntryPoint="TakeOneIntAndReturnNewInt")]
    public static extern int TakeOneIntAndReturnNewInt(int OriginalInt);
  }
}
