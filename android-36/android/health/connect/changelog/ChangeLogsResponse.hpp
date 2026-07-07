#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./ChangeLogsResponse.def.hpp"

namespace android::health::connect::changelog
{
	// Fields
	inline JObject ChangeLogsResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.changelog.ChangeLogsResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ChangeLogsResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject ChangeLogsResponse::getDeletedLogs() const
	{
		return callObjectMethod(
			"getDeletedLogs",
			"()Ljava/util/List;"
		);
	}
	inline JString ChangeLogsResponse::getNextChangesToken() const
	{
		return callObjectMethod(
			"getNextChangesToken",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ChangeLogsResponse::getUpsertedRecords() const
	{
		return callObjectMethod(
			"getUpsertedRecords",
			"()Ljava/util/List;"
		);
	}
	inline jboolean ChangeLogsResponse::hasMorePages() const
	{
		return callMethod<jboolean>(
			"hasMorePages",
			"()Z"
		);
	}
	inline void ChangeLogsResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::health::connect::changelog

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::changelog;
#endif
