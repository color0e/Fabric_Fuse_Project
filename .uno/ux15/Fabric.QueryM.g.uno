namespace Fabric
{
    [Uno.Compiler.UxGenerated]
    public partial class QueryM: Fuse.Controls.Panel
    {
        global::Uno.UX.Property<string> Userid_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Controls.TextInput Userid;
        internal global::Fuse.Reactive.EventBinding temp_eb9;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "Userid",
            "temp_eb9"
        };
        static QueryM()
        {
        }
        [global::Uno.UX.UXConstructor]
        public QueryM()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            Userid = new global::Fuse.Controls.TextInput();
            Userid_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Userid, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("querym_uid");
            var temp2 = new global::Fuse.Reactive.Data("Querymylist");
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Fabric_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("querymresult");
            var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp5 = new global::Fuse.Controls.StackPanel();
            var temp6 = new global::Fuse.Controls.Text();
            var temp7 = new global::Fuse.Controls.Rectangle();
            var temp8 = new global::Fuse.Drawing.Stroke();
            var temp9 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp10 = new global::Fuse.Reactive.DataBinding(Userid_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Controls.Button();
            var temp12 = new global::Fuse.Controls.Text();
            var temp13 = new global::Fuse.Gestures.Clicked();
            temp_eb9 = new global::Fuse.Reactive.EventBinding(temp2);
            var temp14 = new global::Fuse.Controls.ScrollView();
            var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "QueryM.ux";
            temp4.Code = "\n\tvar fabric = require(\"js/fabric.js\");\n\tmodule.exports={\n\t\tquery_uid:fabric.query_uid,\n\t\tQuerymylist:fabric.Querymylist,\n\t\tquerymresult:fabric.querymresult\n\t};\n\t";
            temp4.LineNumber = 2;
            temp4.FileName = "QueryM.ux";
            temp4.SourceLineNumber = 2;
            temp4.SourceFileName = "QueryM.ux";
            temp5.SourceLineNumber = 10;
            temp5.SourceFileName = "QueryM.ux";
            temp5.Children.Add(temp6);
            temp5.Children.Add(Userid);
            temp5.Children.Add(temp11);
            temp5.Children.Add(temp14);
            temp6.Value = "Fabric QueryMylist Test";
            temp6.Alignment = Fuse.Elements.Alignment.Center;
            temp6.SourceLineNumber = 11;
            temp6.SourceFileName = "QueryM.ux";
            Userid.PlaceholderText = "User id";
            Userid.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Userid.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Userid.Margin = float4(0f, 10f, 0f, 0f);
            Userid.Padding = float4(5f, 5f, 5f, 5f);
            Userid.Name = __selector1;
            Userid.SourceLineNumber = 13;
            Userid.SourceFileName = "QueryM.ux";
            Userid.Children.Add(temp7);
            Userid.Bindings.Add(temp10);
            temp7.Layer = Fuse.Layer.Background;
            temp7.SourceLineNumber = 14;
            temp7.SourceFileName = "QueryM.ux";
            temp7.Strokes.Add(temp8);
            temp8.Width = 2f;
            temp8.Brush = temp9;
            temp1.SourceLineNumber = 13;
            temp1.SourceFileName = "QueryM.ux";
            temp11.Color = float4(0f, 0f, 0f, 1f);
            temp11.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp11.Margin = float4(10f, 5f, 10f, 10f);
            temp11.SourceLineNumber = 19;
            temp11.SourceFileName = "QueryM.ux";
            temp11.Children.Add(temp12);
            temp11.Children.Add(temp13);
            temp12.Value = "Query";
            temp12.TextColor = Fuse.Drawing.Colors.White;
            temp12.Alignment = Fuse.Elements.Alignment.Center;
            temp12.SourceLineNumber = 19;
            temp12.SourceFileName = "QueryM.ux";
            temp13.SourceLineNumber = 20;
            temp13.SourceFileName = "QueryM.ux";
            temp13.Handler += temp_eb9.OnEvent;
            temp13.Bindings.Add(temp_eb9);
            temp2.SourceLineNumber = 20;
            temp2.SourceFileName = "QueryM.ux";
            temp14.SourceLineNumber = 22;
            temp14.SourceFileName = "QueryM.ux";
            temp14.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 23;
            temp.SourceFileName = "QueryM.ux";
            temp.Bindings.Add(temp15);
            temp3.SourceLineNumber = 23;
            temp3.SourceFileName = "QueryM.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(Userid);
            __g_nametable.Objects.Add(temp_eb9);
            this.Children.Add(temp4);
            this.Children.Add(temp5);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Userid";
    }
}
