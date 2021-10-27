#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::graphics
{
	class Region;
}

namespace __jni_impl::android::graphics
{
	class NinePatch : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1);
		void __constructor(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1, jstring arg2);
		void __constructor(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1, const QString &arg2);
		
		// Methods
		static jboolean isNinePatchChunk(jbyteArray arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Rect arg1);
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::RectF arg1);
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Paint arg2);
		QAndroidJniObject getBitmap();
		jint getDensity();
		jint getHeight();
		jstring getName();
		QAndroidJniObject getPaint();
		QAndroidJniObject getTransparentRegion(__jni_impl::android::graphics::Rect arg0);
		jint getWidth();
		jboolean hasAlpha();
		void setPaint(__jni_impl::android::graphics::Paint arg0);
	};
} // namespace __jni_impl::android::graphics

#include "./Bitmap.hpp"
#include "./Canvas.hpp"
#include "./Paint.hpp"
#include "./Rect.hpp"
#include "./RectF.hpp"
#include "./Region.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void NinePatch::__constructor(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void NinePatch::__constructor(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[BLjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void NinePatch::__constructor(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[BLjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jboolean NinePatch::isNinePatchChunk(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.NinePatch",
			"isNinePatchChunk",
			"([B)Z",
			arg0
		);
	}
	void NinePatch::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NinePatch::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::RectF arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NinePatch::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject NinePatch::getBitmap()
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jint NinePatch::getDensity()
	{
		return __thiz.callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	jint NinePatch::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jstring NinePatch::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject NinePatch::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	QAndroidJniObject NinePatch::getTransparentRegion(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"getTransparentRegion",
			"(Landroid/graphics/Rect;)Landroid/graphics/Region;",
			arg0.__jniObject().object()
		);
	}
	jint NinePatch::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean NinePatch::hasAlpha()
	{
		return __thiz.callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	void NinePatch::setPaint(__jni_impl::android::graphics::Paint arg0)
	{
		__thiz.callMethod<void>(
			"setPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class NinePatch : public __jni_impl::android::graphics::NinePatch
	{
	public:
		NinePatch(QAndroidJniObject obj) { __thiz = obj; }
		NinePatch(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		NinePatch(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics

