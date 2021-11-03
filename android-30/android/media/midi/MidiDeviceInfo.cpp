#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./MidiDeviceInfo.hpp"

namespace android::media::midi
{
	// Fields
	JObject MidiDeviceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring MidiDeviceInfo::PROPERTY_BLUETOOTH_DEVICE()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_BLUETOOTH_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_MANUFACTURER()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_MANUFACTURER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_NAME()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_PRODUCT()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_PRODUCT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_SERIAL_NUMBER()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_SERIAL_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_USB_DEVICE()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_USB_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_VERSION()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MidiDeviceInfo::TYPE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo",
			"TYPE_BLUETOOTH"
		);
	}
	jint MidiDeviceInfo::TYPE_USB()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo",
			"TYPE_USB"
		);
	}
	jint MidiDeviceInfo::TYPE_VIRTUAL()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo",
			"TYPE_VIRTUAL"
		);
	}
	
	// QAndroidJniObject forward
	MidiDeviceInfo::MidiDeviceInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MidiDeviceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MidiDeviceInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MidiDeviceInfo::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint MidiDeviceInfo::getInputPortCount()
	{
		return callMethod<jint>(
			"getInputPortCount",
			"()I"
		);
	}
	jint MidiDeviceInfo::getOutputPortCount()
	{
		return callMethod<jint>(
			"getOutputPortCount",
			"()I"
		);
	}
	jarray MidiDeviceInfo::getPorts()
	{
		return callObjectMethod(
			"getPorts",
			"()[Landroid/media/midi/MidiDeviceInfo$PortInfo;"
		).object<jarray>();
	}
	android::os::Bundle MidiDeviceInfo::getProperties()
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/os/Bundle;"
		);
	}
	jint MidiDeviceInfo::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint MidiDeviceInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MidiDeviceInfo::isPrivate()
	{
		return callMethod<jboolean>(
			"isPrivate",
			"()Z"
		);
	}
	jstring MidiDeviceInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MidiDeviceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::midi

