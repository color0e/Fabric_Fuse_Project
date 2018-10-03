namespace Fabric
{
    [Uno.Compiler.UxGenerated]
    public partial class QueryC: Fuse.Controls.Panel
    {
        global::Uno.UX.Property<string> Date_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Controls.TextInput Date;
        internal global::Fuse.Reactive.EventBinding temp_eb8;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "Date",
            "temp_eb8"
        };
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
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            Date = new global::Fuse.Controls.TextInput();
            Date_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Date, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("queryc_date");
            var temp2 = new global::Fuse.Reactive.Data("Querycargo");
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Fabric_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("querycresult");
            var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp5 = new global::Fuse.Controls.StackPanel();
            var temp6 = new global::Fuse.Controls.Text();
            var temp7 = new global::Fuse.Controls.Rectangle();
            var temp8 = new global::Fuse.Drawing.Stroke();
            var temp9 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp10 = new global::Fuse.Reactive.DataBinding(Date_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Controls.Button();
            var temp12 = new global::Fuse.Controls.Text();
            var temp13 = new global::Fuse.Gestures.Clicked();
            temp_eb8 = new global::Fuse.Reactive.EventBinding(temp2);
            var temp14 = new global::Fuse.Controls.ScrollView();
            var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "QueryC.ux";
            temp4.Code = "\n\tvar fabric = require(\"js/fabric.js\");\n\tmodule.exports={\n\t\tqueryc_date:fabric.queryc_date,\n\t\tQuerycargo:fabric.Querycargo,\n\t\tquerycresult:fabric.querycresult\n\t};\n\t";
            temp4.LineNumber = 2;
            temp4.FileName = "QueryC.ux";
            temp4.SourceLineNumber = 2;
            temp4.SourceFileName = "QueryC.ux";
            temp5.SourceLineNumber = 10;
            temp5.SourceFileName = "QueryC.ux";
            temp5.Children.Add(temp6);
            temp5.Children.Add(Date);
            temp5.Children.Add(temp11);
            temp5.Children.Add(temp14);
            temp6.Value = "Fabric QueryCargo Test";
            temp6.Alignment = Fuse.Elements.Alignment.Center;
            temp6.SourceLineNumber = 11;
            temp6.SourceFileName = "QueryC.ux";
            Date.PlaceholderText = "Date(ex:20180909)";
            Date.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Date.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Date.Margin = float4(0f, 10f, 0f, 0f);
            Date.Padding = float4(5f, 5f, 5f, 5f);
            Date.Name = __selector1;
            Date.SourceLineNumber = 13;
            Date.SourceFileName = "QueryC.ux";
            Date.Children.Add(temp7);
            Date.Bindings.Add(temp10);
            temp7.Layer = Fuse.Layer.Background;
            temp7.SourceLineNumber = 14;
            temp7.SourceFileName = "QueryC.ux";
            temp7.Strokes.Add(temp8);
            temp8.Width = 2f;
            temp8.Brush = temp9;
            temp1.SourceLineNumber = 13;
            temp1.SourceFileName = "QueryC.ux";
            temp11.Color = float4(0f, 0f, 0f, 1f);
            temp11.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp11.Margin = float4(10f, 5f, 10f, 10f);
            temp11.SourceLineNumber = 19;
            temp11.SourceFileName = "QueryC.ux";
            temp11.Children.Add(temp12);
            temp11.Children.Add(temp13);
            temp12.Value = "query";
            temp12.TextColor = Fuse.Drawing.Colors.White;
            temp12.Alignment = Fuse.Elements.Alignment.Center;
            temp12.SourceLineNumber = 19;
            temp12.SourceFileName = "QueryC.ux";
            temp13.SourceLineNumber = 20;
            temp13.SourceFileName = "QueryC.ux";
            temp13.Handler += temp_eb8.OnEvent;
            temp13.Bindings.Add(temp_eb8);
            temp2.SourceLineNumber = 20;
            temp2.SourceFileName = "QueryC.ux";
            temp14.SourceLineNumber = 22;
            temp14.SourceFileName = "QueryC.ux";
            temp14.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 23;
            temp.SourceFileName = "QueryC.ux";
            temp.Bindings.Add(temp15);
            temp3.SourceLineNumber = 23;
            temp3.SourceFileName = "QueryC.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(Date);
            __g_nametable.Objects.Add(temp_eb8);
            this.Children.Add(temp4);
            this.Children.Add(temp5);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Date";
    }
}
