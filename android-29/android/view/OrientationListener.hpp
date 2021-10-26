#pragma once

#ifndef ANDROID_VIEW_ORIENTATIONLISTENER
#define ANDROID_VIEW_ORIENTATIONLISTENER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view
{
	class OrientationListener : public __JniBaseClass
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
		void onSensorChanged(jint arg0, jfloatArray arg1);
		void onAccuracyChanged(jint arg0, jint arg1);
		void onOrientationChanged(jint arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jint OrientationListener::ORIENTATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.OrientationListener",
			"ORIENTATION_UNKNOWN"
		);
	}
	
	// Constructors
	void OrientationListener::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.OrientationListener",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void OrientationListener::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.OrientationListener",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void OrientationListener::enable()
	{
		__thiz.callMethod<void>(
			"enable",
			"()V"
		);
	}
	void OrientationListener::disable()
	{
		__thiz.callMethod<void>(
			"disable",
			"()V"
		);
	}
	void OrientationListener::onSensorChanged(jint arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"onSensorChanged",
			"(I[F)V",
			arg0,
			arg1
		);
	}
	void OrientationListener::onAccuracyChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onAccuracyChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void OrientationListener::onOrientationChanged(jint arg0)
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
	class OrientationListener : public __jni_impl::android::view::OrientationListener
	{
	public:
		OrientationListener(QAndroidJniObject obj) { __thiz = obj; }
		OrientationListener(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		OrientationListener(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_ORIENTATIONLISTENER

