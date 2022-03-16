#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Outline.hpp"
#include "../PorterDuff_Mode.hpp"
#include "../Rect.hpp"
#include "./Animatable2_AnimationCallback.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./AnimatedVectorDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	AnimatedVectorDrawable::AnimatedVectorDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.AnimatedVectorDrawable",
			"()V"
		) {}
	
	// Methods
	void AnimatedVectorDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean AnimatedVectorDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void AnimatedVectorDrawable::clearAnimationCallbacks() const
	{
		callMethod<void>(
			"clearAnimationCallbacks",
			"()V"
		);
	}
	void AnimatedVectorDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint AnimatedVectorDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint AnimatedVectorDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::ColorFilter AnimatedVectorDrawable::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	android::graphics::drawable::Drawable_ConstantState AnimatedVectorDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint AnimatedVectorDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint AnimatedVectorDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint AnimatedVectorDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void AnimatedVectorDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	void AnimatedVectorDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	jboolean AnimatedVectorDrawable::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean AnimatedVectorDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable AnimatedVectorDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean AnimatedVectorDrawable::onLayoutDirectionChanged(jint arg0) const
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void AnimatedVectorDrawable::registerAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const
	{
		callMethod<void>(
			"registerAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)V",
			arg0.object()
		);
	}
	void AnimatedVectorDrawable::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void AnimatedVectorDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void AnimatedVectorDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void AnimatedVectorDrawable::setHotspot(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void AnimatedVectorDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void AnimatedVectorDrawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AnimatedVectorDrawable::setTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	jboolean AnimatedVectorDrawable::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void AnimatedVectorDrawable::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void AnimatedVectorDrawable::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	jboolean AnimatedVectorDrawable::unregisterAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const
	{
		return callMethod<jboolean>(
			"unregisterAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)Z",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

