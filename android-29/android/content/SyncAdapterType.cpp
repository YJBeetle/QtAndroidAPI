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
		return __thiz.getObjectField(
			"accountType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SyncAdapterType::authority()
	{
		return __thiz.getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SyncAdapterType::isKey()
	{
		return __thiz.getField<jboolean>(
			"isKey"
		);
	}
	
	SyncAdapterType::SyncAdapterType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncAdapterType::SyncAdapterType(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncAdapterType",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	SyncAdapterType::SyncAdapterType(jstring arg0, jstring arg1, jboolean arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncAdapterType",
			"(Ljava/lang/String;Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
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
		return __thiz.callMethod<jboolean>(
			"allowParallelSyncs",
			"()Z"
		);
	}
	jint SyncAdapterType::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SyncAdapterType::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SyncAdapterType::getSettingsActivity()
	{
		return __thiz.callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SyncAdapterType::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SyncAdapterType::isAlwaysSyncable()
	{
		return __thiz.callMethod<jboolean>(
			"isAlwaysSyncable",
			"()Z"
		);
	}
	jboolean SyncAdapterType::isUserVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isUserVisible",
			"()Z"
		);
	}
	jboolean SyncAdapterType::supportsUploading()
	{
		return __thiz.callMethod<jboolean>(
			"supportsUploading",
			"()Z"
		);
	}
	jstring SyncAdapterType::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SyncAdapterType::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

