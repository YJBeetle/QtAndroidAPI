#pragma once

#include "../../os/Parcel.def.hpp"
#include "./StorageInfo.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject StorageInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.StorageInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint StorageInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint StorageInfo::getAliveDocumentsCount() const
	{
		return callMethod<jint>(
			"getAliveDocumentsCount",
			"()I"
		);
	}
	inline jint StorageInfo::getAliveNamespacesCount() const
	{
		return callMethod<jint>(
			"getAliveNamespacesCount",
			"()I"
		);
	}
	inline jlong StorageInfo::getSizeBytes() const
	{
		return callMethod<jlong>(
			"getSizeBytes",
			"()J"
		);
	}
	inline void StorageInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
