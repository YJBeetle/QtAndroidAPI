#pragma once

#include "./SyncStats.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./SyncResult.def.hpp"

namespace android::content
{
	// Fields
	inline android::content::SyncResult SyncResult::ALREADY_IN_PROGRESS()
	{
		return getStaticObjectField(
			"android.content.SyncResult",
			"ALREADY_IN_PROGRESS",
			"Landroid/content/SyncResult;"
		);
	}
	inline JObject SyncResult::CREATOR()
	{
		return getStaticObjectField(
			"android.content.SyncResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jboolean SyncResult::databaseError()
	{
		return getField<jboolean>(
			"databaseError"
		);
	}
	inline jlong SyncResult::delayUntil()
	{
		return getField<jlong>(
			"delayUntil"
		);
	}
	inline jboolean SyncResult::fullSyncRequested()
	{
		return getField<jboolean>(
			"fullSyncRequested"
		);
	}
	inline jboolean SyncResult::moreRecordsToGet()
	{
		return getField<jboolean>(
			"moreRecordsToGet"
		);
	}
	inline jboolean SyncResult::partialSyncUnavailable()
	{
		return getField<jboolean>(
			"partialSyncUnavailable"
		);
	}
	inline android::content::SyncStats SyncResult::stats()
	{
		return getObjectField(
			"stats",
			"Landroid/content/SyncStats;"
		);
	}
	inline jboolean SyncResult::syncAlreadyInProgress()
	{
		return getField<jboolean>(
			"syncAlreadyInProgress"
		);
	}
	inline jboolean SyncResult::tooManyDeletions()
	{
		return getField<jboolean>(
			"tooManyDeletions"
		);
	}
	inline jboolean SyncResult::tooManyRetries()
	{
		return getField<jboolean>(
			"tooManyRetries"
		);
	}
	
	// Constructors
	inline SyncResult::SyncResult()
		: JObject(
			"android.content.SyncResult",
			"()V"
		) {}
	
	// Methods
	inline void SyncResult::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jint SyncResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SyncResult::hasError() const
	{
		return callMethod<jboolean>(
			"hasError",
			"()Z"
		);
	}
	inline jboolean SyncResult::hasHardError() const
	{
		return callMethod<jboolean>(
			"hasHardError",
			"()Z"
		);
	}
	inline jboolean SyncResult::hasSoftError() const
	{
		return callMethod<jboolean>(
			"hasSoftError",
			"()Z"
		);
	}
	inline jboolean SyncResult::madeSomeProgress() const
	{
		return callMethod<jboolean>(
			"madeSomeProgress",
			"()Z"
		);
	}
	inline JString SyncResult::toDebugString() const
	{
		return callObjectMethod(
			"toDebugString",
			"()Ljava/lang/String;"
		);
	}
	inline JString SyncResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SyncResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

