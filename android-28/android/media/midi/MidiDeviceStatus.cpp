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
	
	// QAndroidJniObject forward
	MidiDeviceStatus::MidiDeviceStatus(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MidiDeviceStatus::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::media::midi::MidiDeviceInfo MidiDeviceStatus::getDeviceInfo()
	{
		return callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	jint MidiDeviceStatus::getOutputPortOpenCount(jint arg0)
	{
		return callMethod<jint>(
			"getOutputPortOpenCount",
			"(I)I",
			arg0
		);
	}
	jboolean MidiDeviceStatus::isInputPortOpen(jint arg0)
	{
		return callMethod<jboolean>(
			"isInputPortOpen",
			"(I)Z",
			arg0
		);
	}
	JString MidiDeviceStatus::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MidiDeviceStatus::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::midi

