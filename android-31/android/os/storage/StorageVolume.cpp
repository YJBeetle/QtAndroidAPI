#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../Parcel.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/util/UUID.hpp"
#include "./StorageVolume.hpp"

namespace android::os::storage
{
	// Fields
	JObject StorageVolume::CREATOR()
	{
		return getStaticObjectField(
			"android.os.storage.StorageVolume",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring StorageVolume::EXTRA_STORAGE_VOLUME()
	{
		return getStaticObjectField(
			"android.os.storage.StorageVolume",
			"EXTRA_STORAGE_VOLUME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	StorageVolume::StorageVolume(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent StorageVolume::createAccessIntent(jstring arg0)
	{
		return callObjectMethod(
			"createAccessIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent StorageVolume::createOpenDocumentTreeIntent()
	{
		return callObjectMethod(
			"createOpenDocumentTreeIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint StorageVolume::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean StorageVolume::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring StorageVolume::getDescription(android::content::Context arg0)
	{
		return callObjectMethod(
			"getDescription",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	java::io::File StorageVolume::getDirectory()
	{
		return callObjectMethod(
			"getDirectory",
			"()Ljava/io/File;"
		);
	}
	jstring StorageVolume::getMediaStoreVolumeName()
	{
		return callObjectMethod(
			"getMediaStoreVolumeName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StorageVolume::getState()
	{
		return callObjectMethod(
			"getState",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::UUID StorageVolume::getStorageUuid()
	{
		return callObjectMethod(
			"getStorageUuid",
			"()Ljava/util/UUID;"
		);
	}
	jstring StorageVolume::getUuid()
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StorageVolume::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean StorageVolume::isEmulated()
	{
		return callMethod<jboolean>(
			"isEmulated",
			"()Z"
		);
	}
	jboolean StorageVolume::isPrimary()
	{
		return callMethod<jboolean>(
			"isPrimary",
			"()Z"
		);
	}
	jboolean StorageVolume::isRemovable()
	{
		return callMethod<jboolean>(
			"isRemovable",
			"()Z"
		);
	}
	jstring StorageVolume::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StorageVolume::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os::storage

