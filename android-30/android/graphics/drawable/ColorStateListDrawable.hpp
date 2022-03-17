#pragma once

#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../BlendMode.def.hpp"
#include "../Canvas.def.hpp"
#include "../ColorFilter.def.hpp"
#include "../Rect.def.hpp"
#include "./Drawable.def.hpp"
#include "./Drawable_ConstantState.def.hpp"
#include "./ColorStateListDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline ColorStateListDrawable::ColorStateListDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ColorStateListDrawable",
			"()V"
		) {}
	inline ColorStateListDrawable::ColorStateListDrawable(android::content::res::ColorStateList arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ColorStateListDrawable",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ColorStateListDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline jboolean ColorStateListDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	inline void ColorStateListDrawable::clearAlpha() const
	{
		callMethod<void>(
			"clearAlpha",
			"()V"
		);
	}
	inline void ColorStateListDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint ColorStateListDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	inline jint ColorStateListDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::ColorFilter ColorStateListDrawable::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	inline android::content::res::ColorStateList ColorStateListDrawable::getColorStateList() const
	{
		return callObjectMethod(
			"getColorStateList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::drawable::Drawable_ConstantState ColorStateListDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	inline android::graphics::drawable::Drawable ColorStateListDrawable::getCurrent() const
	{
		return callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint ColorStateListDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline jboolean ColorStateListDrawable::hasFocusStateSpecified() const
	{
		return callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	inline void ColorStateListDrawable::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline jboolean ColorStateListDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable ColorStateListDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline void ColorStateListDrawable::scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ColorStateListDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void ColorStateListDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void ColorStateListDrawable::setColorStateList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setColorStateList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void ColorStateListDrawable::setTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void ColorStateListDrawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void ColorStateListDrawable::unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
