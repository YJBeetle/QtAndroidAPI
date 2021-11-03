#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./SyncStats.hpp"

namespace android::content
{
	// Fields
	JObject SyncStats::CREATOR()
	{
		return getStaticObjectField(
			"android.content.SyncStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong SyncStats::numAuthExceptions()
	{
		return getField<jlong>(
			"numAuthExceptions"
		);
	}
	jlong SyncStats::numConflictDetectedExceptions()
	{
		return getField<jlong>(
			"numConflictDetectedExceptions"
		);
	}
	jlong SyncStats::numDeletes()
	{
		return getField<jlong>(
			"numDeletes"
		);
	}
	jlong SyncStats::numEntries()
	{
		return getField<jlong>(
			"numEntries"
		);
	}
	jlong SyncStats::numInserts()
	{
		return getField<jlong>(
			"numInserts"
		);
	}
	jlong SyncStats::numIoExceptions()
	{
		return getField<jlong>(
			"numIoExceptions"
		);
	}
	jlong SyncStats::numParseExceptions()
	{
		return getField<jlong>(
			"numParseExceptions"
		);
	}
	jlong SyncStats::numSkippedEntries()
	{
		return getField<jlong>(
			"numSkippedEntries"
		);
	}
	jlong SyncStats::numUpdates()
	{
		return getField<jlong>(
			"numUpdates"
		);
	}
	
	// QJniObject forward
	SyncStats::SyncStats(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SyncStats::SyncStats()
		: JObject(
			"android.content.SyncStats",
			"()V"
		) {}
	SyncStats::SyncStats(android::os::Parcel arg0)
		: JObject(
			"android.content.SyncStats",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	void SyncStats::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint SyncStats::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString SyncStats::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SyncStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

