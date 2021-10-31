#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Rect.hpp"
#include "./Animatable2_AnimationCallback.hpp"
#include "./AnimatedImageDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	jint AnimatedImageDrawable::REPEAT_INFINITE()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.AnimatedImageDrawable",
			"REPEAT_INFINITE"
		);
	}
	
	// QJniObject forward
	AnimatedImageDrawable::AnimatedImageDrawable(QJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	AnimatedImageDrawable::AnimatedImageDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.AnimatedImageDrawable",
			"()V"
		) {}
	
	// Methods
	void AnimatedImageDrawable::clearAnimationCallbacks()
	{
		callMethod<void>(
			"clearAnimationCallbacks",
			"()V"
		);
	}
	void AnimatedImageDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint AnimatedImageDrawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	android::graphics::ColorFilter AnimatedImageDrawable::getColorFilter()
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	jint AnimatedImageDrawable::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint AnimatedImageDrawable::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint AnimatedImageDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	jint AnimatedImageDrawable::getRepeatCount()
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	void AnimatedImageDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	jboolean AnimatedImageDrawable::isAutoMirrored()
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean AnimatedImageDrawable::isRunning()
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean AnimatedImageDrawable::onLayoutDirectionChanged(jint arg0)
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void AnimatedImageDrawable::registerAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0)
	{
		callMethod<void>(
			"registerAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)V",
			arg0.object()
		);
	}
	void AnimatedImageDrawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void AnimatedImageDrawable::setAutoMirrored(jboolean arg0)
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void AnimatedImageDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void AnimatedImageDrawable::setRepeatCount(jint arg0)
	{
		callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	void AnimatedImageDrawable::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void AnimatedImageDrawable::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	jboolean AnimatedImageDrawable::unregisterAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0)
	{
		return callMethod<jboolean>(
			"unregisterAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)Z",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

