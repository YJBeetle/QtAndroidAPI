#pragma once

#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../Canvas.def.hpp"
#include "../ColorFilter.def.hpp"
#include "../Outline.def.hpp"
#include "../PorterDuff_Mode.def.hpp"
#include "../Rect.def.hpp"
#include "./Animatable2_AnimationCallback.def.hpp"
#include "./Drawable.def.hpp"
#include "./Drawable_ConstantState.def.hpp"
#include "./AnimatedVectorDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline AnimatedVectorDrawable::AnimatedVectorDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.AnimatedVectorDrawable",
			"()V"
		) {}
	
	// Methods
	inline void AnimatedVectorDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline jboolean AnimatedVectorDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	inline void AnimatedVectorDrawable::clearAnimationCallbacks() const
	{
		callMethod<void>(
			"clearAnimationCallbacks",
			"()V"
		);
	}
	inline void AnimatedVectorDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint AnimatedVectorDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	inline jint AnimatedVectorDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::ColorFilter AnimatedVectorDrawable::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	inline android::graphics::drawable::Drawable_ConstantState AnimatedVectorDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	inline jint AnimatedVectorDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint AnimatedVectorDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint AnimatedVectorDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline void AnimatedVectorDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline void AnimatedVectorDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline jboolean AnimatedVectorDrawable::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	inline jboolean AnimatedVectorDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable AnimatedVectorDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jboolean AnimatedVectorDrawable::onLayoutDirectionChanged(jint arg0) const
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	inline void AnimatedVectorDrawable::registerAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const
	{
		callMethod<void>(
			"registerAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)V",
			arg0.object()
		);
	}
	inline void AnimatedVectorDrawable::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void AnimatedVectorDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void AnimatedVectorDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void AnimatedVectorDrawable::setHotspot(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void AnimatedVectorDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setHotspotBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void AnimatedVectorDrawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void AnimatedVectorDrawable::setTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline jboolean AnimatedVectorDrawable::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline void AnimatedVectorDrawable::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void AnimatedVectorDrawable::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline jboolean AnimatedVectorDrawable::unregisterAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const
	{
		return callMethod<jboolean>(
			"unregisterAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)Z",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"

