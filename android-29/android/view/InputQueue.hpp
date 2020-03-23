#pragma once

#ifndef ANDROID_VIEW_INPUTQUEUE
#define ANDROID_VIEW_INPUTQUEUE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class InputQueue : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void InputQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.InputQueue",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class InputQueue : public __jni_impl::android::view::InputQueue
	{
	public:
		InputQueue(QAndroidJniObject obj) { __thiz = obj; }
		InputQueue()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_INPUTQUEUE

