namespace Fabric
{
    [Uno.Compiler.UxGenerated]
    public partial class Login: Fuse.Controls.Panel
    {
        global::Uno.UX.Property<string> ID_Value_inst;
        global::Uno.UX.Property<string> PASS_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Controls.TextInput ID;
        internal global::Fuse.Controls.TextInput PASS;
        internal global::Fuse.Reactive.EventBinding temp_eb3;
        internal global::Fuse.Reactive.EventBinding temp_eb4;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "ID",
            "PASS",
            "temp_eb3",
            "temp_eb4"
        };
        static Login()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Login()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            ID = new global::Fuse.Controls.TextInput();
            ID_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(ID, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("id");
            PASS = new global::Fuse.Controls.TextInput();
            PASS_Value_inst = new Fabric_FuseControlsTextInputControl_Value_Property(PASS, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("pass");
            var temp3 = new global::Fuse.Reactive.Data("Login");
            var temp4 = new global::Fuse.Reactive.Data("Register");
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Fabric_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp5 = new global::Fuse.Reactive.Data("result");
            var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp7 = new global::Fuse.Controls.StackPanel();
            var temp8 = new global::Fuse.Controls.Text();
            var temp9 = new global::Fuse.Controls.Rectangle();
            var temp10 = new global::Fuse.Drawing.Stroke();
            var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp12 = new global::Fuse.Reactive.DataBinding(ID_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp13 = new global::Fuse.Controls.Rectangle();
            var temp14 = new global::Fuse.Drawing.Stroke();
            var temp15 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
            var temp16 = new global::Fuse.Reactive.DataBinding(PASS_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp17 = new global::Fuse.Controls.Button();
            var temp18 = new global::Fuse.Controls.Text();
            var temp19 = new global::Fuse.Gestures.Clicked();
            temp_eb3 = new global::Fuse.Reactive.EventBinding(temp3);
            var temp20 = new global::Fuse.Controls.Button();
            var temp21 = new global::Fuse.Controls.Text();
            var temp22 = new global::Fuse.Gestures.Clicked();
            temp_eb4 = new global::Fuse.Reactive.EventBinding(temp4);
            var temp23 = new global::Fuse.Controls.ScrollView();
            var temp24 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Login.ux";
            temp6.Code = "\n\tvar fabric = require(\"js/fabric.js\");\n\tmodule.exports={\n\t\tid:fabric.iid,\n\t\tpass:fabric.pass,\n\t\tLogin:fabric.Login,\n        Register:fabric.Register,\n\t\tresult:fabric.result\n\t};\n\t";
            temp6.LineNumber = 2;
            temp6.FileName = "Login.ux";
            temp6.SourceLineNumber = 2;
            temp6.SourceFileName = "Login.ux";
            temp7.SourceLineNumber = 13;
            temp7.SourceFileName = "Login.ux";
            temp7.Children.Add(temp8);
            temp7.Children.Add(ID);
            temp7.Children.Add(PASS);
            temp7.Children.Add(temp17);
            temp7.Children.Add(temp20);
            temp7.Children.Add(temp23);
            temp8.Value = "Fabric CA Register,Enroll Test";
            temp8.Alignment = Fuse.Elements.Alignment.Center;
            temp8.SourceLineNumber = 14;
            temp8.SourceFileName = "Login.ux";
            ID.PlaceholderText = "ID";
            ID.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            ID.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            ID.Margin = float4(0f, 10f, 0f, 0f);
            ID.Padding = float4(5f, 5f, 5f, 5f);
            ID.Name = __selector1;
            ID.SourceLineNumber = 16;
            ID.SourceFileName = "Login.ux";
            ID.Children.Add(temp9);
            ID.Bindings.Add(temp12);
            temp9.Layer = Fuse.Layer.Background;
            temp9.SourceLineNumber = 17;
            temp9.SourceFileName = "Login.ux";
            temp9.Strokes.Add(temp10);
            temp10.Width = 2f;
            temp10.Brush = temp11;
            temp1.SourceLineNumber = 16;
            temp1.SourceFileName = "Login.ux";
            PASS.PlaceholderText = "PASSWORD";
            PASS.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
            PASS.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            PASS.Padding = float4(5f, 5f, 5f, 5f);
            PASS.Name = __selector2;
            PASS.SourceLineNumber = 23;
            PASS.SourceFileName = "Login.ux";
            PASS.Children.Add(temp13);
            PASS.Bindings.Add(temp16);
            temp13.Layer = Fuse.Layer.Background;
            temp13.SourceLineNumber = 24;
            temp13.SourceFileName = "Login.ux";
            temp13.Strokes.Add(temp14);
            temp14.Width = 2f;
            temp14.Brush = temp15;
            temp2.SourceLineNumber = 23;
            temp2.SourceFileName = "Login.ux";
            temp17.Color = float4(0f, 0f, 0f, 1f);
            temp17.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp17.Margin = float4(10f, 10f, 10f, 10f);
            temp17.SourceLineNumber = 29;
            temp17.SourceFileName = "Login.ux";
            temp17.Children.Add(temp18);
            temp17.Children.Add(temp19);
            temp18.Value = "Login";
            temp18.TextColor = Fuse.Drawing.Colors.White;
            temp18.Alignment = Fuse.Elements.Alignment.Center;
            temp18.SourceLineNumber = 29;
            temp18.SourceFileName = "Login.ux";
            temp19.SourceLineNumber = 30;
            temp19.SourceFileName = "Login.ux";
            temp19.Handler += temp_eb3.OnEvent;
            temp19.Bindings.Add(temp_eb3);
            temp3.SourceLineNumber = 30;
            temp3.SourceFileName = "Login.ux";
            temp20.Color = float4(0f, 0f, 0f, 1f);
            temp20.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp20.Margin = float4(10f, 5f, 10f, 10f);
            temp20.SourceLineNumber = 32;
            temp20.SourceFileName = "Login.ux";
            temp20.Children.Add(temp21);
            temp20.Children.Add(temp22);
            temp21.Value = "Register";
            temp21.TextColor = Fuse.Drawing.Colors.White;
            temp21.Alignment = Fuse.Elements.Alignment.Center;
            temp21.SourceLineNumber = 32;
            temp21.SourceFileName = "Login.ux";
            temp22.SourceLineNumber = 33;
            temp22.SourceFileName = "Login.ux";
            temp22.Handler += temp_eb4.OnEvent;
            temp22.Bindings.Add(temp_eb4);
            temp4.SourceLineNumber = 33;
            temp4.SourceFileName = "Login.ux";
            temp23.SourceLineNumber = 35;
            temp23.SourceFileName = "Login.ux";
            temp23.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.SourceLineNumber = 36;
            temp.SourceFileName = "Login.ux";
            temp.Bindings.Add(temp24);
            temp5.SourceLineNumber = 36;
            temp5.SourceFileName = "Login.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(ID);
            __g_nametable.Objects.Add(PASS);
            __g_nametable.Objects.Add(temp_eb3);
            __g_nametable.Objects.Add(temp_eb4);
            this.Children.Add(temp6);
            this.Children.Add(temp7);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "ID";
        static global::Uno.UX.Selector __selector2 = "PASS";
    }
}
