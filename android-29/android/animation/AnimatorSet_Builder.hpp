#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::animation
{
	class Animator;
}
namespace __jni_impl::android::animation
{
	class AnimatorSet;
}

namespace __jni_impl::android::animation
{
	class AnimatorSet_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject after(__jni_impl::android::animation::Animator arg0);
		QAndroidJniObject after(jlong arg0);
		QAndroidJniObject before(__jni_impl::android::animation::Animator arg0);
		QAndroidJniObject with(__jni_impl::android::animation::Animator arg0);
	};
} // namespace __jni_impl::android::animation

#include "./Animator.hpp"
#include "./AnimatorSet.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void AnimatorSet_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.AnimatorSet$Builder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AnimatorSet_Builder::after(__jni_impl::android::animation::Animator arg0)
	{
		return __thiz.callObjectMethod(
			"after",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AnimatorSet_Builder::after(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"after",
			"(J)Landroid/animation/AnimatorSet$Builder;",
			arg0
		);
	}
	QAndroidJniObject AnimatorSet_Builder::before(__jni_impl::android::animation::Animator arg0)
	{
		return __thiz.callObjectMethod(
			"before",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AnimatorSet_Builder::with(__jni_impl::android::animation::Animator arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class AnimatorSet_Builder : public __jni_impl::android::animation::AnimatorSet_Builder
	{
	public:
		AnimatorSet_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AnimatorSet_Builder()
		{
			__constructor();
		}
	};
} // namespace android::animation

