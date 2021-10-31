#include "./InputDevice.hpp"
#include "./InputEvent.hpp"

namespace android::view
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
	
	// QAndroidJniObject forward
	InputEvent::InputEvent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint InputEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject InputEvent::getDevice()
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/view/InputDevice;"
		);
	}
	jint InputEvent::getDeviceId()
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	jlong InputEvent::getEventTime()
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jint InputEvent::getSource()
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	jboolean InputEvent::isFromSource(jint arg0)
	{
		return callMethod<jboolean>(
			"isFromSource",
			"(I)Z",
			arg0
		);
	}
} // namespace android::view

