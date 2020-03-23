#pragma once

#ifndef ANDROID_RENDERSCRIPT_TYPE
#define ANDROID_RENDERSCRIPT_TYPE

#include "BaseObj.hpp"

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
	class Type : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getCount();
		QAndroidJniObject getElement();
		jint getX();
		jint getY();
		jint getZ();
		jint getYuv();
		jboolean hasMipmaps();
		jboolean hasFaces();
		static QAndroidJniObject createX(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2);
		static QAndroidJniObject createXY(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2, jint arg3);
		static QAndroidJniObject createXYZ(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2, jint arg3, jint arg4);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Element.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Type::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Type",
			"(V)V");
	}
	
	// Methods
	jint Type::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I");
	}
	QAndroidJniObject Type::getElement()
	{
		return __thiz.callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;");
	}
	jint Type::getX()
	{
		return __thiz.callMethod<jint>(
			"getX",
			"()I");
	}
	jint Type::getY()
	{
		return __thiz.callMethod<jint>(
			"getY",
			"()I");
	}
	jint Type::getZ()
	{
		return __thiz.callMethod<jint>(
			"getZ",
			"()I");
	}
	jint Type::getYuv()
	{
		return __thiz.callMethod<jint>(
			"getYuv",
			"()I");
	}
	jboolean Type::hasMipmaps()
	{
		return __thiz.callMethod<jboolean>(
			"hasMipmaps",
			"()Z");
	}
	jboolean Type::hasFaces()
	{
		return __thiz.callMethod<jboolean>(
			"hasFaces",
			"()Z");
	}
	QAndroidJniObject Type::createX(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type",
			"createX",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;I)Landroid/renderscript/Type;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject Type::createXY(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type",
			"createXY",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;II)Landroid/renderscript/Type;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	QAndroidJniObject Type::createXYZ(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type",
			"createXYZ",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;III)Landroid/renderscript/Type;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Type : public __jni_impl::android::renderscript::Type
	{
	public:
		Type(QAndroidJniObject obj) { __thiz = obj; }
		Type()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_TYPE

