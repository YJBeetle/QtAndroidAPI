#pragma once

#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../Canvas.def.hpp"
#include "../Rect.def.hpp"
#include "./Drawable.def.hpp"
#include "./ScaleDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline ScaleDrawable::ScaleDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jfloat arg2, jfloat arg3)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.ScaleDrawable",
			"(Landroid/graphics/drawable/Drawable;IFF)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline void ScaleDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline void ScaleDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint ScaleDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline void ScaleDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"
#include "./DrawableWrapper.hpp"

