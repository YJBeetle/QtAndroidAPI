#pragma once

#ifndef ANDROID_VIEW_INPUTEVENT
#define ANDROID_VIEW_INPUTEVENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class InputDevice;
}

namespace __jni_impl::android::view
{
	class InputEvent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getSource();
		jint getDeviceId();
		jlong getEventTime();
		jboolean isFromSource(jint arg0);
		QAndroidJniObject getDevice();
		jint describeContents();
	};
} // namespace __jni_impl::android::view

#include "InputDevice.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject InputEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.InputEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void InputEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.InputEvent",
			"(V)V");
	}
	
	// Methods
	jint InputEvent::getSource()
	{
		return __thiz.callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	jint InputEvent::getDeviceId()
	{
		return __thiz.callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	jlong InputEvent::getEventTime()
	{
		return __thiz.callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jboolean InputEvent::isFromSource(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isFromSource",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject InputEvent::getDevice()
	{
		return __thiz.callObjectMethod(
			"getDevice",
			"()Landroid/view/InputDevice;"
		);
	}
	jint InputEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class InputEvent : public __jni_impl::android::view::InputEvent
	{
	public:
		InputEvent(QAndroidJniObject obj) { __thiz = obj; }
		InputEvent()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_INPUTEVENT

