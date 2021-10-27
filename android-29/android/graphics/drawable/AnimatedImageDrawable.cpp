#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "./Animatable2_AnimationCallback.hpp"
#include "./AnimatedImageDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	jint AnimatedImageDrawable::REPEAT_INFINITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.AnimatedImageDrawable",
			"REPEAT_INFINITE"
		);
	}
	
	AnimatedImageDrawable::AnimatedImageDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnimatedImageDrawable::AnimatedImageDrawable()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.AnimatedImageDrawable",
			"()V"
		);
	}
	
	// Methods
	void AnimatedImageDrawable::clearAnimationCallbacks()
	{
		__thiz.callMethod<void>(
			"clearAnimationCallbacks",
			"()V"
		);
	}
	void AnimatedImageDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint AnimatedImageDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	QAndroidJniObject AnimatedImageDrawable::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	jint AnimatedImageDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint AnimatedImageDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint AnimatedImageDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	jint AnimatedImageDrawable::getRepeatCount()
	{
		return __thiz.callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	void AnimatedImageDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean AnimatedImageDrawable::isAutoMirrored()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean AnimatedImageDrawable::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean AnimatedImageDrawable::onLayoutDirectionChanged(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void AnimatedImageDrawable::registerAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatedImageDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void AnimatedImageDrawable::setAutoMirrored(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void AnimatedImageDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatedImageDrawable::setRepeatCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	void AnimatedImageDrawable::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void AnimatedImageDrawable::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	jboolean AnimatedImageDrawable::unregisterAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics::drawable

