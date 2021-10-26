#pragma once

#ifndef ANDROID_VIEW_ORIENTATIONEVENTLISTENER
#define ANDROID_VIEW_ORIENTATIONEVENTLISTENER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view
{
	class OrientationEventListener : public __JniBaseClass
	{
	public:
		// Fields
		static jint ORIENTATION_UNKNOWN();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		
		// Methods
		void enable();
		void disable();
		jboolean canDetectOrientation();
		void onOrientationChanged(jint arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jint OrientationEventListener::ORIENTATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.OrientationEventListener",
			"ORIENTATION_UNKNOWN"
		);
	}
	
	// Constructors
	void OrientationEventListener::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void OrientationEventListener::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.OrientationEventListener",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void OrientationEventListener::enable()
	{
		__thiz.callMethod<void>(
			"enable",
			"()V"
		);
	}
	void OrientationEventListener::disable()
	{
		__thiz.callMethod<void>(
			"disable",
			"()V"
		);
	}
	jboolean OrientationEventListener::canDetectOrientation()
	{
		return __thiz.callMethod<jboolean>(
			"canDetectOrientation",
			"()Z"
		);
	}
	void OrientationEventListener::onOrientationChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onOrientationChanged",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class OrientationEventListener : public __jni_impl::android::view::OrientationEventListener
	{
	public:
		OrientationEventListener(QAndroidJniObject obj) { __thiz = obj; }
		OrientationEventListener(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		OrientationEventListener(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_ORIENTATIONEVENTLISTENER

