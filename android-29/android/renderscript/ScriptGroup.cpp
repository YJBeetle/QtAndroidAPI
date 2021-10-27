#include "./Allocation.hpp"
#include "./RenderScript.hpp"
#include "./Script_KernelID.hpp"
#include "./ScriptGroup.hpp"

namespace android::renderscript
{
	// Fields
	
	ScriptGroup::ScriptGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void ScriptGroup::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jobjectArray ScriptGroup::execute(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"execute",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	void ScriptGroup::execute()
	{
		__thiz.callMethod<void>(
			"execute",
			"()V"
		);
	}
	void ScriptGroup::setInput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptGroup::setOutput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"setOutput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::renderscript

