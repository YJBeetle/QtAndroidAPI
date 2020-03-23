#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR

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
	class Script_LaunchOptions;
}
namespace __jni_impl::android::renderscript
{
	class Element;
}
namespace __jni_impl::android::renderscript
{
	class Script_KernelID;
}
namespace __jni_impl::android::renderscript
{
	class Script_FieldID;
}

namespace __jni_impl::android::renderscript
{
	class ScriptIntrinsicBlur : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1);
		void forEach(__jni_impl::android::renderscript::Allocation arg0);
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		void setInput(__jni_impl::android::renderscript::Allocation arg0);
		QAndroidJniObject getKernelID();
		QAndroidJniObject getFieldID_Input();
		void setRadius(jfloat arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Allocation.hpp"
#include "Script_LaunchOptions.hpp"
#include "Element.hpp"
#include "Script_KernelID.hpp"
#include "Script_FieldID.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptIntrinsicBlur::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsicBlur",
			"(V)V");
	}
	
	// Methods
	void ScriptIntrinsicBlur::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ScriptIntrinsicBlur::forEach(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlur::create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicBlur",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlur;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ScriptIntrinsicBlur::setInput(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsicBlur::getKernelID()
	{
		return __thiz.callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;");
	}
	QAndroidJniObject ScriptIntrinsicBlur::getFieldID_Input()
	{
		return __thiz.callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;");
	}
	void ScriptIntrinsicBlur::setRadius(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRadius",
			"(F)V",
			arg0);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsicBlur : public __jni_impl::android::renderscript::ScriptIntrinsicBlur
	{
	public:
		ScriptIntrinsicBlur(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsicBlur()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR

