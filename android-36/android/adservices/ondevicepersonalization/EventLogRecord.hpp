#pragma once

#include "./RequestLogRecord.def.hpp"
#include "../../content/ContentValues.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./EventLogRecord.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline JObject EventLogRecord::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.ondevicepersonalization.EventLogRecord",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint EventLogRecord::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean EventLogRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::content::ContentValues EventLogRecord::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/content/ContentValues;"
		);
	}
	inline android::adservices::ondevicepersonalization::RequestLogRecord EventLogRecord::getRequestLogRecord() const
	{
		return callObjectMethod(
			"getRequestLogRecord",
			"()Landroid/adservices/ondevicepersonalization/RequestLogRecord;"
		);
	}
	inline jint EventLogRecord::getRowIndex() const
	{
		return callMethod<jint>(
			"getRowIndex",
			"()I"
		);
	}
	inline java::time::Instant EventLogRecord::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint EventLogRecord::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint EventLogRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void EventLogRecord::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
