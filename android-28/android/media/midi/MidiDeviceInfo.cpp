#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	JString MidiDeviceInfo::PROPERTY_BLUETOOTH_DEVICE()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_BLUETOOTH_DEVICE",
			"Ljava/lang/String;"
		);
	}
	JString MidiDeviceInfo::PROPERTY_MANUFACTURER()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_MANUFACTURER",
			"Ljava/lang/String;"
		);
	}
	JString MidiDeviceInfo::PROPERTY_NAME()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_NAME",
			"Ljava/lang/String;"
		);
	}
	JString MidiDeviceInfo::PROPERTY_PRODUCT()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_PRODUCT",
			"Ljava/lang/String;"
		);
	}
	JString MidiDeviceInfo::PROPERTY_SERIAL_NUMBER()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_SERIAL_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString MidiDeviceInfo::PROPERTY_USB_DEVICE()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_USB_DEVICE",
			"Ljava/lang/String;"
		);
	}
	JString MidiDeviceInfo::PROPERTY_VERSION()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_VERSION",
			"Ljava/lang/String;"
		);
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
	
	// Constructors
	
	// Methods
	jint MidiDeviceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MidiDeviceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MidiDeviceInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint MidiDeviceInfo::getInputPortCount() const
	{
		return callMethod<jint>(
			"getInputPortCount",
			"()I"
		);
	}
	jint MidiDeviceInfo::getOutputPortCount() const
	{
		return callMethod<jint>(
			"getOutputPortCount",
			"()I"
		);
	}
	JArray MidiDeviceInfo::getPorts() const
	{
		return callObjectMethod(
			"getPorts",
			"()[Landroid/media/midi/MidiDeviceInfo$PortInfo;"
		);
	}
	android::os::Bundle MidiDeviceInfo::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/os/Bundle;"
		);
	}
	jint MidiDeviceInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint MidiDeviceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MidiDeviceInfo::isPrivate() const
	{
		return callMethod<jboolean>(
			"isPrivate",
			"()Z"
		);
	}
	JString MidiDeviceInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MidiDeviceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::midi

