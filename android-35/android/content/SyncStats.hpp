#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./SyncStats.def.hpp"

namespace android::content
{
	// Fields
	inline JObject SyncStats::CREATOR()
	{
		return getStaticObjectField(
			"android.content.SyncStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong SyncStats::numAuthExceptions()
	{
		return getField<jlong>(
			"numAuthExceptions"
		);
	}
	inline jlong SyncStats::numConflictDetectedExceptions()
	{
		return getField<jlong>(
			"numConflictDetectedExceptions"
		);
	}
	inline jlong SyncStats::numDeletes()
	{
		return getField<jlong>(
			"numDeletes"
		);
	}
	inline jlong SyncStats::numEntries()
	{
		return getField<jlong>(
			"numEntries"
		);
	}
	inline jlong SyncStats::numInserts()
	{
		return getField<jlong>(
			"numInserts"
		);
	}
	inline jlong SyncStats::numIoExceptions()
	{
		return getField<jlong>(
			"numIoExceptions"
		);
	}
	inline jlong SyncStats::numParseExceptions()
	{
		return getField<jlong>(
			"numParseExceptions"
		);
	}
	inline jlong SyncStats::numSkippedEntries()
	{
		return getField<jlong>(
			"numSkippedEntries"
		);
	}
	inline jlong SyncStats::numUpdates()
	{
		return getField<jlong>(
			"numUpdates"
		);
	}
	
	// Constructors
	inline SyncStats::SyncStats()
		: JObject(
			"android.content.SyncStats",
			"()V"
		) {}
	inline SyncStats::SyncStats(android::os::Parcel arg0)
		: JObject(
			"android.content.SyncStats",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void SyncStats::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jint SyncStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SyncStats::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SyncStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
