#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../Parcel.hpp"
#include "./StorageVolume.hpp"

namespace android::os::storage
{
	// Fields
	QAndroidJniObject StorageVolume::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.storage.StorageVolume",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring StorageVolume::EXTRA_STORAGE_VOLUME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.storage.StorageVolume",
			"EXTRA_STORAGE_VOLUME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	StorageVolume::StorageVolume(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject StorageVolume::createAccessIntent(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createAccessIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject StorageVolume::createOpenDocumentTreeIntent()
	{
		return __thiz.callObjectMethod(
			"createOpenDocumentTreeIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint StorageVolume::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean StorageVolume::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring StorageVolume::getDescription(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring StorageVolume::getState()
	{
		return __thiz.callObjectMethod(
			"getState",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StorageVolume::getUuid()
	{
		return __thiz.callObjectMethod(
			"getUuid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StorageVolume::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean StorageVolume::isEmulated()
	{
		return __thiz.callMethod<jboolean>(
			"isEmulated",
			"()Z"
		);
	}
	jboolean StorageVolume::isPrimary()
	{
		return __thiz.callMethod<jboolean>(
			"isPrimary",
			"()Z"
		);
	}
	jboolean StorageVolume::isRemovable()
	{
		return __thiz.callMethod<jboolean>(
			"isRemovable",
			"()Z"
		);
	}
	jstring StorageVolume::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StorageVolume::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os::storage

