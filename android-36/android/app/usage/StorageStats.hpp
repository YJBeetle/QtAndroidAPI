#pragma once

#include "../../os/Parcel.def.hpp"
#include "./StorageStats.def.hpp"

namespace android::app::usage
{
	// Fields
	inline jint StorageStats::APP_DATA_TYPE_FILE_TYPE_APK()
	{
		return getStaticField<jint>(
			"android.app.usage.StorageStats",
			"APP_DATA_TYPE_FILE_TYPE_APK"
		);
	}
	inline jint StorageStats::APP_DATA_TYPE_FILE_TYPE_CURRENT_PROFILE()
	{
		return getStaticField<jint>(
			"android.app.usage.StorageStats",
			"APP_DATA_TYPE_FILE_TYPE_CURRENT_PROFILE"
		);
	}
	inline jint StorageStats::APP_DATA_TYPE_FILE_TYPE_DEXOPT_ARTIFACT()
	{
		return getStaticField<jint>(
			"android.app.usage.StorageStats",
			"APP_DATA_TYPE_FILE_TYPE_DEXOPT_ARTIFACT"
		);
	}
	inline jint StorageStats::APP_DATA_TYPE_FILE_TYPE_DM()
	{
		return getStaticField<jint>(
			"android.app.usage.StorageStats",
			"APP_DATA_TYPE_FILE_TYPE_DM"
		);
	}
	inline jint StorageStats::APP_DATA_TYPE_FILE_TYPE_REFERENCE_PROFILE()
	{
		return getStaticField<jint>(
			"android.app.usage.StorageStats",
			"APP_DATA_TYPE_FILE_TYPE_REFERENCE_PROFILE"
		);
	}
	inline jint StorageStats::APP_DATA_TYPE_LIB()
	{
		return getStaticField<jint>(
			"android.app.usage.StorageStats",
			"APP_DATA_TYPE_LIB"
		);
	}
	inline JObject StorageStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.StorageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint StorageStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong StorageStats::getAppBytes() const
	{
		return callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	inline jlong StorageStats::getAppBytesByDataType(jint arg0) const
	{
		return callMethod<jlong>(
			"getAppBytesByDataType",
			"(I)J",
			arg0
		);
	}
	inline jlong StorageStats::getCacheBytes() const
	{
		return callMethod<jlong>(
			"getCacheBytes",
			"()J"
		);
	}
	inline jlong StorageStats::getDataBytes() const
	{
		return callMethod<jlong>(
			"getDataBytes",
			"()J"
		);
	}
	inline jlong StorageStats::getExternalCacheBytes() const
	{
		return callMethod<jlong>(
			"getExternalCacheBytes",
			"()J"
		);
	}
	inline void StorageStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
