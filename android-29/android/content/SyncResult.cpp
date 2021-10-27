#include "./SyncStats.hpp"
#include "../os/Parcel.hpp"
#include "./SyncResult.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject SyncResult::ALREADY_IN_PROGRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncResult",
			"ALREADY_IN_PROGRESS",
			"Landroid/content/SyncResult;"
		);
	}
	QAndroidJniObject SyncResult::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jboolean SyncResult::databaseError()
	{
		return __thiz.getField<jboolean>(
			"databaseError"
		);
	}
	jlong SyncResult::delayUntil()
	{
		return __thiz.getField<jlong>(
			"delayUntil"
		);
	}
	jboolean SyncResult::fullSyncRequested()
	{
		return __thiz.getField<jboolean>(
			"fullSyncRequested"
		);
	}
	jboolean SyncResult::moreRecordsToGet()
	{
		return __thiz.getField<jboolean>(
			"moreRecordsToGet"
		);
	}
	jboolean SyncResult::partialSyncUnavailable()
	{
		return __thiz.getField<jboolean>(
			"partialSyncUnavailable"
		);
	}
	QAndroidJniObject SyncResult::stats()
	{
		return __thiz.getObjectField(
			"stats",
			"Landroid/content/SyncStats;"
		);
	}
	jboolean SyncResult::syncAlreadyInProgress()
	{
		return __thiz.getField<jboolean>(
			"syncAlreadyInProgress"
		);
	}
	jboolean SyncResult::tooManyDeletions()
	{
		return __thiz.getField<jboolean>(
			"tooManyDeletions"
		);
	}
	jboolean SyncResult::tooManyRetries()
	{
		return __thiz.getField<jboolean>(
			"tooManyRetries"
		);
	}
	
	SyncResult::SyncResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncResult::SyncResult()
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncResult",
			"()V"
		);
	}
	
	// Methods
	void SyncResult::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint SyncResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SyncResult::hasError()
	{
		return __thiz.callMethod<jboolean>(
			"hasError",
			"()Z"
		);
	}
	jboolean SyncResult::hasHardError()
	{
		return __thiz.callMethod<jboolean>(
			"hasHardError",
			"()Z"
		);
	}
	jboolean SyncResult::hasSoftError()
	{
		return __thiz.callMethod<jboolean>(
			"hasSoftError",
			"()Z"
		);
	}
	jboolean SyncResult::madeSomeProgress()
	{
		return __thiz.callMethod<jboolean>(
			"madeSomeProgress",
			"()Z"
		);
	}
	jstring SyncResult::toDebugString()
	{
		return __thiz.callObjectMethod(
			"toDebugString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SyncResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SyncResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

