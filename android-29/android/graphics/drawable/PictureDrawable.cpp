#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Picture.hpp"
#include "./PictureDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	PictureDrawable::PictureDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PictureDrawable::PictureDrawable(android::graphics::Picture &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.PictureDrawable",
			"(Landroid/graphics/Picture;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void PictureDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint PictureDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint PictureDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint PictureDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	QAndroidJniObject PictureDrawable::getPicture()
	{
		return __thiz.callObjectMethod(
			"getPicture",
			"()Landroid/graphics/Picture;"
		);
	}
	void PictureDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void PictureDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void PictureDrawable::setPicture(android::graphics::Picture arg0)
	{
		__thiz.callMethod<void>(
			"setPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics::drawable

