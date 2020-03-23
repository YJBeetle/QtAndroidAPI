#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLEND
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLEND

#include "ScriptIntrinsic.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Element;
}
namespace __jni_impl::android::renderscript
{
	class Allocation;
}
namespace __jni_impl::android::renderscript
{
	class Script_LaunchOptions;
}
namespace __jni_impl::android::renderscript
{
	class Script_KernelID;
}

namespace __jni_impl::android::renderscript
{
	class ScriptIntrinsicBlend : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		void forEachClear(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachClear(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDClear();
		void forEachSrc(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachSrc(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDSrc();
		void forEachDst(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachDst(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDDst();
		void forEachSrcOver(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachSrcOver(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDSrcOver();
		void forEachDstOver(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachDstOver(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDDstOver();
		void forEachSrcIn(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachSrcIn(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDSrcIn();
		void forEachDstIn(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachDstIn(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDDstIn();
		void forEachSrcOut(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachSrcOut(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDSrcOut();
		void forEachDstOut(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachDstOut(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDDstOut();
		void forEachSrcAtop(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachSrcAtop(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDSrcAtop();
		void forEachDstAtop(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachDstAtop(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDDstAtop();
		void forEachXor(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachXor(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDXor();
		void forEachMultiply(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachMultiply(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDMultiply();
		void forEachAdd(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachAdd(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDAdd();
		void forEachSubtract(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEachSubtract(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		QAndroidJniObject getKernelIDSubtract();
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Element.hpp"
#include "Allocation.hpp"
#include "Script_LaunchOptions.hpp"
#include "Script_KernelID.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptIntrinsicBlend::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsicBlend",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ScriptIntrinsicBlend::create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicBlend",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlend;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachClear(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachClear",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachClear(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachClear",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDClear()
	{
		return __thiz.callObjectMethod(
			"getKernelIDClear",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachSrc(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrc",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachSrc(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrc",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrc()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrc",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachDst(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDst",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachDst(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDst",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDst()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDst",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachSrcOver(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrcOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachSrcOver(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrcOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcOver()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrcOver",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachDstOver(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDstOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachDstOver(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDstOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstOver()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDstOver",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachSrcIn(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrcIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachSrcIn(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrcIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcIn()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrcIn",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachDstIn(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDstIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachDstIn(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDstIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstIn()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDstIn",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachSrcOut(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrcOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachSrcOut(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrcOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcOut()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrcOut",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachDstOut(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDstOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachDstOut(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDstOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstOut()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDstOut",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachSrcAtop(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrcAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachSrcAtop(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrcAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcAtop()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrcAtop",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachDstAtop(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDstAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachDstAtop(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDstAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstAtop()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDstAtop",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachXor(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachXor",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachXor(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachXor",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDXor()
	{
		return __thiz.callObjectMethod(
			"getKernelIDXor",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachMultiply(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachMultiply",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachMultiply(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachMultiply",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDMultiply()
	{
		return __thiz.callObjectMethod(
			"getKernelIDMultiply",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachAdd(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachAdd",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachAdd(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachAdd",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDAdd()
	{
		return __thiz.callObjectMethod(
			"getKernelIDAdd",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsicBlend::forEachSubtract(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSubtract",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicBlend::forEachSubtract(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSubtract",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSubtract()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSubtract",
			"()Landroid/renderscript/Script$KernelID;");
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsicBlend : public __jni_impl::android::renderscript::ScriptIntrinsicBlend
	{
	public:
		ScriptIntrinsicBlend(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsicBlend()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLEND

