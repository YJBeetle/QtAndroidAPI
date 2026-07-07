#pragma once

#include "../../JByteArray.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NdefRecord.def.hpp"

namespace android::nfc
{
	// Fields
	inline JObject NdefRecord::CREATOR()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JByteArray NdefRecord::RTD_ALTERNATIVE_CARRIER()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_ALTERNATIVE_CARRIER",
			"[B"
		);
	}
	inline JByteArray NdefRecord::RTD_HANDOVER_CARRIER()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_CARRIER",
			"[B"
		);
	}
	inline JByteArray NdefRecord::RTD_HANDOVER_REQUEST()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_REQUEST",
			"[B"
		);
	}
	inline JByteArray NdefRecord::RTD_HANDOVER_SELECT()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_SELECT",
			"[B"
		);
	}
	inline JByteArray NdefRecord::RTD_SMART_POSTER()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_SMART_POSTER",
			"[B"
		);
	}
	inline JByteArray NdefRecord::RTD_TEXT()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_TEXT",
			"[B"
		);
	}
	inline JByteArray NdefRecord::RTD_URI()
	{
		return getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_URI",
			"[B"
		);
	}
	inline jshort NdefRecord::TNF_ABSOLUTE_URI()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_ABSOLUTE_URI"
		);
	}
	inline jshort NdefRecord::TNF_EMPTY()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_EMPTY"
		);
	}
	inline jshort NdefRecord::TNF_EXTERNAL_TYPE()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_EXTERNAL_TYPE"
		);
	}
	inline jshort NdefRecord::TNF_MIME_MEDIA()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_MIME_MEDIA"
		);
	}
	inline jshort NdefRecord::TNF_UNCHANGED()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_UNCHANGED"
		);
	}
	inline jshort NdefRecord::TNF_UNKNOWN()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_UNKNOWN"
		);
	}
	inline jshort NdefRecord::TNF_WELL_KNOWN()
	{
		return getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_WELL_KNOWN"
		);
	}
	
	// Constructors
	inline NdefRecord::NdefRecord(JByteArray arg0)
		: JObject(
			"android.nfc.NdefRecord",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline NdefRecord::NdefRecord(jshort arg0, JByteArray arg1, JByteArray arg2, JByteArray arg3)
		: JObject(
			"android.nfc.NdefRecord",
			"(S[B[B[B)V",
			arg0,
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>(),
			arg3.object<jbyteArray>()
		) {}
	
	// Methods
	inline android::nfc::NdefRecord NdefRecord::createApplicationRecord(JString arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createApplicationRecord",
			"(Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0.object<jstring>()
		);
	}
	inline android::nfc::NdefRecord NdefRecord::createExternal(JString arg0, JString arg1, JByteArray arg2)
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
	inline android::nfc::NdefRecord NdefRecord::createMime(JString arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createMime",
			"(Ljava/lang/String;[B)Landroid/nfc/NdefRecord;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline android::nfc::NdefRecord NdefRecord::createTextRecord(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createTextRecord",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::nfc::NdefRecord NdefRecord::createUri(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createUri",
			"(Landroid/net/Uri;)Landroid/nfc/NdefRecord;",
			arg0.object()
		);
	}
	inline android::nfc::NdefRecord NdefRecord::createUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createUri",
			"(Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0.object<jstring>()
		);
	}
	inline jint NdefRecord::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NdefRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray NdefRecord::getId() const
	{
		return callObjectMethod(
			"getId",
			"()[B"
		);
	}
	inline JByteArray NdefRecord::getPayload() const
	{
		return callObjectMethod(
			"getPayload",
			"()[B"
		);
	}
	inline jshort NdefRecord::getTnf() const
	{
		return callMethod<jshort>(
			"getTnf",
			"()S"
		);
	}
	inline JByteArray NdefRecord::getType() const
	{
		return callObjectMethod(
			"getType",
			"()[B"
		);
	}
	inline jint NdefRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JByteArray NdefRecord::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	inline JString NdefRecord::toMimeType() const
	{
		return callObjectMethod(
			"toMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline JString NdefRecord::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri NdefRecord::toUri() const
	{
		return callObjectMethod(
			"toUri",
			"()Landroid/net/Uri;"
		);
	}
	inline void NdefRecord::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc;
#endif
