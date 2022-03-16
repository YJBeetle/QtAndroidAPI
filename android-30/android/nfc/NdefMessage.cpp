#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./NdefRecord.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NdefMessage.hpp"

namespace android::nfc
{
	// Fields
	JObject NdefMessage::CREATOR()
	{
		return getStaticObjectField(
			"android.nfc.NdefMessage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	NdefMessage::NdefMessage(JByteArray arg0)
		: JObject(
			"android.nfc.NdefMessage",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	NdefMessage::NdefMessage(JArray arg0)
		: JObject(
			"android.nfc.NdefMessage",
			"([Landroid/nfc/NdefRecord;)V",
			arg0.object<jarray>()
		) {}
	NdefMessage::NdefMessage(android::nfc::NdefRecord arg0, JArray arg1)
		: JObject(
			"android.nfc.NdefMessage",
			"(Landroid/nfc/NdefRecord;[Landroid/nfc/NdefRecord;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	jint NdefMessage::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NdefMessage::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint NdefMessage::getByteArrayLength() const
	{
		return callMethod<jint>(
			"getByteArrayLength",
			"()I"
		);
	}
	JArray NdefMessage::getRecords() const
	{
		return callObjectMethod(
			"getRecords",
			"()[Landroid/nfc/NdefRecord;"
		);
	}
	jint NdefMessage::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JByteArray NdefMessage::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	JString NdefMessage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NdefMessage::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc

