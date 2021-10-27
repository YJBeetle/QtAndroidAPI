#include "./MidiDeviceInfo.hpp"
#include "../../os/Parcel.hpp"
#include "./MidiDeviceStatus.hpp"

namespace android::media::midi
{
	// Fields
	QAndroidJniObject MidiDeviceStatus::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	MidiDeviceStatus::MidiDeviceStatus(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint MidiDeviceStatus::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject MidiDeviceStatus::getDeviceInfo()
	{
		return __thiz.callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	jint MidiDeviceStatus::getOutputPortOpenCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOutputPortOpenCount",
			"(I)I",
			arg0
		);
	}
	jboolean MidiDeviceStatus::isInputPortOpen(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isInputPortOpen",
			"(I)Z",
			arg0
		);
	}
	jstring MidiDeviceStatus::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MidiDeviceStatus::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media::midi

