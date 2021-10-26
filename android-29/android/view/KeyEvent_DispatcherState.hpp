#pragma once

#ifndef ANDROID_VIEW_KEYEVENT_DISPATCHERSTATE
#define ANDROID_VIEW_KEYEVENT_DISPATCHERSTATE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class KeyEvent;
}

namespace __jni_impl::android::view
{
	class KeyEvent_DispatcherState : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void reset(jobject arg0);
		void reset();
		void startTracking(__jni_impl::android::view::KeyEvent arg0, jobject arg1);
		jboolean isTracking(__jni_impl::android::view::KeyEvent arg0);
		void performedLongPress(__jni_impl::android::view::KeyEvent arg0);
		void handleUpEvent(__jni_impl::android::view::KeyEvent arg0);
	};
} // namespace __jni_impl::android::view

#include "KeyEvent.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void KeyEvent_DispatcherState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyEvent$DispatcherState",
			"()V"
		);
	}
	
	// Methods
	void KeyEvent_DispatcherState::reset(jobject arg0)
	{
		__thiz.callMethod<void>(
			"reset",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void KeyEvent_DispatcherState::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void KeyEvent_DispatcherState::startTracking(__jni_impl::android::view::KeyEvent arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"startTracking",
			"(Landroid/view/KeyEvent;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean KeyEvent_DispatcherState::isTracking(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isTracking",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void KeyEvent_DispatcherState::performedLongPress(__jni_impl::android::view::KeyEvent arg0)
	{
		__thiz.callMethod<void>(
			"performedLongPress",
			"(Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyEvent_DispatcherState::handleUpEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		__thiz.callMethod<void>(
			"handleUpEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class KeyEvent_DispatcherState : public __jni_impl::android::view::KeyEvent_DispatcherState
	{
	public:
		KeyEvent_DispatcherState(QAndroidJniObject obj) { __thiz = obj; }
		KeyEvent_DispatcherState()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_KEYEVENT_DISPATCHERSTATE

