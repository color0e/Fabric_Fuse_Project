namespace Fabric
{
    [Uno.Compiler.UxGenerated]
    public partial class Sign: Fuse.Controls.Panel
    {
        global::Uno.UX.Property<string> Key_Value_inst;
        global::Uno.UX.Property<string> Driverid_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Controls.TextInput Key;
        internal global::Fuse.Controls.TextInput Driverid;
        internal global::Fuse.Reactive.EventBinding temp_eb10;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "Key",
            "Driverid",
            "temp_eb10"
        };
        static Sign()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Sign()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            Key = new global::Fuse.Controls.TextInput();
            Key_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Key, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("sign_key");
            Driverid = new global::Fuse.Controls.TextInput();
            Driverid_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Driverid, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("sign_did");
            var temp3 = new global::Fuse.Reactive.Data("Signcargo");
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Fabric_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("signresult");
            var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp6 = new global::Fuse.Controls.StackPanel();
            var temp7 = new global::Fuse.Controls.Text();
            var temp8 = new global::Fuse.Controls.Rectangle();
            var temp9 = new global::Fuse.Drawing.Stroke();
            var temp10 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp11 = new global::Fuse.Reactive.DataBinding(Key_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp12 = new global::Fuse.Controls.Rectangle();
            var temp13 = new global::Fuse.Drawing.Stroke();
            var temp14 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp15 = new global::Fuse.Reactive.DataBinding(Driverid_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp16 = new global::Fuse.Controls.Button();
            var temp17 = new global::Fuse.Controls.Text();
            var temp18 = new global::Fuse.Gestures.Clicked();
            temp_eb10 = new global::Fuse.Reactive.EventBinding(temp3);
            var temp19 = new global::Fuse.Controls.ScrollView();
            var temp20 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Sign.ux";
            temp5.Code = "\n\tvar fabric = require(\"js/fabric.js\");\n\tmodule.exports={\n\t\tsign_key:fabric.sign_key,\n\t\tsign_did:fabric.sign_did,\n\t\tSigncargo:fabric.Signcargo,\n        signresult:fabric.signresult\n\t};\n\t";
            temp5.LineNumber = 2;
            temp5.FileName = "Sign.ux";
            temp5.SourceLineNumber = 2;
            temp5.SourceFileName = "Sign.ux";
            temp6.SourceLineNumber = 11;
            temp6.SourceFileName = "Sign.ux";
            temp6.Children.Add(temp7);
            temp6.Children.Add(Key);
            temp6.Children.Add(Driverid);
            temp6.Children.Add(temp16);
            temp6.Children.Add(temp19);
            temp7.Value = "Fabric SignContract Test";
            temp7.Alignment = Fuse.Elements.Alignment.Center;
            temp7.SourceLineNumber = 12;
            temp7.SourceFileName = "Sign.ux";
            Key.PlaceholderText = "Key(ex:20180909_1)";
            Key.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Key.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Key.Margin = float4(0f, 10f, 0f, 0f);
            Key.Padding = float4(5f, 5f, 5f, 5f);
            Key.Name = __selector1;
            Key.SourceLineNumber = 14;
            Key.SourceFileName = "Sign.ux";
            Key.Children.Add(temp8);
            Key.Bindings.Add(temp11);
            temp8.Layer = Fuse.Layer.Background;
            temp8.SourceLineNumber = 15;
            temp8.SourceFileName = "Sign.ux";
            temp8.Strokes.Add(temp9);
            temp9.Width = 2f;
            temp9.Brush = temp10;
            temp1.SourceLineNumber = 14;
            temp1.SourceFileName = "Sign.ux";
            Driverid.PlaceholderText = "Driver id";
            Driverid.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Driverid.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Driverid.Padding = float4(5f, 5f, 5f, 5f);
            Driverid.Name = __selector2;
            Driverid.SourceLineNumber = 21;
            Driverid.SourceFileName = "Sign.ux";
            Driverid.Children.Add(temp12);
            Driverid.Bindings.Add(temp15);
            temp12.Layer = Fuse.Layer.Background;
            temp12.SourceLineNumber = 22;
            temp12.SourceFileName = "Sign.ux";
            temp12.Strokes.Add(temp13);
            temp13.Width = 2f;
            temp13.Brush = temp14;
            temp2.SourceLineNumber = 21;
            temp2.SourceFileName = "Sign.ux";
            temp16.Color = float4(0f, 0f, 0f, 1f);
            temp16.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp16.Margin = float4(10f, 5f, 10f, 10f);
            temp16.SourceLineNumber = 27;
            temp16.SourceFileName = "Sign.ux";
            temp16.Children.Add(temp17);
            temp16.Children.Add(temp18);
            temp17.Value = "Sign";
            temp17.TextColor = Fuse.Drawing.Colors.White;
            temp17.Alignment = Fuse.Elements.Alignment.Center;
            temp17.SourceLineNumber = 27;
            temp17.SourceFileName = "Sign.ux";
            temp18.SourceLineNumber = 28;
            temp18.SourceFileName = "Sign.ux";
            temp18.Handler += temp_eb10.OnEvent;
            temp18.Bindings.Add(temp_eb10);
            temp3.SourceLineNumber = 28;
            temp3.SourceFileName = "Sign.ux";
            temp19.SourceLineNumber = 30;
            temp19.SourceFileName = "Sign.ux";
            temp19.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 31;
            temp.SourceFileName = "Sign.ux";
            temp.Bindings.Add(temp20);
            temp4.SourceLineNumber = 31;
            temp4.SourceFileName = "Sign.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(Key);
            __g_nametable.Objects.Add(Driverid);
            __g_nametable.Objects.Add(temp_eb10);
            this.Children.Add(temp5);
            this.Children.Add(temp6);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Key";
        static global::Uno.UX.Selector __selector2 = "Driverid";
    }
}
