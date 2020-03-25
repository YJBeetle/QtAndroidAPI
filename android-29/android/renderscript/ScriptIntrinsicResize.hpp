#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSICRESIZE
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSICRESIZE

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"
#include "Script.hpp"
#include "ScriptIntrinsic.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Allocation;
}
namespace __jni_impl::android::renderscript
{
	class Script_FieldID;
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
	class ScriptIntrinsicResize : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0);
		void setInput(__jni_impl::android::renderscript::Allocation arg0);
		QAndroidJniObject getFieldID_Input();
		void forEach_bicubic(__jni_impl::android::renderscript::Allocation arg0);
		void forEach_bicubic(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1);
		QAndroidJniObject getKernelID_bicubic();
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Allocation.hpp"
#include "Script_FieldID.hpp"
#include "Script_LaunchOptions.hpp"
#include "Script_KernelID.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptIntrinsicResize::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsicResize",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ScriptIntrinsicResize::create(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicResize",
			"create",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/ScriptIntrinsicResize;",
			arg0.__jniObject().object());
	}
	void ScriptIntrinsicResize::setInput(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicResize::getFieldID_Input()
	{
		return __thiz.callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;");
	}
	void ScriptIntrinsicResize::forEach_bicubic(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"forEach_bicubic",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object());
	}
	void ScriptIntrinsicResize::forEach_bicubic(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1)
	{
		__thiz.callMethod<void>(
			"forEach_bicubic",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicResize::getKernelID_bicubic()
	{
		return __thiz.callObjectMethod(
			"getKernelID_bicubic",
			"()Landroid/renderscript/Script$KernelID;");
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsicResize : public __jni_impl::android::renderscript::ScriptIntrinsicResize
	{
	public:
		ScriptIntrinsicResize(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsicResize()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTINTRINSICRESIZE

