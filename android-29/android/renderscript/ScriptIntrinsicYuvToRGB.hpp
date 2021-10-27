#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"
#include "./Script.hpp"
#include "./ScriptIntrinsic.hpp"

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
	class ScriptIntrinsicYuvToRGB : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		void forEach(__jni_impl::android::renderscript::Allocation arg0);
		QAndroidJniObject getFieldID_Input();
		QAndroidJniObject getKernelID();
		void setInput(__jni_impl::android::renderscript::Allocation arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptIntrinsicYuvToRGB::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsicYuvToRGB",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ScriptIntrinsicYuvToRGB::create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicYuvToRGB",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicYuvToRGB;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicYuvToRGB::forEach(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicYuvToRGB::getFieldID_Input()
	{
		return __thiz.callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicYuvToRGB::getKernelID()
	{
		return __thiz.callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicYuvToRGB::setInput(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsicYuvToRGB : public __jni_impl::android::renderscript::ScriptIntrinsicYuvToRGB
	{
	public:
		ScriptIntrinsicYuvToRGB(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsicYuvToRGB()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

