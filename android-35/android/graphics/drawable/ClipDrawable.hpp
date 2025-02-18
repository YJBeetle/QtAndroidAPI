#pragma once

#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../Canvas.def.hpp"
#include "./Drawable.def.hpp"
#include "./ClipDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	inline jint ClipDrawable::HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.ClipDrawable",
			"HORIZONTAL"
		);
	}
	inline jint ClipDrawable::VERTICAL()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.ClipDrawable",
			"VERTICAL"
		);
	}
	
	// Constructors
	inline ClipDrawable::ClipDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jint arg2)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.ClipDrawable",
			"(Landroid/graphics/drawable/Drawable;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline void ClipDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline void ClipDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint ClipDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline void ClipDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
