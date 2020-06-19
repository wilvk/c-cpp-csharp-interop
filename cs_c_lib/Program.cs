using System;
using System.Runtime.InteropServices;

namespace cs_lib
{
    class Program
    {
        static void Main(string[] args)
        {
            TestWrapper.DoNothing();

            IntPtr returnStringPointer = TestWrapper.ReturnString();
            string returnString = Marshal.PtrToStringAnsi(returnStringPointer);
            Console.WriteLine(returnString);

            string originalString = "OriginalString";
            IntPtr takeAndReturnStringPointer = TestWrapper.TakeAndReturnNewString(originalString);
            string takeAndReturnString = Marshal.PtrToStringAnsi(takeAndReturnStringPointer);
            Console.WriteLine(takeAndReturnString);

            int returnInt = TestWrapper.ReturnInt();
            Console.WriteLine(returnInt);

            int originalInt = 22;
            int returnNewInt = TestWrapper.TakeOneIntAndReturnNewInt(originalInt);
            Console.WriteLine(returnNewInt);
        }
    }
}
