#pragma once

#include "../../os/Parcel.def.hpp"
#include "./GetSchemaResponse.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject GetSchemaResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.GetSchemaResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GetSchemaResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject GetSchemaResponse::getPubliclyVisibleSchemas() const
	{
		return callObjectMethod(
			"getPubliclyVisibleSchemas",
			"()Ljava/util/Map;"
		);
	}
	inline JObject GetSchemaResponse::getRequiredPermissionsForSchemaTypeVisibility() const
	{
		return callObjectMethod(
			"getRequiredPermissionsForSchemaTypeVisibility",
			"()Ljava/util/Map;"
		);
	}
	inline JObject GetSchemaResponse::getSchemaTypesNotDisplayedBySystem() const
	{
		return callObjectMethod(
			"getSchemaTypesNotDisplayedBySystem",
			"()Ljava/util/Set;"
		);
	}
	inline JObject GetSchemaResponse::getSchemaTypesVisibleToConfigs() const
	{
		return callObjectMethod(
			"getSchemaTypesVisibleToConfigs",
			"()Ljava/util/Map;"
		);
	}
	inline JObject GetSchemaResponse::getSchemaTypesVisibleToPackages() const
	{
		return callObjectMethod(
			"getSchemaTypesVisibleToPackages",
			"()Ljava/util/Map;"
		);
	}
	inline JObject GetSchemaResponse::getSchemas() const
	{
		return callObjectMethod(
			"getSchemas",
			"()Ljava/util/Set;"
		);
	}
	inline jint GetSchemaResponse::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline void GetSchemaResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
