#pragma once

#ifndef ANDROID_VIEW_FOCUSFINDER
#define ANDROID_VIEW_FOCUSFINDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::view
{
	class FocusFinder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		QAndroidJniObject findNearestTouchable(__jni_impl::android::view::ViewGroup arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		QAndroidJniObject findNextFocus(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, jint arg2);
		QAndroidJniObject findNextFocusFromRect(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::graphics::Rect arg1, jint arg2);
		QAndroidJniObject findNextKeyboardNavigationCluster(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
	};
} // namespace __jni_impl::android::view

#include "../graphics/Rect.hpp"
#include "View.hpp"
#include "ViewGroup.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void FocusFinder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.FocusFinder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FocusFinder::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.FocusFinder",
			"getInstance",
			"()Landroid/view/FocusFinder;"
		);
	}
	QAndroidJniObject FocusFinder::findNearestTouchable(__jni_impl::android::view::ViewGroup arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
	{
		return __thiz.callObjectMethod(
			"findNearestTouchable",
			"(Landroid/view/ViewGroup;III[I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject FocusFinder::findNextFocus(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"findNextFocus",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FocusFinder::findNextFocusFromRect(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::graphics::Rect arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"findNextFocusFromRect",
			"(Landroid/view/ViewGroup;Landroid/graphics/Rect;I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FocusFinder::findNextKeyboardNavigationCluster(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"findNextKeyboardNavigationCluster",
			"(Landroid/view/View;Landroid/view/View;I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class FocusFinder : public __jni_impl::android::view::FocusFinder
	{
	public:
		FocusFinder(QAndroidJniObject obj) { __thiz = obj; }
		FocusFinder()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_FOCUSFINDER

