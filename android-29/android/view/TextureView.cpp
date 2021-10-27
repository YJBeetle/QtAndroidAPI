#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/Paint.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/SurfaceTexture.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./View.hpp"
#include "./TextureView.hpp"

namespace android::view
{
	// Fields
	
	TextureView::TextureView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextureView::TextureView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.TextureView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	TextureView::TextureView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.TextureView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TextureView::TextureView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.TextureView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	TextureView::TextureView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.TextureView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void TextureView::buildLayer()
	{
		__thiz.callMethod<void>(
			"buildLayer",
			"()V"
		);
	}
	void TextureView::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextureView::getBitmap()
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject TextureView::getBitmap(android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextureView::getBitmap(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"(II)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	jint TextureView::getLayerType()
	{
		return __thiz.callMethod<jint>(
			"getLayerType",
			"()I"
		);
	}
	QAndroidJniObject TextureView::getSurfaceTexture()
	{
		return __thiz.callObjectMethod(
			"getSurfaceTexture",
			"()Landroid/graphics/SurfaceTexture;"
		);
	}
	QAndroidJniObject TextureView::getSurfaceTextureListener()
	{
		return __thiz.callObjectMethod(
			"getSurfaceTextureListener",
			"()Landroid/view/TextureView$SurfaceTextureListener;"
		);
	}
	QAndroidJniObject TextureView::getTransform(android::graphics::Matrix arg0)
	{
		return __thiz.callObjectMethod(
			"getTransform",
			"(Landroid/graphics/Matrix;)Landroid/graphics/Matrix;",
			arg0.__jniObject().object()
		);
	}
	jboolean TextureView::isAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	jboolean TextureView::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	QAndroidJniObject TextureView::lockCanvas()
	{
		return __thiz.callObjectMethod(
			"lockCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	QAndroidJniObject TextureView::lockCanvas(android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"lockCanvas",
			"(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",
			arg0.__jniObject().object()
		);
	}
	void TextureView::setBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TextureView::setForeground(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setForeground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TextureView::setLayerPaint(android::graphics::Paint arg0)
	{
		__thiz.callMethod<void>(
			"setLayerPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
	void TextureView::setLayerType(jint arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextureView::setOpaque(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	void TextureView::setSurfaceTexture(android::graphics::SurfaceTexture arg0)
	{
		__thiz.callMethod<void>(
			"setSurfaceTexture",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.__jniObject().object()
		);
	}
	void TextureView::setSurfaceTextureListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSurfaceTextureListener",
			"(Landroid/view/TextureView$SurfaceTextureListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TextureView::setTransform(android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"setTransform",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void TextureView::unlockCanvasAndPost(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"unlockCanvasAndPost",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

