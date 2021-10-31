#include "./RenderScript.hpp"
#include "./Script_InvokeID.hpp"
#include "./Script_KernelID.hpp"
#include "./ScriptGroup.hpp"
#include "./ScriptGroup_Closure.hpp"
#include "./ScriptGroup_Input.hpp"
#include "./Type.hpp"
#include "./ScriptGroup_Builder2.hpp"

namespace android::renderscript
{
	// Fields
	
	ScriptGroup_Builder2::ScriptGroup_Builder2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScriptGroup_Builder2::ScriptGroup_Builder2(android::renderscript::RenderScript arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptGroup$Builder2",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ScriptGroup_Builder2::addInput()
	{
		return __thiz.callObjectMethod(
			"addInput",
			"()Landroid/renderscript/ScriptGroup$Input;"
		);
	}
	QAndroidJniObject ScriptGroup_Builder2::addInvoke(android::renderscript::Script_InvokeID arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"addInvoke",
			"(Landroid/renderscript/Script$InvokeID;[Ljava/lang/Object;)Landroid/renderscript/ScriptGroup$Closure;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ScriptGroup_Builder2::addKernel(android::renderscript::Script_KernelID arg0, android::renderscript::Type arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"addKernel",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Type;[Ljava/lang/Object;)Landroid/renderscript/ScriptGroup$Closure;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject ScriptGroup_Builder2::create(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"create",
			"(Ljava/lang/String;[Landroid/renderscript/ScriptGroup$Future;)Landroid/renderscript/ScriptGroup;",
			arg0,
			arg1
		);
	}
} // namespace android::renderscript

