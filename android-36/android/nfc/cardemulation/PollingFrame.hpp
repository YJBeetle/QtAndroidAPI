#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./PollingFrame.def.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	inline JObject PollingFrame::CREATOR()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.PollingFrame",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PollingFrame::POLLING_LOOP_TYPE_A()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.PollingFrame",
			"POLLING_LOOP_TYPE_A"
		);
	}
	inline jint PollingFrame::POLLING_LOOP_TYPE_B()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.PollingFrame",
			"POLLING_LOOP_TYPE_B"
		);
	}
	inline jint PollingFrame::POLLING_LOOP_TYPE_F()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.PollingFrame",
			"POLLING_LOOP_TYPE_F"
		);
	}
	inline jint PollingFrame::POLLING_LOOP_TYPE_OFF()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.PollingFrame",
			"POLLING_LOOP_TYPE_OFF"
		);
	}
	inline jint PollingFrame::POLLING_LOOP_TYPE_ON()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.PollingFrame",
			"POLLING_LOOP_TYPE_ON"
		);
	}
	inline jint PollingFrame::POLLING_LOOP_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.PollingFrame",
			"POLLING_LOOP_TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PollingFrame::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JByteArray PollingFrame::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline jlong PollingFrame::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	inline jboolean PollingFrame::getTriggeredAutoTransact() const
	{
		return callMethod<jboolean>(
			"getTriggeredAutoTransact",
			"()Z"
		);
	}
	inline jint PollingFrame::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint PollingFrame::getVendorSpecificGain() const
	{
		return callMethod<jint>(
			"getVendorSpecificGain",
			"()I"
		);
	}
	inline JString PollingFrame::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PollingFrame::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc::cardemulation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc::cardemulation;
#endif
