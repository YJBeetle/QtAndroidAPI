#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./ScriptGroup_Future.hpp"
#include "./ScriptGroup_Closure.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptGroup_Closure::ScriptGroup_Closure(QAndroidJniObject obj) : android::renderscript::BaseObj(obj) {}
	
	// Constructors
	
	// Methods
	void ScriptGroup_Closure::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	QAndroidJniObject ScriptGroup_Closure::getGlobal(android::renderscript::Script_FieldID arg0)
	{
		return callObjectMethod(
			"getGlobal",
			"(Landroid/renderscript/Script$FieldID;)Landroid/renderscript/ScriptGroup$Future;",
			arg0.object()
		);
	}
	QAndroidJniObject ScriptGroup_Closure::getReturn()
	{
		return callObjectMethod(
			"getReturn",
			"()Landroid/renderscript/ScriptGroup$Future;"
		);
	}
} // namespace android::renderscript

