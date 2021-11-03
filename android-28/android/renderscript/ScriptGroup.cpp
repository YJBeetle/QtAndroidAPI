#include "../../JObjectArray.hpp"
#include "./Allocation.hpp"
#include "./RenderScript.hpp"
#include "./Script_KernelID.hpp"
#include "./ScriptGroup.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptGroup::ScriptGroup(QAndroidJniObject obj) : android::renderscript::BaseObj(obj) {}
	
	// Constructors
	
	// Methods
	void ScriptGroup::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	JObjectArray ScriptGroup::execute(JObjectArray arg0)
	{
		return callObjectMethod(
			"execute",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	void ScriptGroup::execute()
	{
		callMethod<void>(
			"execute",
			"()V"
		);
	}
	void ScriptGroup::setInput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptGroup::setOutput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"setOutput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::renderscript

