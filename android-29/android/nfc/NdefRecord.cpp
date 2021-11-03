#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
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
	jbyteArray NdefRecord::RTD_ALTERNATIVE_CARRIER()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_ALTERNATIVE_CARRIER",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_HANDOVER_CARRIER()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_CARRIER",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_HANDOVER_REQUEST()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_REQUEST",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_HANDOVER_SELECT()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_SELECT",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_SMART_POSTER()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_SMART_POSTER",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_TEXT()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_TEXT",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_URI()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_URI",
			"[B"
		).object<jbyteArray>();
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
	
	// QAndroidJniObject forward
	NdefRecord::NdefRecord(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NdefRecord::NdefRecord(jbyteArray arg0)
		: JObject(
			"android.nfc.NdefRecord",
			"([B)V",
			arg0
		) {}
	NdefRecord::NdefRecord(jshort arg0, jbyteArray arg1, jbyteArray arg2, jbyteArray arg3)
		: JObject(
			"android.nfc.NdefRecord",
			"(S[B[B[B)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	android::nfc::NdefRecord NdefRecord::createApplicationRecord(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createApplicationRecord",
			"(Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0
		);
	}
	android::nfc::NdefRecord NdefRecord::createExternal(jstring arg0, jstring arg1, jbyteArray arg2)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createExternal",
			"(Ljava/lang/String;Ljava/lang/String;[B)Landroid/nfc/NdefRecord;",
			arg0,
			arg1,
			arg2
		);
	}
	android::nfc::NdefRecord NdefRecord::createMime(jstring arg0, jbyteArray arg1)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createMime",
			"(Ljava/lang/String;[B)Landroid/nfc/NdefRecord;",
			arg0,
			arg1
		);
	}
	android::nfc::NdefRecord NdefRecord::createTextRecord(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createTextRecord",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0,
			arg1
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
	android::nfc::NdefRecord NdefRecord::createUri(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createUri",
			"(Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0
		);
	}
	jint NdefRecord::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NdefRecord::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray NdefRecord::getId()
	{
		return callObjectMethod(
			"getId",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::getPayload()
	{
		return callObjectMethod(
			"getPayload",
			"()[B"
		).object<jbyteArray>();
	}
	jshort NdefRecord::getTnf()
	{
		return callMethod<jshort>(
			"getTnf",
			"()S"
		);
	}
	jbyteArray NdefRecord::getType()
	{
		return callObjectMethod(
			"getType",
			"()[B"
		).object<jbyteArray>();
	}
	jint NdefRecord::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray NdefRecord::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring NdefRecord::toMimeType()
	{
		return callObjectMethod(
			"toMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NdefRecord::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri NdefRecord::toUri()
	{
		return callObjectMethod(
			"toUri",
			"()Landroid/net/Uri;"
		);
	}
	void NdefRecord::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc

