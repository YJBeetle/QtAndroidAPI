#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Animation.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view::animation
{
	class Animation;
}
namespace __jni_impl::android::view::animation
{
	class Transformation;
}

namespace __jni_impl::android::view::animation
{
	class AnimationSet : public __jni_impl::android::view::animation::Animation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jboolean arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void addAnimation(__jni_impl::android::view::animation::Animation arg0);
		jlong computeDurationHint();
		QAndroidJniObject getAnimations();
		jlong getDuration();
		jlong getStartTime();
		jboolean getTransformation(jlong arg0, __jni_impl::android::view::animation::Transformation arg1);
		void initialize(jint arg0, jint arg1, jint arg2, jint arg3);
		void reset();
		void restrictDuration(jlong arg0);
		void scaleCurrentDuration(jfloat arg0);
		void setDuration(jlong arg0);
		void setFillAfter(jboolean arg0);
		void setFillBefore(jboolean arg0);
		void setRepeatMode(jint arg0);
		void setStartOffset(jlong arg0);
		void setStartTime(jlong arg0);
		jboolean willChangeBounds();
		jboolean willChangeTransformationMatrix();
	};
} // namespace __jni_impl::android::view::animation

#include "../../content/Context.hpp"
#include "./Animation.hpp"
#include "./Transformation.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void AnimationSet::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnimationSet",
			"(Z)V",
			arg0
		);
	}
	void AnimationSet::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnimationSet",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void AnimationSet::addAnimation(__jni_impl::android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"addAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	jlong AnimationSet::computeDurationHint()
	{
		return __thiz.callMethod<jlong>(
			"computeDurationHint",
			"()J"
		);
	}
	QAndroidJniObject AnimationSet::getAnimations()
	{
		return __thiz.callObjectMethod(
			"getAnimations",
			"()Ljava/util/List;"
		);
	}
	jlong AnimationSet::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	jlong AnimationSet::getStartTime()
	{
		return __thiz.callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	jboolean AnimationSet::getTransformation(jlong arg0, __jni_impl::android::view::animation::Transformation arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AnimationSet::initialize(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void AnimationSet::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void AnimationSet::restrictDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"restrictDuration",
			"(J)V",
			arg0
		);
	}
	void AnimationSet::scaleCurrentDuration(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"scaleCurrentDuration",
			"(F)V",
			arg0
		);
	}
	void AnimationSet::setDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	void AnimationSet::setFillAfter(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillAfter",
			"(Z)V",
			arg0
		);
	}
	void AnimationSet::setFillBefore(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillBefore",
			"(Z)V",
			arg0
		);
	}
	void AnimationSet::setRepeatMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	void AnimationSet::setStartOffset(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartOffset",
			"(J)V",
			arg0
		);
	}
	void AnimationSet::setStartTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartTime",
			"(J)V",
			arg0
		);
	}
	jboolean AnimationSet::willChangeBounds()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	jboolean AnimationSet::willChangeTransformationMatrix()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class AnimationSet : public __jni_impl::android::view::animation::AnimationSet
	{
	public:
		AnimationSet(QAndroidJniObject obj) { __thiz = obj; }
		AnimationSet(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		AnimationSet(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::animation

