namespace Fabric
{
    [Uno.Compiler.UxGenerated]
    public partial class Complete: Fuse.Controls.Panel
    {
        global::Uno.UX.Property<string> Key_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Controls.TextInput Key;
        internal global::Fuse.Reactive.EventBinding temp_eb1;
        static Complete()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Complete()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            Key = new global::Fuse.Controls.TextInput();
            Key_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Key, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("complete_key");
            var temp2 = new global::Fuse.Reactive.Data("Completecargo");
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Fabric_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("completeresult");
            var temp4 = new global::Fuse.Controls.StackPanel();
            var temp5 = new global::Fuse.Controls.Text();
            var temp6 = new global::Fuse.Controls.Rectangle();
            var temp7 = new global::Fuse.Drawing.Stroke();
            var temp8 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp9 = new global::Fuse.Reactive.DataBinding(Key_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp10 = new global::Fuse.Controls.Button();
            var temp11 = new global::Fuse.Controls.Text();
            var temp12 = new global::Fuse.Gestures.Clicked();
            temp_eb1 = new global::Fuse.Reactive.EventBinding(temp2);
            var temp13 = new global::Fuse.Controls.ScrollView();
            var temp14 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Complete.ux";
            temp4.SourceLineNumber = 4;
            temp4.SourceFileName = "Complete.ux";
            temp4.Children.Add(temp5);
            temp4.Children.Add(Key);
            temp4.Children.Add(temp10);
            temp4.Children.Add(temp13);
            temp5.Value = "Fabric CompleteContract Test";
            temp5.Alignment = Fuse.Elements.Alignment.Center;
            temp5.SourceLineNumber = 5;
            temp5.SourceFileName = "Complete.ux";
            Key.PlaceholderText = "Key(ex:20180909_1)";
            Key.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Key.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Key.Margin = float4(0f, 10f, 0f, 0f);
            Key.Padding = float4(5f, 5f, 5f, 5f);
            Key.Name = __selector1;
            Key.SourceLineNumber = 7;
            Key.SourceFileName = "Complete.ux";
            Key.Children.Add(temp6);
            Key.Bindings.Add(temp9);
            temp6.Layer = Fuse.Layer.Background;
            temp6.SourceLineNumber = 8;
            temp6.SourceFileName = "Complete.ux";
            temp6.Strokes.Add(temp7);
            temp7.Width = 2f;
            temp7.Brush = temp8;
            temp1.SourceLineNumber = 7;
            temp1.SourceFileName = "Complete.ux";
            temp10.Color = float4(0f, 0f, 0f, 1f);
            temp10.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp10.Margin = float4(10f, 5f, 10f, 10f);
            temp10.SourceLineNumber = 13;
            temp10.SourceFileName = "Complete.ux";
            temp10.Children.Add(temp11);
            temp10.Children.Add(temp12);
            temp11.Value = "Complete";
            temp11.TextColor = Fuse.Drawing.Colors.White;
            temp11.Alignment = Fuse.Elements.Alignment.Center;
            temp11.SourceLineNumber = 13;
            temp11.SourceFileName = "Complete.ux";
            temp12.SourceLineNumber = 14;
            temp12.SourceFileName = "Complete.ux";
            temp12.Handler += temp_eb1.OnEvent;
            temp12.Bindings.Add(temp_eb1);
            temp2.SourceLineNumber = 14;
            temp2.SourceFileName = "Complete.ux";
            temp13.SourceLineNumber = 16;
            temp13.SourceFileName = "Complete.ux";
            temp13.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 17;
            temp.SourceFileName = "Complete.ux";
            temp.Bindings.Add(temp14);
            temp3.SourceLineNumber = 17;
            temp3.SourceFileName = "Complete.ux";
            this.Children.Add(temp4);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Key";
    }
}
