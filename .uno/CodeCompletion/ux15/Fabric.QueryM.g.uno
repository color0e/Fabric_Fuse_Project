namespace Fabric
{
    [Uno.Compiler.UxGenerated]
    public partial class QueryM: Fuse.Controls.Panel
    {
        global::Uno.UX.Property<string> Userid_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Controls.TextInput Userid;
        internal global::Fuse.Reactive.EventBinding temp_eb9;
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
            Userid = new global::Fuse.Controls.TextInput();
            Userid_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(Userid, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("querym_uid");
            var temp2 = new global::Fuse.Reactive.Data("Querymylist");
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Fabric_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("querymresult");
            var temp4 = new global::Fuse.Controls.StackPanel();
            var temp5 = new global::Fuse.Controls.Text();
            var temp6 = new global::Fuse.Controls.Rectangle();
            var temp7 = new global::Fuse.Drawing.Stroke();
            var temp8 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp9 = new global::Fuse.Reactive.DataBinding(Userid_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp10 = new global::Fuse.Controls.Button();
            var temp11 = new global::Fuse.Controls.Text();
            var temp12 = new global::Fuse.Gestures.Clicked();
            temp_eb9 = new global::Fuse.Reactive.EventBinding(temp2);
            var temp13 = new global::Fuse.Controls.ScrollView();
            var temp14 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "QueryM.ux";
            temp4.SourceLineNumber = 4;
            temp4.SourceFileName = "QueryM.ux";
            temp4.Children.Add(temp5);
            temp4.Children.Add(Userid);
            temp4.Children.Add(temp10);
            temp4.Children.Add(temp13);
            temp5.Value = "Fabric QueryMylist Test";
            temp5.Alignment = Fuse.Elements.Alignment.Center;
            temp5.SourceLineNumber = 5;
            temp5.SourceFileName = "QueryM.ux";
            Userid.PlaceholderText = "User id";
            Userid.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            Userid.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            Userid.Margin = float4(0f, 10f, 0f, 0f);
            Userid.Padding = float4(5f, 5f, 5f, 5f);
            Userid.Name = __selector1;
            Userid.SourceLineNumber = 7;
            Userid.SourceFileName = "QueryM.ux";
            Userid.Children.Add(temp6);
            Userid.Bindings.Add(temp9);
            temp6.Layer = Fuse.Layer.Background;
            temp6.SourceLineNumber = 8;
            temp6.SourceFileName = "QueryM.ux";
            temp6.Strokes.Add(temp7);
            temp7.Width = 2f;
            temp7.Brush = temp8;
            temp1.SourceLineNumber = 7;
            temp1.SourceFileName = "QueryM.ux";
            temp10.Color = float4(0f, 0f, 0f, 1f);
            temp10.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp10.Margin = float4(10f, 5f, 10f, 10f);
            temp10.SourceLineNumber = 13;
            temp10.SourceFileName = "QueryM.ux";
            temp10.Children.Add(temp11);
            temp10.Children.Add(temp12);
            temp11.Value = "Query";
            temp11.TextColor = Fuse.Drawing.Colors.White;
            temp11.Alignment = Fuse.Elements.Alignment.Center;
            temp11.SourceLineNumber = 13;
            temp11.SourceFileName = "QueryM.ux";
            temp12.SourceLineNumber = 14;
            temp12.SourceFileName = "QueryM.ux";
            temp12.Handler += temp_eb9.OnEvent;
            temp12.Bindings.Add(temp_eb9);
            temp2.SourceLineNumber = 14;
            temp2.SourceFileName = "QueryM.ux";
            temp13.SourceLineNumber = 16;
            temp13.SourceFileName = "QueryM.ux";
            temp13.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 17;
            temp.SourceFileName = "QueryM.ux";
            temp.Bindings.Add(temp14);
            temp3.SourceLineNumber = 17;
            temp3.SourceFileName = "QueryM.ux";
            this.Children.Add(temp4);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Userid";
    }
}
