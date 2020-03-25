#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSICLUT
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSICLUT

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
	class Script_KernelID;
}

namespace __jni_impl::android::renderscript
{
	class ScriptIntrinsicLUT : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		void destroy();
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		void setRed(jint arg0, jint arg1);
		void setGreen(jint arg0, jint arg1);
		void setBlue(jint arg0, jint arg1);
		void setAlpha(jint arg0, jint arg1);
		QAndroidJniObject getKernelID();
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Allocation.hpp"
#include "Script_LaunchOptions.hpp"
#include "Element.hpp"
#include "Script_KernelID.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptIntrinsicLUT::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsicLUT",
			"(V)V");
	}
	
	// Methods
	void ScriptIntrinsicLUT::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ScriptIntrinsicLUT::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ScriptIntrinsicLUT::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V");
	}
	QAndroidJniObject ScriptIntrinsicLUT::create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicLUT",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicLUT;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ScriptIntrinsicLUT::setRed(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setRed",
			"(II)V",
			arg0,
			arg1);
	}
	void ScriptIntrinsicLUT::setGreen(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setGreen",
			"(II)V",
			arg0,
			arg1);
	}
	void ScriptIntrinsicLUT::setBlue(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setBlue",
			"(II)V",
			arg0,
			arg1);
	}
	void ScriptIntrinsicLUT::setAlpha(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(II)V",
			arg0,
			arg1);
	}
	QAndroidJniObject ScriptIntrinsicLUT::getKernelID()
	{
		return __thiz.callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;");
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsicLUT : public __jni_impl::android::renderscript::ScriptIntrinsicLUT
	{
	public:
		ScriptIntrinsicLUT(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsicLUT()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTINTRINSICLUT

