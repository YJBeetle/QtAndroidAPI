#pragma once

#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./StorageVolume.def.hpp"

namespace android::os::storage
{
	// Fields
	inline JObject StorageVolume::CREATOR()
	{
		return getStaticObjectField(
			"android.os.storage.StorageVolume",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString StorageVolume::EXTRA_STORAGE_VOLUME()
	{
		return getStaticObjectField(
			"android.os.storage.StorageVolume",
			"EXTRA_STORAGE_VOLUME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::Intent StorageVolume::createAccessIntent(JString arg0) const
	{
		return callObjectMethod(
			"createAccessIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	inline android::content::Intent StorageVolume::createOpenDocumentTreeIntent() const
	{
		return callObjectMethod(
			"createOpenDocumentTreeIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline jint StorageVolume::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean StorageVolume::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString StorageVolume::getDescription(android::content::Context arg0) const
	{
		return callObjectMethod(
			"getDescription",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString StorageVolume::getState() const
	{
		return callObjectMethod(
			"getState",
			"()Ljava/lang/String;"
		);
	}
	inline JString StorageVolume::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/lang/String;"
		);
	}
	inline jint StorageVolume::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean StorageVolume::isEmulated() const
	{
		return callMethod<jboolean>(
			"isEmulated",
			"()Z"
		);
	}
	inline jboolean StorageVolume::isPrimary() const
	{
		return callMethod<jboolean>(
			"isPrimary",
			"()Z"
		);
	}
	inline jboolean StorageVolume::isRemovable() const
	{
		return callMethod<jboolean>(
			"isRemovable",
			"()Z"
		);
	}
	inline JString StorageVolume::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void StorageVolume::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os::storage

// Base class headers

