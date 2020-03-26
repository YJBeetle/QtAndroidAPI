#pragma once

#ifndef ANDROID_VIEW_CHOREOGRAPHER
#define ANDROID_VIEW_CHOREOGRAPHER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Looper;
}

namespace __jni_impl::android::view
{
	class Choreographer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		void postFrameCallback(__jni_impl::__JniBaseClass arg0);
		void postFrameCallbackDelayed(__jni_impl::__JniBaseClass arg0, jlong arg1);
		void removeFrameCallback(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::view

#include "../os/Looper.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void Choreographer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.Choreographer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Choreographer::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.Choreographer",
			"getInstance",
			"()Landroid/view/Choreographer;"
		);
	}
	void Choreographer::postFrameCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"postFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Choreographer::postFrameCallbackDelayed(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"postFrameCallbackDelayed",
			"(Landroid/view/Choreographer$FrameCallback;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Choreographer::removeFrameCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class Choreographer : public __jni_impl::android::view::Choreographer
	{
	public:
		Choreographer(QAndroidJniObject obj) { __thiz = obj; }
		Choreographer()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_CHOREOGRAPHER

