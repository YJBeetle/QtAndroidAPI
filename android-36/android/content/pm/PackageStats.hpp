#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PackageStats.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageStats::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong PackageStats::cacheSize()
	{
		return getField<jlong>(
			"cacheSize"
		);
	}
	inline jlong PackageStats::codeSize()
	{
		return getField<jlong>(
			"codeSize"
		);
	}
	inline jlong PackageStats::dataSize()
	{
		return getField<jlong>(
			"dataSize"
		);
	}
	inline jlong PackageStats::externalCacheSize()
	{
		return getField<jlong>(
			"externalCacheSize"
		);
	}
	inline jlong PackageStats::externalCodeSize()
	{
		return getField<jlong>(
			"externalCodeSize"
		);
	}
	inline jlong PackageStats::externalDataSize()
	{
		return getField<jlong>(
			"externalDataSize"
		);
	}
	inline jlong PackageStats::externalMediaSize()
	{
		return getField<jlong>(
			"externalMediaSize"
		);
	}
	inline jlong PackageStats::externalObbSize()
	{
		return getField<jlong>(
			"externalObbSize"
		);
	}
	inline JString PackageStats::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline PackageStats::PackageStats(android::content::pm::PackageStats &arg0)
		: JObject(
			"android.content.pm.PackageStats",
			"(Landroid/content/pm/PackageStats;)V",
			arg0.object()
		) {}
	inline PackageStats::PackageStats(android::os::Parcel arg0)
		: JObject(
			"android.content.pm.PackageStats",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline PackageStats::PackageStats(JString arg0)
		: JObject(
			"android.content.pm.PackageStats",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint PackageStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PackageStats::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PackageStats::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PackageStats::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PackageStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
