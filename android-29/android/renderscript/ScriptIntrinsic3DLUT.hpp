#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSIC3DLUT
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSIC3DLUT

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
	class ScriptIntrinsic3DLUT : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		QAndroidJniObject getKernelID();
		void setLUT(__jni_impl::android::renderscript::Allocation arg0);
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
	void ScriptIntrinsic3DLUT::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsic3DLUT",
			"(V)V");
	}
	
	// Methods
	void ScriptIntrinsic3DLUT::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsic3DLUT::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsic3DLUT::create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsic3DLUT",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsic3DLUT;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ScriptIntrinsic3DLUT::getKernelID()
	{
		return __thiz.callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;");
	}
	void ScriptIntrinsic3DLUT::setLUT(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"setLUT",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsic3DLUT : public __jni_impl::android::renderscript::ScriptIntrinsic3DLUT
	{
	public:
		ScriptIntrinsic3DLUT(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsic3DLUT()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTINTRINSIC3DLUT

