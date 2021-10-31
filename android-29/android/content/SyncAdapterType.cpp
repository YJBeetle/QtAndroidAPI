#include "../os/Parcel.hpp"
#include "./SyncAdapterType.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject SyncAdapterType::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncAdapterType",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring SyncAdapterType::accountType()
	{
		return getObjectField(
			"accountType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SyncAdapterType::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SyncAdapterType::isKey()
	{
		return getField<jboolean>(
			"isKey"
		);
	}
	
	// QAndroidJniObject forward
	SyncAdapterType::SyncAdapterType(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SyncAdapterType::SyncAdapterType(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.content.SyncAdapterType",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	SyncAdapterType::SyncAdapterType(jstring arg0, jstring arg1, jboolean arg2, jboolean arg3)
		: __JniBaseClass(
			"android.content.SyncAdapterType",
			"(Ljava/lang/String;Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	QAndroidJniObject SyncAdapterType::newKey(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.SyncAdapterType",
			"newKey",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SyncAdapterType;",
			arg0,
			arg1
		);
	}
	jboolean SyncAdapterType::allowParallelSyncs()
	{
		return callMethod<jboolean>(
			"allowParallelSyncs",
			"()Z"
		);
	}
	jint SyncAdapterType::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SyncAdapterType::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SyncAdapterType::getSettingsActivity()
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SyncAdapterType::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SyncAdapterType::isAlwaysSyncable()
	{
		return callMethod<jboolean>(
			"isAlwaysSyncable",
			"()Z"
		);
	}
	jboolean SyncAdapterType::isUserVisible()
	{
		return callMethod<jboolean>(
			"isUserVisible",
			"()Z"
		);
	}
	jboolean SyncAdapterType::supportsUploading()
	{
		return callMethod<jboolean>(
			"supportsUploading",
			"()Z"
		);
	}
	jstring SyncAdapterType::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SyncAdapterType::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

