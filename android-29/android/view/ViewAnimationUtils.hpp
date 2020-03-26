#pragma once

#ifndef ANDROID_VIEW_VIEWANIMATIONUTILS
#define ANDROID_VIEW_VIEWANIMATIONUTILS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::animation
{
	class Animator;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view
{
	class ViewAnimationUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createCircularReveal(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4);
	};
} // namespace __jni_impl::android::view

#include "../animation/Animator.hpp"
#include "View.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewAnimationUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewAnimationUtils",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ViewAnimationUtils::createCircularReveal(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewAnimationUtils",
			"createCircularReveal",
			"(Landroid/view/View;IIFF)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewAnimationUtils : public __jni_impl::android::view::ViewAnimationUtils
	{
	public:
		ViewAnimationUtils(QAndroidJniObject obj) { __thiz = obj; }
		ViewAnimationUtils()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWANIMATIONUTILS

