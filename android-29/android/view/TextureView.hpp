#pragma once

#ifndef ANDROID_VIEW_TEXTUREVIEW
#define ANDROID_VIEW_TEXTUREVIEW

#include "View.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class SurfaceTexture;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::view
{
	class TextureView : public __jni_impl::android::view::View
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setOpaque(jboolean arg0);
		jboolean isOpaque();
		jboolean isAvailable();
		QAndroidJniObject lockCanvas(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject lockCanvas();
		void unlockCanvasAndPost(__jni_impl::android::graphics::Canvas arg0);
		void setTransform(__jni_impl::android::graphics::Matrix arg0);
		QAndroidJniObject getSurfaceTexture();
		void setSurfaceTexture(__jni_impl::android::graphics::SurfaceTexture arg0);
		QAndroidJniObject getSurfaceTextureListener();
		void setSurfaceTextureListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getBitmap(__jni_impl::android::graphics::Bitmap arg0);
		QAndroidJniObject getBitmap(jint arg0, jint arg1);
		QAndroidJniObject getBitmap();
		QAndroidJniObject getTransform(__jni_impl::android::graphics::Matrix arg0);
		void setLayerType(jint arg0, __jni_impl::android::graphics::Paint arg1);
		void setLayerPaint(__jni_impl::android::graphics::Paint arg0);
		jint getLayerType();
		void buildLayer();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setForeground(__jni_impl::android::graphics::drawable::Drawable arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/SurfaceTexture.hpp"
#include "../graphics/Bitmap.hpp"
#include "View.hpp"
#include "../graphics/Paint.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void TextureView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.TextureView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void TextureView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.TextureView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void TextureView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.TextureView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void TextureView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.TextureView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void TextureView::setOpaque(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0);
	}
	jboolean TextureView::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z");
	}
	jboolean TextureView::isAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isAvailable",
			"()Z");
	}
	QAndroidJniObject TextureView::lockCanvas(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"lockCanvas",
			"(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextureView::lockCanvas()
	{
		return __thiz.callObjectMethod(
			"lockCanvas",
			"()Landroid/graphics/Canvas;");
	}
	void TextureView::unlockCanvasAndPost(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"unlockCanvasAndPost",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	void TextureView::setTransform(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"setTransform",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextureView::getSurfaceTexture()
	{
		return __thiz.callObjectMethod(
			"getSurfaceTexture",
			"()Landroid/graphics/SurfaceTexture;");
	}
	void TextureView::setSurfaceTexture(__jni_impl::android::graphics::SurfaceTexture arg0)
	{
		__thiz.callMethod<void>(
			"setSurfaceTexture",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextureView::getSurfaceTextureListener()
	{
		return __thiz.callObjectMethod(
			"getSurfaceTextureListener",
			"()Landroid/view/TextureView$SurfaceTextureListener;");
	}
	void TextureView::setSurfaceTextureListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSurfaceTextureListener",
			"(Landroid/view/TextureView$SurfaceTextureListener;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextureView::getBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextureView::getBitmap(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"(II)Landroid/graphics/Bitmap;",
			arg0,
			arg1);
	}
	QAndroidJniObject TextureView::getBitmap()
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;");
	}
	QAndroidJniObject TextureView::getTransform(__jni_impl::android::graphics::Matrix arg0)
	{
		return __thiz.callObjectMethod(
			"getTransform",
			"(Landroid/graphics/Matrix;)Landroid/graphics/Matrix;",
			arg0.__jniObject().object());
	}
	void TextureView::setLayerType(jint arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void TextureView::setLayerPaint(__jni_impl::android::graphics::Paint arg0)
	{
		__thiz.callMethod<void>(
			"setLayerPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object());
	}
	jint TextureView::getLayerType()
	{
		return __thiz.callMethod<jint>(
			"getLayerType",
			"()I");
	}
	void TextureView::buildLayer()
	{
		__thiz.callMethod<void>(
			"buildLayer",
			"()V");
	}
	void TextureView::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	void TextureView::setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void TextureView::setForeground(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setForeground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class TextureView : public __jni_impl::android::view::TextureView
	{
	public:
		TextureView(QAndroidJniObject obj) { __thiz = obj; }
		TextureView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		TextureView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TextureView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TextureView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_TEXTUREVIEW

