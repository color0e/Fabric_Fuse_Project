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
            var temp5 = new global::Fuse.Controls.StackPanel();
            var temp6 = new global::Fuse.Controls.Text();
            var temp7 = new global::Fuse.Controls.Rectangle();
            var temp8 = new global::Fuse.Drawing.Stroke();
            var temp9 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp10 = new global::Fuse.Reactive.DataBinding(Key_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Controls.Rectangle();
            var temp12 = new global::Fuse.Drawing.Stroke();
            var temp13 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp14 = new global::Fuse.Reactive.DataBinding(Driverid_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp15 = new global::Fuse.Controls.Button();
            var temp16 = new global::Fuse.Controls.Text();
            var temp17 = new global::Fuse.Gestures.Clicked();
            temp_eb10 = new global::Fuse.Reactive.EventBinding(temp3);
            var temp18 = new global::Fuse.Controls.ScrollView();
            var temp19 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Sign.ux";
            temp5.SourceLineNumber = 4;
            temp5.SourceFileName = "Sign.ux";
            temp5.Children.Add(temp6);
            temp5.Children.Add(Key);
            temp5.Children.Add(Driverid);
            temp5.Children.Add(temp15);
            temp5.Children.Add(temp18);
            temp6.Value = "Fabric SignContract Test";
            temp6.Alignment = Fuse.Elements.Alignment.Center;
            temp6.SourceLineNumber = 5;
            temp6.SourceFileName = "Sign.ux";
            Key.PlaceholderText = "Key(ex:20180909_1)";
            Key.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Key.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Key.Margin = float4(0f, 10f, 0f, 0f);
            Key.Padding = float4(5f, 5f, 5f, 5f);
            Key.Name = __selector1;
            Key.SourceLineNumber = 7;
            Key.SourceFileName = "Sign.ux";
            Key.Children.Add(temp7);
            Key.Bindings.Add(temp10);
            temp7.Layer = Fuse.Layer.Background;
            temp7.SourceLineNumber = 8;
            temp7.SourceFileName = "Sign.ux";
            temp7.Strokes.Add(temp8);
            temp8.Width = 2f;
            temp8.Brush = temp9;
            temp1.SourceLineNumber = 7;
            temp1.SourceFileName = "Sign.ux";
            Driverid.PlaceholderText = "Driver id";
            Driverid.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Driverid.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Driverid.Padding = float4(5f, 5f, 5f, 5f);
            Driverid.Name = __selector2;
            Driverid.SourceLineNumber = 14;
            Driverid.SourceFileName = "Sign.ux";
            Driverid.Children.Add(temp11);
            Driverid.Bindings.Add(temp14);
            temp11.Layer = Fuse.Layer.Background;
            temp11.SourceLineNumber = 15;
            temp11.SourceFileName = "Sign.ux";
            temp11.Strokes.Add(temp12);
            temp12.Width = 2f;
            temp12.Brush = temp13;
            temp2.SourceLineNumber = 14;
            temp2.SourceFileName = "Sign.ux";
            temp15.Color = float4(0f, 0f, 0f, 1f);
            temp15.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp15.Margin = float4(10f, 5f, 10f, 10f);
            temp15.SourceLineNumber = 20;
            temp15.SourceFileName = "Sign.ux";
            temp15.Children.Add(temp16);
            temp15.Children.Add(temp17);
            temp16.Value = "Sign";
            temp16.TextColor = Fuse.Drawing.Colors.White;
            temp16.Alignment = Fuse.Elements.Alignment.Center;
            temp16.SourceLineNumber = 20;
            temp16.SourceFileName = "Sign.ux";
            temp17.SourceLineNumber = 21;
            temp17.SourceFileName = "Sign.ux";
            temp17.Handler += temp_eb10.OnEvent;
            temp17.Bindings.Add(temp_eb10);
            temp3.SourceLineNumber = 21;
            temp3.SourceFileName = "Sign.ux";
            temp18.SourceLineNumber = 23;
            temp18.SourceFileName = "Sign.ux";
            temp18.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 24;
            temp.SourceFileName = "Sign.ux";
            temp.Bindings.Add(temp19);
            temp4.SourceLineNumber = 24;
            temp4.SourceFileName = "Sign.ux";
            this.Children.Add(temp5);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Key";
        static global::Uno.UX.Selector __selector2 = "Driverid";
    }
}
