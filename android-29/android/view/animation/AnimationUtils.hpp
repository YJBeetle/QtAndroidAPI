#pragma once

#ifndef ANDROID_VIEW_ANIMATION_ANIMATIONUTILS
#define ANDROID_VIEW_ANIMATION_ANIMATIONUTILS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::animation
{
	class Animation;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view::animation
{
	class LayoutAnimationController;
}

namespace __jni_impl::android::view::animation
{
	class AnimationUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject makeOutAnimation(__jni_impl::android::content::Context arg0, jboolean arg1);
		static QAndroidJniObject makeInChildBottomAnimation(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject loadInterpolator(__jni_impl::android::content::Context arg0, jint arg1);
		static jlong currentAnimationTimeMillis();
		static QAndroidJniObject loadAnimation(__jni_impl::android::content::Context arg0, jint arg1);
		static QAndroidJniObject loadLayoutAnimation(__jni_impl::android::content::Context arg0, jint arg1);
		static QAndroidJniObject makeInAnimation(__jni_impl::android::content::Context arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::view::animation

#include "Animation.hpp"
#include "../../content/Context.hpp"
#include "LayoutAnimationController.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void AnimationUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnimationUtils",
			"()V");
	}
	
	// Methods
	QAndroidJniObject AnimationUtils::makeOutAnimation(__jni_impl::android::content::Context arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeOutAnimation",
			"(Landroid/content/Context;Z)Landroid/view/animation/Animation;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject AnimationUtils::makeInChildBottomAnimation(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeInChildBottomAnimation",
			"(Landroid/content/Context;)Landroid/view/animation/Animation;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AnimationUtils::loadInterpolator(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadInterpolator",
			"(Landroid/content/Context;I)Landroid/view/animation/Interpolator;",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong AnimationUtils::currentAnimationTimeMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.view.animation.AnimationUtils",
			"currentAnimationTimeMillis",
			"()J");
	}
	QAndroidJniObject AnimationUtils::loadAnimation(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadAnimation",
			"(Landroid/content/Context;I)Landroid/view/animation/Animation;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject AnimationUtils::loadLayoutAnimation(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadLayoutAnimation",
			"(Landroid/content/Context;I)Landroid/view/animation/LayoutAnimationController;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject AnimationUtils::makeInAnimation(__jni_impl::android::content::Context arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeInAnimation",
			"(Landroid/content/Context;Z)Landroid/view/animation/Animation;",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class AnimationUtils : public __jni_impl::android::view::animation::AnimationUtils
	{
	public:
		AnimationUtils(QAndroidJniObject obj) { __thiz = obj; }
		AnimationUtils()
		{
			__constructor();
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_ANIMATIONUTILS

