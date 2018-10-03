namespace Fabric
{
    [Uno.Compiler.UxGenerated]
    public partial class QueryC: Fuse.Controls.Panel
    {
        global::Uno.UX.Property<string> Date_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Controls.TextInput Date;
        internal global::Fuse.Reactive.EventBinding temp_eb8;
        static QueryC()
        {
        }
        [global::Uno.UX.UXConstructor]
        public QueryC()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            Date = new global::Fuse.Controls.TextInput();
            Date_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Date, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("queryc_date");
            var temp2 = new global::Fuse.Reactive.Data("Querycargo");
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Fabric_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("querycresult");
            var temp4 = new global::Fuse.Controls.StackPanel();
            var temp5 = new global::Fuse.Controls.Text();
            var temp6 = new global::Fuse.Controls.Rectangle();
            var temp7 = new global::Fuse.Drawing.Stroke();
            var temp8 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp9 = new global::Fuse.Reactive.DataBinding(Date_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp10 = new global::Fuse.Controls.Button();
            var temp11 = new global::Fuse.Controls.Text();
            var temp12 = new global::Fuse.Gestures.Clicked();
            temp_eb8 = new global::Fuse.Reactive.EventBinding(temp2);
            var temp13 = new global::Fuse.Controls.ScrollView();
            var temp14 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "QueryC.ux";
            temp4.SourceLineNumber = 4;
            temp4.SourceFileName = "QueryC.ux";
            temp4.Children.Add(temp5);
            temp4.Children.Add(Date);
            temp4.Children.Add(temp10);
            temp4.Children.Add(temp13);
            temp5.Value = "Fabric QueryCargo Test";
            temp5.Alignment = Fuse.Elements.Alignment.Center;
            temp5.SourceLineNumber = 5;
            temp5.SourceFileName = "QueryC.ux";
            Date.PlaceholderText = "Date(ex:20180909)";
            Date.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Date.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Date.Margin = float4(0f, 10f, 0f, 0f);
            Date.Padding = float4(5f, 5f, 5f, 5f);
            Date.Name = __selector1;
            Date.SourceLineNumber = 7;
            Date.SourceFileName = "QueryC.ux";
            Date.Children.Add(temp6);
            Date.Bindings.Add(temp9);
            temp6.Layer = Fuse.Layer.Background;
            temp6.SourceLineNumber = 8;
            temp6.SourceFileName = "QueryC.ux";
            temp6.Strokes.Add(temp7);
            temp7.Width = 2f;
            temp7.Brush = temp8;
            temp1.SourceLineNumber = 7;
            temp1.SourceFileName = "QueryC.ux";
            temp10.Color = float4(0f, 0f, 0f, 1f);
            temp10.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp10.Margin = float4(10f, 5f, 10f, 10f);
            temp10.SourceLineNumber = 13;
            temp10.SourceFileName = "QueryC.ux";
            temp10.Children.Add(temp11);
            temp10.Children.Add(temp12);
            temp11.Value = "query";
            temp11.TextColor = Fuse.Drawing.Colors.White;
            temp11.Alignment = Fuse.Elements.Alignment.Center;
            temp11.SourceLineNumber = 13;
            temp11.SourceFileName = "QueryC.ux";
            temp12.SourceLineNumber = 14;
            temp12.SourceFileName = "QueryC.ux";
            temp12.Handler += temp_eb8.OnEvent;
            temp12.Bindings.Add(temp_eb8);
            temp2.SourceLineNumber = 14;
            temp2.SourceFileName = "QueryC.ux";
            temp13.SourceLineNumber = 16;
            temp13.SourceFileName = "QueryC.ux";
            temp13.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 17;
            temp.SourceFileName = "QueryC.ux";
            temp.Bindings.Add(temp14);
            temp3.SourceLineNumber = 17;
            temp3.SourceFileName = "QueryC.ux";
            this.Children.Add(temp4);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Date";
    }
}
