#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Picture.hpp"
#include "./PictureDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	PictureDrawable::PictureDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	PictureDrawable::PictureDrawable(android::graphics::Picture arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.PictureDrawable",
			"(Landroid/graphics/Picture;)V",
			arg0.object()
		) {}
	
	// Methods
	void PictureDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint PictureDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint PictureDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint PictureDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	android::graphics::Picture PictureDrawable::getPicture() const
	{
		return callObjectMethod(
			"getPicture",
			"()Landroid/graphics/Picture;"
		);
	}
	void PictureDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void PictureDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void PictureDrawable::setPicture(android::graphics::Picture arg0) const
	{
		callMethod<void>(
			"setPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

