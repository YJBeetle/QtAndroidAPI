#pragma once

#ifndef ANDROID_RENDERSCRIPT_TYPE_BUILDER
#define ANDROID_RENDERSCRIPT_TYPE_BUILDER

#include "../../__JniBaseClass.hpp"

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
	class Type;
}

namespace __jni_impl::android::renderscript
{
	class Type_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		
		// Methods
		QAndroidJniObject create();
		QAndroidJniObject setX(jint arg0);
		QAndroidJniObject setY(jint arg0);
		QAndroidJniObject setZ(jint arg0);
		QAndroidJniObject setYuvFormat(jint arg0);
		QAndroidJniObject setMipmaps(jboolean arg0);
		QAndroidJniObject setFaces(jboolean arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Element.hpp"
#include "Type.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Type_Builder::__constructor(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Type$Builder",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Type_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/renderscript/Type;"
		);
	}
	QAndroidJniObject Type_Builder::setX(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setX",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setY(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setY",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setZ(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setZ",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setYuvFormat(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setYuvFormat",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setMipmaps(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setMipmaps",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setFaces(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setFaces",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Type_Builder : public __jni_impl::android::renderscript::Type_Builder
	{
	public:
		Type_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Type_Builder(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_TYPE_BUILDER

