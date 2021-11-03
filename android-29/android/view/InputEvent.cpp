#include "./InputDevice.hpp"
#include "./InputEvent.hpp"

namespace android::view
{
	// Fields
	JObject InputEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.InputEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	InputEvent::InputEvent(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint InputEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::view::InputDevice InputEvent::getDevice()
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

