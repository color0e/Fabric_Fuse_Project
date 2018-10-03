namespace Fabric
{
    [Uno.Compiler.UxGenerated]
    public partial class Cancel: Fuse.Controls.Panel
    {
        global::Uno.UX.Property<string> Key_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Controls.TextInput Key;
        internal global::Fuse.Reactive.EventBinding temp_eb0;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "Key",
            "temp_eb0"
        };
        static Cancel()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Cancel()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            Key = new global::Fuse.Controls.TextInput();
            Key_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Key, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("cancel_key");
            var temp2 = new global::Fuse.Reactive.Data("Cancelcargo");
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Fabric_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("cancelresult");
            var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp5 = new global::Fuse.Controls.StackPanel();
            var temp6 = new global::Fuse.Controls.Text();
            var temp7 = new global::Fuse.Controls.Rectangle();
            var temp8 = new global::Fuse.Drawing.Stroke();
            var temp9 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp10 = new global::Fuse.Reactive.DataBinding(Key_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Controls.Button();
            var temp12 = new global::Fuse.Controls.Text();
            var temp13 = new global::Fuse.Gestures.Clicked();
            temp_eb0 = new global::Fuse.Reactive.EventBinding(temp2);
            var temp14 = new global::Fuse.Controls.ScrollView();
            var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Cancel.ux";
            temp4.Code = "\n\tvar fabric = require(\"js/fabric.js\");\n\tmodule.exports={\n\t\tcancel_key:fabric.cancel_key,\n\t\tCancelcargo:fabric.Cancelcargo,\n\t\tcancelresult:fabric.cancelresult\n\t\t};\n\t";
            temp4.LineNumber = 2;
            temp4.FileName = "Cancel.ux";
            temp4.SourceLineNumber = 2;
            temp4.SourceFileName = "Cancel.ux";
            temp5.SourceLineNumber = 11;
            temp5.SourceFileName = "Cancel.ux";
            temp5.Children.Add(temp6);
            temp5.Children.Add(Key);
            temp5.Children.Add(temp11);
            temp5.Children.Add(temp14);
            temp6.Value = "Fabric CancelContract Test";
            temp6.Alignment = Fuse.Elements.Alignment.Center;
            temp6.SourceLineNumber = 12;
            temp6.SourceFileName = "Cancel.ux";
            Key.PlaceholderText = "Key(ex:20180909_1)";
            Key.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Key.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Key.Margin = float4(0f, 10f, 0f, 0f);
            Key.Padding = float4(5f, 5f, 5f, 5f);
            Key.Name = __selector1;
            Key.SourceLineNumber = 14;
            Key.SourceFileName = "Cancel.ux";
            Key.Children.Add(temp7);
            Key.Bindings.Add(temp10);
            temp7.Layer = Fuse.Layer.Background;
            temp7.SourceLineNumber = 15;
            temp7.SourceFileName = "Cancel.ux";
            temp7.Strokes.Add(temp8);
            temp8.Width = 2f;
            temp8.Brush = temp9;
            temp1.SourceLineNumber = 14;
            temp1.SourceFileName = "Cancel.ux";
            temp11.Color = float4(0f, 0f, 0f, 1f);
            temp11.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp11.Margin = float4(10f, 10f, 10f, 10f);
            temp11.SourceLineNumber = 20;
            temp11.SourceFileName = "Cancel.ux";
            temp11.Children.Add(temp12);
            temp11.Children.Add(temp13);
            temp12.Value = "Cancel";
            temp12.TextColor = Fuse.Drawing.Colors.White;
            temp12.Alignment = Fuse.Elements.Alignment.Center;
            temp12.SourceLineNumber = 20;
            temp12.SourceFileName = "Cancel.ux";
            temp13.SourceLineNumber = 21;
            temp13.SourceFileName = "Cancel.ux";
            temp13.Handler += temp_eb0.OnEvent;
            temp13.Bindings.Add(temp_eb0);
            temp2.SourceLineNumber = 21;
            temp2.SourceFileName = "Cancel.ux";
            temp14.SourceLineNumber = 23;
            temp14.SourceFileName = "Cancel.ux";
            temp14.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 24;
            temp.SourceFileName = "Cancel.ux";
            temp.Bindings.Add(temp15);
            temp3.SourceLineNumber = 24;
            temp3.SourceFileName = "Cancel.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(Key);
            __g_nametable.Objects.Add(temp_eb0);
            this.Children.Add(temp4);
            this.Children.Add(temp5);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Key";
    }
}
