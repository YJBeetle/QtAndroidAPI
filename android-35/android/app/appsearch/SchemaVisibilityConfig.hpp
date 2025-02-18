#pragma once

#include "./PackageIdentifier.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./SchemaVisibilityConfig.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject SchemaVisibilityConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.SchemaVisibilityConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SchemaVisibilityConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SchemaVisibilityConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject SchemaVisibilityConfig::getAllowedPackages() const
	{
		return callObjectMethod(
			"getAllowedPackages",
			"()Ljava/util/List;"
		);
	}
	inline android::app::appsearch::PackageIdentifier SchemaVisibilityConfig::getPubliclyVisibleTargetPackage() const
	{
		return callObjectMethod(
			"getPubliclyVisibleTargetPackage",
			"()Landroid/app/appsearch/PackageIdentifier;"
		);
	}
	inline JObject SchemaVisibilityConfig::getRequiredPermissions() const
	{
		return callObjectMethod(
			"getRequiredPermissions",
			"()Ljava/util/Set;"
		);
	}
	inline jint SchemaVisibilityConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void SchemaVisibilityConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
