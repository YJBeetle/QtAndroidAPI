#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./NdefRecord.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NdefMessage.def.hpp"

namespace android::nfc
{
	// Fields
	inline JObject NdefMessage::CREATOR()
	{
		return getStaticObjectField(
			"android.nfc.NdefMessage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline NdefMessage::NdefMessage(JByteArray arg0)
		: JObject(
			"android.nfc.NdefMessage",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline NdefMessage::NdefMessage(JArray arg0)
		: JObject(
			"android.nfc.NdefMessage",
			"([Landroid/nfc/NdefRecord;)V",
			arg0.object<jarray>()
		) {}
	inline NdefMessage::NdefMessage(android::nfc::NdefRecord arg0, JArray arg1)
		: JObject(
			"android.nfc.NdefMessage",
			"(Landroid/nfc/NdefRecord;[Landroid/nfc/NdefRecord;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline jint NdefMessage::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NdefMessage::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint NdefMessage::getByteArrayLength() const
	{
		return callMethod<jint>(
			"getByteArrayLength",
			"()I"
		);
	}
	inline JArray NdefMessage::getRecords() const
	{
		return callObjectMethod(
			"getRecords",
			"()[Landroid/nfc/NdefRecord;"
		);
	}
	inline jint NdefMessage::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JByteArray NdefMessage::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	inline JString NdefMessage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NdefMessage::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc

// Base class headers

