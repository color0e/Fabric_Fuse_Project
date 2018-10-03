namespace Fabric
{
    [Uno.Compiler.UxGenerated]
    public partial class Money: Fuse.Controls.Panel
    {
        global::Uno.UX.Property<string> Userid_Value_inst;
        global::Uno.UX.Property<string> Point_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Controls.TextInput Userid;
        internal global::Fuse.Controls.TextInput Point;
        internal global::Fuse.Reactive.EventBinding temp_eb5;
        internal global::Fuse.Reactive.EventBinding temp_eb6;
        internal global::Fuse.Reactive.EventBinding temp_eb7;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "Userid",
            "Point",
            "temp_eb5",
            "temp_eb6",
            "temp_eb7"
        };
        static Money()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Money()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            Userid = new global::Fuse.Controls.TextInput();
            Userid_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Userid, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("money_uid");
            Point = new global::Fuse.Controls.TextInput();
            Point_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Point, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("money_point");
            var temp3 = new global::Fuse.Reactive.Data("Querypoint");
            var temp4 = new global::Fuse.Reactive.Data("Addpoint");
            var temp5 = new global::Fuse.Reactive.Data("Subpoint");
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Fabric_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp6 = new global::Fuse.Reactive.Data("moneyresult");
            var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp8 = new global::Fuse.Controls.StackPanel();
            var temp9 = new global::Fuse.Controls.Text();
            var temp10 = new global::Fuse.Controls.Rectangle();
            var temp11 = new global::Fuse.Drawing.Stroke();
            var temp12 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp13 = new global::Fuse.Reactive.DataBinding(Userid_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp14 = new global::Fuse.Controls.Rectangle();
            var temp15 = new global::Fuse.Drawing.Stroke();
            var temp16 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp17 = new global::Fuse.Reactive.DataBinding(Point_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp18 = new global::Fuse.Controls.Button();
            var temp19 = new global::Fuse.Controls.Text();
            var temp20 = new global::Fuse.Gestures.Clicked();
            temp_eb5 = new global::Fuse.Reactive.EventBinding(temp3);
            var temp21 = new global::Fuse.Controls.Button();
            var temp22 = new global::Fuse.Controls.Text();
            var temp23 = new global::Fuse.Gestures.Clicked();
            temp_eb6 = new global::Fuse.Reactive.EventBinding(temp4);
            var temp24 = new global::Fuse.Controls.Button();
            var temp25 = new global::Fuse.Controls.Text();
            var temp26 = new global::Fuse.Gestures.Clicked();
            temp_eb7 = new global::Fuse.Reactive.EventBinding(temp5);
            var temp27 = new global::Fuse.Controls.ScrollView();
            var temp28 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Money.ux";
            temp7.Code = "\n\tvar fabric = require(\"js/fabric.js\");\n\tmodule.exports={\n\t\tmoney_uid:fabric.money_uid,\n\t\tmoney_point:fabric.money_point,\n\t\tQuerypoint:fabric.Querypoint,\n        Addpoint:fabric.Addpoint,\n\t\tSubpoint:fabric.Subpoint,\n\t\tmoneyresult:fabric.moneyresult\n\t};\n\t";
            temp7.LineNumber = 2;
            temp7.FileName = "Money.ux";
            temp7.SourceLineNumber = 2;
            temp7.SourceFileName = "Money.ux";
            temp8.SourceLineNumber = 13;
            temp8.SourceFileName = "Money.ux";
            temp8.Children.Add(temp9);
            temp8.Children.Add(Userid);
            temp8.Children.Add(Point);
            temp8.Children.Add(temp18);
            temp8.Children.Add(temp21);
            temp8.Children.Add(temp24);
            temp8.Children.Add(temp27);
            temp9.Value = "Fabric Point Test";
            temp9.Alignment = Fuse.Elements.Alignment.Center;
            temp9.SourceLineNumber = 14;
            temp9.SourceFileName = "Money.ux";
            Userid.PlaceholderText = "User id";
            Userid.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Userid.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Userid.Margin = float4(0f, 10f, 0f, 0f);
            Userid.Padding = float4(5f, 5f, 5f, 5f);
            Userid.Name = __selector1;
            Userid.SourceLineNumber = 16;
            Userid.SourceFileName = "Money.ux";
            Userid.Children.Add(temp10);
            Userid.Bindings.Add(temp13);
            temp10.Layer = Fuse.Layer.Background;
            temp10.SourceLineNumber = 17;
            temp10.SourceFileName = "Money.ux";
            temp10.Strokes.Add(temp11);
            temp11.Width = 2f;
            temp11.Brush = temp12;
            temp1.SourceLineNumber = 16;
            temp1.SourceFileName = "Money.ux";
            Point.PlaceholderText = "Point Value";
            Point.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Point.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Point.Padding = float4(5f, 5f, 5f, 5f);
            Point.Name = __selector2;
            Point.SourceLineNumber = 22;
            Point.SourceFileName = "Money.ux";
            Point.Children.Add(temp14);
            Point.Bindings.Add(temp17);
            temp14.Layer = Fuse.Layer.Background;
            temp14.SourceLineNumber = 23;
            temp14.SourceFileName = "Money.ux";
            temp14.Strokes.Add(temp15);
            temp15.Width = 2f;
            temp15.Brush = temp16;
            temp2.SourceLineNumber = 22;
            temp2.SourceFileName = "Money.ux";
            temp18.Color = float4(0f, 0f, 0f, 1f);
            temp18.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp18.Margin = float4(10f, 10f, 10f, 10f);
            temp18.SourceLineNumber = 28;
            temp18.SourceFileName = "Money.ux";
            temp18.Children.Add(temp19);
            temp18.Children.Add(temp20);
            temp19.Value = "Query Point";
            temp19.TextColor = Fuse.Drawing.Colors.White;
            temp19.Alignment = Fuse.Elements.Alignment.Center;
            temp19.SourceLineNumber = 28;
            temp19.SourceFileName = "Money.ux";
            temp20.SourceLineNumber = 29;
            temp20.SourceFileName = "Money.ux";
            temp20.Handler += temp_eb5.OnEvent;
            temp20.Bindings.Add(temp_eb5);
            temp3.SourceLineNumber = 29;
            temp3.SourceFileName = "Money.ux";
            temp21.Color = float4(0f, 0f, 0f, 1f);
            temp21.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp21.Margin = float4(10f, 5f, 10f, 10f);
            temp21.SourceLineNumber = 32;
            temp21.SourceFileName = "Money.ux";
            temp21.Children.Add(temp22);
            temp21.Children.Add(temp23);
            temp22.Value = "Add Point";
            temp22.TextColor = Fuse.Drawing.Colors.White;
            temp22.Alignment = Fuse.Elements.Alignment.Center;
            temp22.SourceLineNumber = 32;
            temp22.SourceFileName = "Money.ux";
            temp23.SourceLineNumber = 33;
            temp23.SourceFileName = "Money.ux";
            temp23.Handler += temp_eb6.OnEvent;
            temp23.Bindings.Add(temp_eb6);
            temp4.SourceLineNumber = 33;
            temp4.SourceFileName = "Money.ux";
            temp24.Color = float4(0f, 0f, 0f, 1f);
            temp24.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp24.Margin = float4(10f, 5f, 10f, 10f);
            temp24.SourceLineNumber = 36;
            temp24.SourceFileName = "Money.ux";
            temp24.Children.Add(temp25);
            temp24.Children.Add(temp26);
            temp25.Value = "Sub Point";
            temp25.TextColor = Fuse.Drawing.Colors.White;
            temp25.Alignment = Fuse.Elements.Alignment.Center;
            temp25.SourceLineNumber = 36;
            temp25.SourceFileName = "Money.ux";
            temp26.SourceLineNumber = 37;
            temp26.SourceFileName = "Money.ux";
            temp26.Handler += temp_eb7.OnEvent;
            temp26.Bindings.Add(temp_eb7);
            temp5.SourceLineNumber = 37;
            temp5.SourceFileName = "Money.ux";
            temp27.SourceLineNumber = 39;
            temp27.SourceFileName = "Money.ux";
            temp27.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 40;
            temp.SourceFileName = "Money.ux";
            temp.Bindings.Add(temp28);
            temp6.SourceLineNumber = 40;
            temp6.SourceFileName = "Money.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(Userid);
            __g_nametable.Objects.Add(Point);
            __g_nametable.Objects.Add(temp_eb5);
            __g_nametable.Objects.Add(temp_eb6);
            __g_nametable.Objects.Add(temp_eb7);
            this.Children.Add(temp7);
            this.Children.Add(temp8);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Userid";
        static global::Uno.UX.Selector __selector2 = "Point";
    }
}
