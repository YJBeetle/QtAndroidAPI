#pragma once

#ifndef ANDROID_ANIMATION_ANIMATORINFLATER
#define ANDROID_ANIMATION_ANIMATORINFLATER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::animation
{
	class Animator;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::animation
{
	class StateListAnimator;
}

namespace __jni_impl::android::animation
{
	class AnimatorInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject loadAnimator(__jni_impl::android::content::Context arg0, jint arg1);
		static QAndroidJniObject loadStateListAnimator(__jni_impl::android::content::Context arg0, jint arg1);
	};
} // namespace __jni_impl::android::animation

#include "Animator.hpp"
#include "../content/Context.hpp"
#include "StateListAnimator.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void AnimatorInflater::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.AnimatorInflater",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AnimatorInflater::loadAnimator(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.AnimatorInflater",
			"loadAnimator",
			"(Landroid/content/Context;I)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AnimatorInflater::loadStateListAnimator(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.AnimatorInflater",
			"loadStateListAnimator",
			"(Landroid/content/Context;I)Landroid/animation/StateListAnimator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class AnimatorInflater : public __jni_impl::android::animation::AnimatorInflater
	{
	public:
		AnimatorInflater(QAndroidJniObject obj) { __thiz = obj; }
		AnimatorInflater()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_ANIMATORINFLATER

