#pragma once

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
		jint describeContents();
		QAndroidJniObject getDevice();
		jint getDeviceId();
		jlong getEventTime();
		jint getSource();
		jboolean isFromSource(jint arg0);
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
	jint InputEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject InputEvent::getDevice()
	{
		return __thiz.callObjectMethod(
			"getDevice",
			"()Landroid/view/InputDevice;"
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
	jint InputEvent::getSource()
	{
		return __thiz.callMethod<jint>(
			"getSource",
			"()I"
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

