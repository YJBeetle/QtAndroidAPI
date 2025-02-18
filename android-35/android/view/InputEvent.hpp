#pragma once

#include "./InputDevice.def.hpp"
#include "./InputEvent.def.hpp"

namespace android::view
{
	// Fields
	inline JObject InputEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.InputEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint InputEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::view::InputDevice InputEvent::getDevice() const
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/view/InputDevice;"
		);
	}
	inline jint InputEvent::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	inline jlong InputEvent::getEventTime() const
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	inline jint InputEvent::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	inline jboolean InputEvent::isFromSource(jint arg0) const
	{
		return callMethod<jboolean>(
			"isFromSource",
			"(I)Z",
			arg0
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
