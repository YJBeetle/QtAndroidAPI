#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"
#include "./ScriptGroup.hpp"
#include "./Type.hpp"
#include "./ScriptGroup_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	ScriptGroup_Builder::ScriptGroup_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScriptGroup_Builder::ScriptGroup_Builder(android::renderscript::RenderScript &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptGroup$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ScriptGroup_Builder::addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_FieldID arg2)
	{
		return __thiz.callObjectMethod(
			"addConnection",
			"(Landroid/renderscript/Type;Landroid/renderscript/Script$KernelID;Landroid/renderscript/Script$FieldID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptGroup_Builder::addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_KernelID arg2)
	{
		return __thiz.callObjectMethod(
			"addConnection",
			"(Landroid/renderscript/Type;Landroid/renderscript/Script$KernelID;Landroid/renderscript/Script$KernelID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptGroup_Builder::addKernel(android::renderscript::Script_KernelID arg0)
	{
		return __thiz.callObjectMethod(
			"addKernel",
			"(Landroid/renderscript/Script$KernelID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptGroup_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/renderscript/ScriptGroup;"
		);
	}
} // namespace android::renderscript

