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
	
	// QAndroidJniObject forward
	ScriptGroup_Builder2::ScriptGroup_Builder2(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ScriptGroup_Builder2::ScriptGroup_Builder2(android::renderscript::RenderScript arg0)
		: __JniBaseClass(
			"android.renderscript.ScriptGroup$Builder2",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.object()
		) {}
	
	// Methods
	android::renderscript::ScriptGroup_Input ScriptGroup_Builder2::addInput()
	{
		return callObjectMethod(
			"addInput",
			"()Landroid/renderscript/ScriptGroup$Input;"
		);
	}
	android::renderscript::ScriptGroup_Closure ScriptGroup_Builder2::addInvoke(android::renderscript::Script_InvokeID arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"addInvoke",
			"(Landroid/renderscript/Script$InvokeID;[Ljava/lang/Object;)Landroid/renderscript/ScriptGroup$Closure;",
			arg0.object(),
			arg1
		);
	}
	android::renderscript::ScriptGroup_Closure ScriptGroup_Builder2::addKernel(android::renderscript::Script_KernelID arg0, android::renderscript::Type arg1, jobjectArray arg2)
	{
		return callObjectMethod(
			"addKernel",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Type;[Ljava/lang/Object;)Landroid/renderscript/ScriptGroup$Closure;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::renderscript::ScriptGroup ScriptGroup_Builder2::create(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"create",
			"(Ljava/lang/String;[Landroid/renderscript/ScriptGroup$Future;)Landroid/renderscript/ScriptGroup;",
			arg0,
			arg1
		);
	}
} // namespace android::renderscript
