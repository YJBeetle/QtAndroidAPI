#pragma once

#include "./MidiDeviceInfo.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./MidiDeviceStatus.def.hpp"

namespace android::media::midi
{
	// Fields
	inline JObject MidiDeviceStatus::CREATOR()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MidiDeviceStatus::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::media::midi::MidiDeviceInfo MidiDeviceStatus::getDeviceInfo() const
	{
		return callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	inline jint MidiDeviceStatus::getOutputPortOpenCount(jint arg0) const
	{
		return callMethod<jint>(
			"getOutputPortOpenCount",
			"(I)I",
			arg0
		);
	}
	inline jboolean MidiDeviceStatus::isInputPortOpen(jint arg0) const
	{
		return callMethod<jboolean>(
			"isInputPortOpen",
			"(I)Z",
			arg0
		);
	}
	inline JString MidiDeviceStatus::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MidiDeviceStatus::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::midi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::midi;
#endif
