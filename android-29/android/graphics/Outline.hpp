#pragma once

#ifndef ANDROID_GRAPHICS_OUTLINE
#define ANDROID_GRAPHICS_OUTLINE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Path;
}

namespace __jni_impl::android::graphics
{
	class Outline : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Outline arg0);
		
		// Methods
		jboolean isEmpty();
		void offset(jint arg0, jint arg1);
		void set(__jni_impl::android::graphics::Outline arg0);
		jboolean getRect(__jni_impl::android::graphics::Rect arg0);
		void setAlpha(jfloat arg0);
		jboolean canClip();
		void setRoundRect(__jni_impl::android::graphics::Rect arg0, jfloat arg1);
		void setRoundRect(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4);
		void setRect(__jni_impl::android::graphics::Rect arg0);
		void setRect(jint arg0, jint arg1, jint arg2, jint arg3);
		jfloat getRadius();
		void setOval(jint arg0, jint arg1, jint arg2, jint arg3);
		void setOval(__jni_impl::android::graphics::Rect arg0);
		void setConvexPath(__jni_impl::android::graphics::Path arg0);
		void setEmpty();
		jfloat getAlpha();
	};
} // namespace __jni_impl::android::graphics

#include "Rect.hpp"
#include "Path.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Outline::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Outline",
			"()V");
	}
	void Outline::__constructor(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Outline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean Outline::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	void Outline::offset(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1);
	}
	void Outline::set(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object());
	}
	jboolean Outline::getRect(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object());
	}
	void Outline::setAlpha(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0);
	}
	jboolean Outline::canClip()
	{
		return __thiz.callMethod<jboolean>(
			"canClip",
			"()Z");
	}
	void Outline::setRoundRect(__jni_impl::android::graphics::Rect arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setRoundRect",
			"(Landroid/graphics/Rect;F)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Outline::setRoundRect(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4)
	{
		__thiz.callMethod<void>(
			"setRoundRect",
			"(IIIIF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void Outline::setRect(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	void Outline::setRect(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setRect",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jfloat Outline::getRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getRadius",
			"()F");
	}
	void Outline::setOval(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setOval",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Outline::setOval(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setOval",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	void Outline::setConvexPath(__jni_impl::android::graphics::Path arg0)
	{
		__thiz.callMethod<void>(
			"setConvexPath",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object());
	}
	void Outline::setEmpty()
	{
		__thiz.callMethod<void>(
			"setEmpty",
			"()V");
	}
	jfloat Outline::getAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getAlpha",
			"()F");
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Outline : public __jni_impl::android::graphics::Outline
	{
	public:
		Outline(QAndroidJniObject obj) { __thiz = obj; }
		Outline()
		{
			__constructor();
		}
		Outline(__jni_impl::android::graphics::Outline arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_OUTLINE

