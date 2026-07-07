#pragma once

#include "../../os/Parcel.def.hpp"
#include "./SetSchemaResponse.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject SetSchemaResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.SetSchemaResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SetSchemaResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject SetSchemaResponse::getDeletedTypes() const
	{
		return callObjectMethod(
			"getDeletedTypes",
			"()Ljava/util/Set;"
		);
	}
	inline JObject SetSchemaResponse::getIncompatibleTypes() const
	{
		return callObjectMethod(
			"getIncompatibleTypes",
			"()Ljava/util/Set;"
		);
	}
	inline JObject SetSchemaResponse::getMigratedTypes() const
	{
		return callObjectMethod(
			"getMigratedTypes",
			"()Ljava/util/Set;"
		);
	}
	inline JObject SetSchemaResponse::getMigrationFailures() const
	{
		return callObjectMethod(
			"getMigrationFailures",
			"()Ljava/util/List;"
		);
	}
	inline void SetSchemaResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
