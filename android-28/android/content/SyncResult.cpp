#include "./SyncStats.hpp"
#include "../os/Parcel.hpp"
#include "./SyncResult.hpp"

namespace android::content
{
	// Fields
	android::content::SyncResult SyncResult::ALREADY_IN_PROGRESS()
	{
		return getStaticObjectField(
			"android.content.SyncResult",
			"ALREADY_IN_PROGRESS",
			"Landroid/content/SyncResult;"
		);
	}
	__JniBaseClass SyncResult::CREATOR()
	{
		return getStaticObjectField(
			"android.content.SyncResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jboolean SyncResult::databaseError()
	{
		return getField<jboolean>(
			"databaseError"
		);
	}
	jlong SyncResult::delayUntil()
	{
		return getField<jlong>(
			"delayUntil"
		);
	}
	jboolean SyncResult::fullSyncRequested()
	{
		return getField<jboolean>(
			"fullSyncRequested"
		);
	}
	jboolean SyncResult::moreRecordsToGet()
	{
		return getField<jboolean>(
			"moreRecordsToGet"
		);
	}
	jboolean SyncResult::partialSyncUnavailable()
	{
		return getField<jboolean>(
			"partialSyncUnavailable"
		);
	}
	android::content::SyncStats SyncResult::stats()
	{
		return getObjectField(
			"stats",
			"Landroid/content/SyncStats;"
		);
	}
	jboolean SyncResult::syncAlreadyInProgress()
	{
		return getField<jboolean>(
			"syncAlreadyInProgress"
		);
	}
	jboolean SyncResult::tooManyDeletions()
	{
		return getField<jboolean>(
			"tooManyDeletions"
		);
	}
	jboolean SyncResult::tooManyRetries()
	{
		return getField<jboolean>(
			"tooManyRetries"
		);
	}
	
	// QJniObject forward
	SyncResult::SyncResult(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SyncResult::SyncResult()
		: __JniBaseClass(
			"android.content.SyncResult",
			"()V"
		) {}
	
	// Methods
	void SyncResult::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint SyncResult::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SyncResult::hasError()
	{
		return callMethod<jboolean>(
			"hasError",
			"()Z"
		);
	}
	jboolean SyncResult::hasHardError()
	{
		return callMethod<jboolean>(
			"hasHardError",
			"()Z"
		);
	}
	jboolean SyncResult::hasSoftError()
	{
		return callMethod<jboolean>(
			"hasSoftError",
			"()Z"
		);
	}
	jboolean SyncResult::madeSomeProgress()
	{
		return callMethod<jboolean>(
			"madeSomeProgress",
			"()Z"
		);
	}
	jstring SyncResult::toDebugString()
	{
		return callObjectMethod(
			"toDebugString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SyncResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SyncResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

