#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class InputDevice;
}

namespace __jni_impl::android::view
{
	class SearchEvent : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::InputDevice arg0);
		
		// Methods
		QAndroidJniObject getInputDevice();
	};
} // namespace __jni_impl::android::view

#include "./InputDevice.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void SearchEvent::__constructor(__jni_impl::android::view::InputDevice arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.SearchEvent",
			"(Landroid/view/InputDevice;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SearchEvent::getInputDevice()
	{
		return __thiz.callObjectMethod(
			"getInputDevice",
			"()Landroid/view/InputDevice;"
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class SearchEvent : public __jni_impl::android::view::SearchEvent
	{
	public:
		SearchEvent(QAndroidJniObject obj) { __thiz = obj; }
		SearchEvent(__jni_impl::android::view::InputDevice arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

