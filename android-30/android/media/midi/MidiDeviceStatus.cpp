#include "./MidiDeviceInfo.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./MidiDeviceStatus.hpp"

namespace android::media::midi
{
	// Fields
	JObject MidiDeviceStatus::CREATOR()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	MidiDeviceStatus::MidiDeviceStatus(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MidiDeviceStatus::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::media::midi::MidiDeviceInfo MidiDeviceStatus::getDeviceInfo() const
	{
		return callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	jint MidiDeviceStatus::getOutputPortOpenCount(jint arg0) const
	{
		return callMethod<jint>(
			"getOutputPortOpenCount",
			"(I)I",
			arg0
		);
	}
	jboolean MidiDeviceStatus::isInputPortOpen(jint arg0) const
	{
		return callMethod<jboolean>(
			"isInputPortOpen",
			"(I)Z",
			arg0
		);
	}
	JString MidiDeviceStatus::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MidiDeviceStatus::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::midi

