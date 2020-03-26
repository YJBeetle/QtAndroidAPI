#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSICHISTOGRAM
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSICHISTOGRAM

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
	class Script_LaunchOptions;
}
namespace __jni_impl::android::renderscript
{
	class Element;
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
	class ScriptIntrinsicHistogram : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1);
		void forEach(__jni_impl::android::renderscript::Allocation arg0);
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		QAndroidJniObject getFieldID_Input();
		void setDotCoefficients(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void forEach_Dot(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1);
		void forEach_Dot(__jni_impl::android::renderscript::Allocation arg0);
		QAndroidJniObject getKernelID_Separate();
		void setOutput(__jni_impl::android::renderscript::Allocation arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Allocation.hpp"
#include "Script_LaunchOptions.hpp"
#include "Element.hpp"
#include "Script_FieldID.hpp"
#include "Script_KernelID.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptIntrinsicHistogram::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsicHistogram",
			"(V)V");
	}
	
	// Methods
	void ScriptIntrinsicHistogram::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicHistogram::forEach(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicHistogram::create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicHistogram",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicHistogram;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicHistogram::getFieldID_Input()
	{
		return __thiz.callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	void ScriptIntrinsicHistogram::setDotCoefficients(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setDotCoefficients",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ScriptIntrinsicHistogram::forEach_Dot(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1)
	{
		__thiz.callMethod<void>(
			"forEach_Dot",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicHistogram::forEach_Dot(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"forEach_Dot",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicHistogram::getKernelID_Separate()
	{
		return __thiz.callObjectMethod(
			"getKernelID_Separate",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicHistogram::setOutput(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"setOutput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsicHistogram : public __jni_impl::android::renderscript::ScriptIntrinsicHistogram
	{
	public:
		ScriptIntrinsicHistogram(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsicHistogram()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTINTRINSICHISTOGRAM

