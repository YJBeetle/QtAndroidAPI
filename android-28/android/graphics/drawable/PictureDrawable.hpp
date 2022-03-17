#pragma once

#include "../Canvas.def.hpp"
#include "../ColorFilter.def.hpp"
#include "../Picture.def.hpp"
#include "./PictureDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline PictureDrawable::PictureDrawable(android::graphics::Picture arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.PictureDrawable",
			"(Landroid/graphics/Picture;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void PictureDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint PictureDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint PictureDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint PictureDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline android::graphics::Picture PictureDrawable::getPicture() const
	{
		return callObjectMethod(
			"getPicture",
			"()Landroid/graphics/Picture;"
		);
	}
	inline void PictureDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void PictureDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void PictureDrawable::setPicture(android::graphics::Picture arg0) const
	{
		callMethod<void>(
			"setPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"

