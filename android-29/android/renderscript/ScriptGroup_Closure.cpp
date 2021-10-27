#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./ScriptGroup_Future.hpp"
#include "./ScriptGroup_Closure.hpp"

namespace android::renderscript
{
	// Fields
	
	ScriptGroup_Closure::ScriptGroup_Closure(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void ScriptGroup_Closure::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	QAndroidJniObject ScriptGroup_Closure::getGlobal(android::renderscript::Script_FieldID arg0)
	{
		return __thiz.callObjectMethod(
			"getGlobal",
			"(Landroid/renderscript/Script$FieldID;)Landroid/renderscript/ScriptGroup$Future;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptGroup_Closure::getReturn()
	{
		return __thiz.callObjectMethod(
			"getReturn",
			"()Landroid/renderscript/ScriptGroup$Future;"
		);
	}
} // namespace android::renderscript

