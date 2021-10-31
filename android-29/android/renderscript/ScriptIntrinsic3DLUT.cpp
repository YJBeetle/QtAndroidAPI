#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsic3DLUT.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptIntrinsic3DLUT::ScriptIntrinsic3DLUT(QAndroidJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ScriptIntrinsic3DLUT::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsic3DLUT",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsic3DLUT;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsic3DLUT::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsic3DLUT::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ScriptIntrinsic3DLUT::getKernelID()
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsic3DLUT::setLUT(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"setLUT",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

