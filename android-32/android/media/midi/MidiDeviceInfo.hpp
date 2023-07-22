#pragma once

#include "../../../JArray.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MidiDeviceInfo.def.hpp"

namespace android::media::midi
{
	// Fields
	inline JObject MidiDeviceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString MidiDeviceInfo::PROPERTY_BLUETOOTH_DEVICE()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_BLUETOOTH_DEVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString MidiDeviceInfo::PROPERTY_MANUFACTURER()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_MANUFACTURER",
			"Ljava/lang/String;"
		);
	}
	inline JString MidiDeviceInfo::PROPERTY_NAME()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString MidiDeviceInfo::PROPERTY_PRODUCT()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_PRODUCT",
			"Ljava/lang/String;"
		);
	}
	inline JString MidiDeviceInfo::PROPERTY_SERIAL_NUMBER()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_SERIAL_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString MidiDeviceInfo::PROPERTY_USB_DEVICE()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_USB_DEVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString MidiDeviceInfo::PROPERTY_VERSION()
	{
		return getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_VERSION",
			"Ljava/lang/String;"
		);
	}
	inline jint MidiDeviceInfo::TYPE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo",
			"TYPE_BLUETOOTH"
		);
	}
	inline jint MidiDeviceInfo::TYPE_USB()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo",
			"TYPE_USB"
		);
	}
	inline jint MidiDeviceInfo::TYPE_VIRTUAL()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo",
			"TYPE_VIRTUAL"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MidiDeviceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MidiDeviceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MidiDeviceInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint MidiDeviceInfo::getInputPortCount() const
	{
		return callMethod<jint>(
			"getInputPortCount",
			"()I"
		);
	}
	inline jint MidiDeviceInfo::getOutputPortCount() const
	{
		return callMethod<jint>(
			"getOutputPortCount",
			"()I"
		);
	}
	inline JArray MidiDeviceInfo::getPorts() const
	{
		return callObjectMethod(
			"getPorts",
			"()[Landroid/media/midi/MidiDeviceInfo$PortInfo;"
		);
	}
	inline android::os::Bundle MidiDeviceInfo::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint MidiDeviceInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint MidiDeviceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean MidiDeviceInfo::isPrivate() const
	{
		return callMethod<jboolean>(
			"isPrivate",
			"()Z"
		);
	}
	inline JString MidiDeviceInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MidiDeviceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
