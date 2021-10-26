#pragma once

#ifndef ANDROID_VIEW_ACTIONMODE_CALLBACK2
#define ANDROID_VIEW_ACTIONMODE_CALLBACK2

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class ActionMode;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::view
{
	class ActionMode_Callback2 : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onGetContentRect(__jni_impl::android::view::ActionMode arg0, __jni_impl::android::view::View arg1, __jni_impl::android::graphics::Rect arg2);
	};
} // namespace __jni_impl::android::view

#include "ActionMode.hpp"
#include "View.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ActionMode_Callback2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ActionMode$Callback2",
			"()V"
		);
	}
	
	// Methods
	void ActionMode_Callback2::onGetContentRect(__jni_impl::android::view::ActionMode arg0, __jni_impl::android::view::View arg1, __jni_impl::android::graphics::Rect arg2)
	{
		__thiz.callMethod<void>(
			"onGetContentRect",
			"(Landroid/view/ActionMode;Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ActionMode_Callback2 : public __jni_impl::android::view::ActionMode_Callback2
	{
	public:
		ActionMode_Callback2(QAndroidJniObject obj) { __thiz = obj; }
		ActionMode_Callback2()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_ACTIONMODE_CALLBACK2

