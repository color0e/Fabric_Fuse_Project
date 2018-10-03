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
            var temp7 = new global::Fuse.Controls.StackPanel();
            var temp8 = new global::Fuse.Controls.Text();
            var temp9 = new global::Fuse.Controls.Rectangle();
            var temp10 = new global::Fuse.Drawing.Stroke();
            var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp12 = new global::Fuse.Reactive.DataBinding(Userid_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp13 = new global::Fuse.Controls.Rectangle();
            var temp14 = new global::Fuse.Drawing.Stroke();
            var temp15 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp16 = new global::Fuse.Reactive.DataBinding(Point_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp17 = new global::Fuse.Controls.Button();
            var temp18 = new global::Fuse.Controls.Text();
            var temp19 = new global::Fuse.Gestures.Clicked();
            temp_eb5 = new global::Fuse.Reactive.EventBinding(temp3);
            var temp20 = new global::Fuse.Controls.Button();
            var temp21 = new global::Fuse.Controls.Text();
            var temp22 = new global::Fuse.Gestures.Clicked();
            temp_eb6 = new global::Fuse.Reactive.EventBinding(temp4);
            var temp23 = new global::Fuse.Controls.Button();
            var temp24 = new global::Fuse.Controls.Text();
            var temp25 = new global::Fuse.Gestures.Clicked();
            temp_eb7 = new global::Fuse.Reactive.EventBinding(temp5);
            var temp26 = new global::Fuse.Controls.ScrollView();
            var temp27 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Money.ux";
            temp7.SourceLineNumber = 4;
            temp7.SourceFileName = "Money.ux";
            temp7.Children.Add(temp8);
            temp7.Children.Add(Userid);
            temp7.Children.Add(Point);
            temp7.Children.Add(temp17);
            temp7.Children.Add(temp20);
            temp7.Children.Add(temp23);
            temp7.Children.Add(temp26);
            temp8.Value = "Fabric Point Test";
            temp8.Alignment = Fuse.Elements.Alignment.Center;
            temp8.SourceLineNumber = 5;
            temp8.SourceFileName = "Money.ux";
            Userid.PlaceholderText = "User id";
            Userid.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Userid.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Userid.Margin = float4(0f, 10f, 0f, 0f);
            Userid.Padding = float4(5f, 5f, 5f, 5f);
            Userid.Name = __selector1;
            Userid.SourceLineNumber = 7;
            Userid.SourceFileName = "Money.ux";
            Userid.Children.Add(temp9);
            Userid.Bindings.Add(temp12);
            temp9.Layer = Fuse.Layer.Background;
            temp9.SourceLineNumber = 8;
            temp9.SourceFileName = "Money.ux";
            temp9.Strokes.Add(temp10);
            temp10.Width = 2f;
            temp10.Brush = temp11;
            temp1.SourceLineNumber = 7;
            temp1.SourceFileName = "Money.ux";
            Point.PlaceholderText = "Point Value";
            Point.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Point.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Point.Padding = float4(5f, 5f, 5f, 5f);
            Point.Name = __selector2;
            Point.SourceLineNumber = 13;
            Point.SourceFileName = "Money.ux";
            Point.Children.Add(temp13);
            Point.Bindings.Add(temp16);
            temp13.Layer = Fuse.Layer.Background;
            temp13.SourceLineNumber = 14;
            temp13.SourceFileName = "Money.ux";
            temp13.Strokes.Add(temp14);
            temp14.Width = 2f;
            temp14.Brush = temp15;
            temp2.SourceLineNumber = 13;
            temp2.SourceFileName = "Money.ux";
            temp17.Color = float4(0f, 0f, 0f, 1f);
            temp17.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp17.Margin = float4(10f, 10f, 10f, 10f);
            temp17.SourceLineNumber = 19;
            temp17.SourceFileName = "Money.ux";
            temp17.Children.Add(temp18);
            temp17.Children.Add(temp19);
            temp18.Value = "Query Point";
            temp18.TextColor = Fuse.Drawing.Colors.White;
            temp18.Alignment = Fuse.Elements.Alignment.Center;
            temp18.SourceLineNumber = 19;
            temp18.SourceFileName = "Money.ux";
            temp19.SourceLineNumber = 20;
            temp19.SourceFileName = "Money.ux";
            temp19.Handler += temp_eb5.OnEvent;
            temp19.Bindings.Add(temp_eb5);
            temp3.SourceLineNumber = 20;
            temp3.SourceFileName = "Money.ux";
            temp20.Color = float4(0f, 0f, 0f, 1f);
            temp20.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp20.Margin = float4(10f, 5f, 10f, 10f);
            temp20.SourceLineNumber = 23;
            temp20.SourceFileName = "Money.ux";
            temp20.Children.Add(temp21);
            temp20.Children.Add(temp22);
            temp21.Value = "Add Point";
            temp21.TextColor = Fuse.Drawing.Colors.White;
            temp21.Alignment = Fuse.Elements.Alignment.Center;
            temp21.SourceLineNumber = 23;
            temp21.SourceFileName = "Money.ux";
            temp22.SourceLineNumber = 24;
            temp22.SourceFileName = "Money.ux";
            temp22.Handler += temp_eb6.OnEvent;
            temp22.Bindings.Add(temp_eb6);
            temp4.SourceLineNumber = 24;
            temp4.SourceFileName = "Money.ux";
            temp23.Color = float4(0f, 0f, 0f, 1f);
            temp23.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp23.Margin = float4(10f, 5f, 10f, 10f);
            temp23.SourceLineNumber = 27;
            temp23.SourceFileName = "Money.ux";
            temp23.Children.Add(temp24);
            temp23.Children.Add(temp25);
            temp24.Value = "Sub Point";
            temp24.TextColor = Fuse.Drawing.Colors.White;
            temp24.Alignment = Fuse.Elements.Alignment.Center;
            temp24.SourceLineNumber = 27;
            temp24.SourceFileName = "Money.ux";
            temp25.SourceLineNumber = 28;
            temp25.SourceFileName = "Money.ux";
            temp25.Handler += temp_eb7.OnEvent;
            temp25.Bindings.Add(temp_eb7);
            temp5.SourceLineNumber = 28;
            temp5.SourceFileName = "Money.ux";
            temp26.SourceLineNumber = 30;
            temp26.SourceFileName = "Money.ux";
            temp26.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 31;
            temp.SourceFileName = "Money.ux";
            temp.Bindings.Add(temp27);
            temp6.SourceLineNumber = 31;
            temp6.SourceFileName = "Money.ux";
            this.Children.Add(temp7);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Userid";
        static global::Uno.UX.Selector __selector2 = "Point";
    }
}
