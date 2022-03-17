#pragma once

#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../Outline.def.hpp"
#include "../Rect.def.hpp"
#include "./Drawable.def.hpp"
#include "./InsetDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable arg0, jfloat arg1)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;F)V",
			arg0.object(),
			arg1
		) {}
	inline InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable arg0, jint arg1)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.object(),
			arg1
		) {}
	inline InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;FFFF)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline void InsetDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline jint InsetDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint InsetDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint InsetDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline void InsetDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline jboolean InsetDrawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline void InsetDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
