#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"
#include "Script.hpp"
#include "ScriptIntrinsic.hpp"

namespace __jni_impl::android::renderscript
{
	class Allocation;
}
namespace __jni_impl::android::renderscript
{
	class Element;
}
namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Script_FieldID;
}
namespace __jni_impl::android::renderscript
{
	class Script_KernelID;
}
namespace __jni_impl::android::renderscript
{
	class Script_LaunchOptions;
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
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		void forEach(__jni_impl::android::renderscript::Allocation arg0);
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1);
		QAndroidJniObject getFieldID_Input();
		QAndroidJniObject getKernelID();
		void setInput(__jni_impl::android::renderscript::Allocation arg0);
		void setRadius(jfloat arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "Allocation.hpp"
#include "Element.hpp"
#include "RenderScript.hpp"
#include "Script_FieldID.hpp"
#include "Script_KernelID.hpp"
#include "Script_LaunchOptions.hpp"

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
	QAndroidJniObject ScriptIntrinsicBlur::create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicBlur",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlur;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlur::forEach(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlur::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicBlur::getFieldID_Input()
	{
		return __thiz.callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlur::getKernelID()
	{
		return __thiz.callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicBlur::setInput(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlur::setRadius(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRadius",
			"(F)V",
			arg0
		);
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

