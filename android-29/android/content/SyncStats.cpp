#include "../os/Parcel.hpp"
#include "./SyncStats.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject SyncStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong SyncStats::numAuthExceptions()
	{
		return __thiz.getField<jlong>(
			"numAuthExceptions"
		);
	}
	jlong SyncStats::numConflictDetectedExceptions()
	{
		return __thiz.getField<jlong>(
			"numConflictDetectedExceptions"
		);
	}
	jlong SyncStats::numDeletes()
	{
		return __thiz.getField<jlong>(
			"numDeletes"
		);
	}
	jlong SyncStats::numEntries()
	{
		return __thiz.getField<jlong>(
			"numEntries"
		);
	}
	jlong SyncStats::numInserts()
	{
		return __thiz.getField<jlong>(
			"numInserts"
		);
	}
	jlong SyncStats::numIoExceptions()
	{
		return __thiz.getField<jlong>(
			"numIoExceptions"
		);
	}
	jlong SyncStats::numParseExceptions()
	{
		return __thiz.getField<jlong>(
			"numParseExceptions"
		);
	}
	jlong SyncStats::numSkippedEntries()
	{
		return __thiz.getField<jlong>(
			"numSkippedEntries"
		);
	}
	jlong SyncStats::numUpdates()
	{
		return __thiz.getField<jlong>(
			"numUpdates"
		);
	}
	
	SyncStats::SyncStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncStats::SyncStats()
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncStats",
			"()V"
		);
	}
	SyncStats::SyncStats(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncStats",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void SyncStats::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint SyncStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring SyncStats::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SyncStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

