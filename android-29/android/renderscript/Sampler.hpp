#pragma once

#ifndef ANDROID_RENDERSCRIPT_SAMPLER
#define ANDROID_RENDERSCRIPT_SAMPLER

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Sampler_Value;
}

namespace __jni_impl::android::renderscript
{
	class Sampler : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getMinification();
		QAndroidJniObject getMagnification();
		QAndroidJniObject getWrapS();
		QAndroidJniObject getWrapT();
		jfloat getAnisotropy();
		static QAndroidJniObject CLAMP_NEAREST(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject CLAMP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject CLAMP_LINEAR_MIP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject WRAP_NEAREST(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject WRAP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject WRAP_LINEAR_MIP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject MIRRORED_REPEAT_NEAREST(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject MIRRORED_REPEAT_LINEAR(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject MIRRORED_REPEAT_LINEAR_MIP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Sampler_Value.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Sampler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Sampler",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Sampler::getMinification()
	{
		return __thiz.callObjectMethod(
			"getMinification",
			"()Landroid/renderscript/Sampler$Value;");
	}
	QAndroidJniObject Sampler::getMagnification()
	{
		return __thiz.callObjectMethod(
			"getMagnification",
			"()Landroid/renderscript/Sampler$Value;");
	}
	QAndroidJniObject Sampler::getWrapS()
	{
		return __thiz.callObjectMethod(
			"getWrapS",
			"()Landroid/renderscript/Sampler$Value;");
	}
	QAndroidJniObject Sampler::getWrapT()
	{
		return __thiz.callObjectMethod(
			"getWrapT",
			"()Landroid/renderscript/Sampler$Value;");
	}
	jfloat Sampler::getAnisotropy()
	{
		return __thiz.callMethod<jfloat>(
			"getAnisotropy",
			"()F");
	}
	QAndroidJniObject Sampler::CLAMP_NEAREST(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"CLAMP_NEAREST",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Sampler::CLAMP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"CLAMP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Sampler::CLAMP_LINEAR_MIP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"CLAMP_LINEAR_MIP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Sampler::WRAP_NEAREST(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"WRAP_NEAREST",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Sampler::WRAP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"WRAP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Sampler::WRAP_LINEAR_MIP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"WRAP_LINEAR_MIP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Sampler::MIRRORED_REPEAT_NEAREST(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"MIRRORED_REPEAT_NEAREST",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Sampler::MIRRORED_REPEAT_LINEAR(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"MIRRORED_REPEAT_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Sampler::MIRRORED_REPEAT_LINEAR_MIP_LINEAR(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"MIRRORED_REPEAT_LINEAR_MIP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Sampler : public __jni_impl::android::renderscript::Sampler
	{
	public:
		Sampler(QAndroidJniObject obj) { __thiz = obj; }
		Sampler()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SAMPLER

