#include "../../JByteArray.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NdefRecord.hpp"

namespace android::nfc
{
	// Fields
	JObject NdefRecord::CREATOR()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JByteArray NdefRecord::RTD_ALTERNATIVE_CARRIER()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_ALTERNATIVE_CARRIER",
			"[B"
		);
	}
	JByteArray NdefRecord::RTD_HANDOVER_CARRIER()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_CARRIER",
			"[B"
		);
	}
	JByteArray NdefRecord::RTD_HANDOVER_REQUEST()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_REQUEST",
			"[B"
		);
	}
	JByteArray NdefRecord::RTD_HANDOVER_SELECT()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_SELECT",
			"[B"
		);
	}
	JByteArray NdefRecord::RTD_SMART_POSTER()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_SMART_POSTER",
			"[B"
		);
	}
	JByteArray NdefRecord::RTD_TEXT()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_TEXT",
			"[B"
		);
	}
	JByteArray NdefRecord::RTD_URI()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_URI",
			"[B"
		);
	}
	jshort NdefRecord::TNF_ABSOLUTE_URI()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_ABSOLUTE_URI"
		);
	}
	jshort NdefRecord::TNF_EMPTY()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_EMPTY"
		);
	}
	jshort NdefRecord::TNF_EXTERNAL_TYPE()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_EXTERNAL_TYPE"
		);
	}
	jshort NdefRecord::TNF_MIME_MEDIA()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_MIME_MEDIA"
		);
	}
	jshort NdefRecord::TNF_UNCHANGED()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_UNCHANGED"
		);
	}
	jshort NdefRecord::TNF_UNKNOWN()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_UNKNOWN"
		);
	}
	jshort NdefRecord::TNF_WELL_KNOWN()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_WELL_KNOWN"
		);
	}
	
	// QJniObject forward
	NdefRecord::NdefRecord(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NdefRecord::NdefRecord(JByteArray arg0)
		: JObject(
			"android.nfc.NdefRecord",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	NdefRecord::NdefRecord(jshort arg0, JByteArray arg1, JByteArray arg2, JByteArray arg3)
		: JObject(
			"android.nfc.NdefRecord",
			"(S[B[B[B)V",
			arg0,
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>(),
			arg3.object<jbyteArray>()
		) {}
	
	// Methods
	android::nfc::NdefRecord NdefRecord::createApplicationRecord(JString arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createApplicationRecord",
			"(Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0.object<jstring>()
		);
	}
	android::nfc::NdefRecord NdefRecord::createExternal(JString arg0, JString arg1, JByteArray arg2)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createExternal",
			"(Ljava/lang/String;Ljava/lang/String;[B)Landroid/nfc/NdefRecord;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>()
		);
	}
	android::nfc::NdefRecord NdefRecord::createMime(JString arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createMime",
			"(Ljava/lang/String;[B)Landroid/nfc/NdefRecord;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	android::nfc::NdefRecord NdefRecord::createTextRecord(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createTextRecord",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::nfc::NdefRecord NdefRecord::createUri(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createUri",
			"(Landroid/net/Uri;)Landroid/nfc/NdefRecord;",
			arg0.object()
		);
	}
	android::nfc::NdefRecord NdefRecord::createUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createUri",
			"(Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0.object<jstring>()
		);
	}
	jint NdefRecord::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NdefRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray NdefRecord::getId() const
	{
		return callObjectMethod(
			"getId",
			"()[B"
		);
	}
	JByteArray NdefRecord::getPayload() const
	{
		return callObjectMethod(
			"getPayload",
			"()[B"
		);
	}
	jshort NdefRecord::getTnf() const
	{
		return callMethod<jshort>(
			"getTnf",
			"()S"
		);
	}
	JByteArray NdefRecord::getType() const
	{
		return callObjectMethod(
			"getType",
			"()[B"
		);
	}
	jint NdefRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JByteArray NdefRecord::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	JString NdefRecord::toMimeType() const
	{
		return callObjectMethod(
			"toMimeType",
			"()Ljava/lang/String;"
		);
	}
	JString NdefRecord::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri NdefRecord::toUri() const
	{
		return callObjectMethod(
			"toUri",
			"()Landroid/net/Uri;"
		);
	}
	void NdefRecord::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc

