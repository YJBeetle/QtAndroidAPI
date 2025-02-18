#pragma once

#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../Canvas.def.hpp"
#include "../ColorFilter.def.hpp"
#include "../Rect.def.hpp"
#include "./Animatable2_AnimationCallback.def.hpp"
#include "./AnimatedImageDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	inline jint AnimatedImageDrawable::REPEAT_INFINITE()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.AnimatedImageDrawable",
			"REPEAT_INFINITE"
		);
	}
	
	// Constructors
	inline AnimatedImageDrawable::AnimatedImageDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.AnimatedImageDrawable",
			"()V"
		) {}
	
	// Methods
	inline void AnimatedImageDrawable::clearAnimationCallbacks() const
	{
		callMethod<void>(
			"clearAnimationCallbacks",
			"()V"
		);
	}
	inline void AnimatedImageDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint AnimatedImageDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	inline android::graphics::ColorFilter AnimatedImageDrawable::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	inline jint AnimatedImageDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint AnimatedImageDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint AnimatedImageDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline jint AnimatedImageDrawable::getRepeatCount() const
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	inline void AnimatedImageDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline jboolean AnimatedImageDrawable::isAutoMirrored() const
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	inline jboolean AnimatedImageDrawable::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	inline jboolean AnimatedImageDrawable::onLayoutDirectionChanged(jint arg0) const
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	inline void AnimatedImageDrawable::registerAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const
	{
		callMethod<void>(
			"registerAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)V",
			arg0.object()
		);
	}
	inline void AnimatedImageDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void AnimatedImageDrawable::setAutoMirrored(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	inline void AnimatedImageDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void AnimatedImageDrawable::setRepeatCount(jint arg0) const
	{
		callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	inline void AnimatedImageDrawable::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void AnimatedImageDrawable::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline jboolean AnimatedImageDrawable::unregisterAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
