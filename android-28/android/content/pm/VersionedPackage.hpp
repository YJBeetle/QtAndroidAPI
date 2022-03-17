#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./VersionedPackage.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject VersionedPackage::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.VersionedPackage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline VersionedPackage::VersionedPackage(JString arg0, jint arg1)
		: JObject(
			"android.content.pm.VersionedPackage",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline VersionedPackage::VersionedPackage(JString arg0, jlong arg1)
		: JObject(
			"android.content.pm.VersionedPackage",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jint VersionedPackage::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong VersionedPackage::getLongVersionCode() const
	{
		return callMethod<jlong>(
			"getLongVersionCode",
			"()J"
		);
	}
	inline JString VersionedPackage::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint VersionedPackage::getVersionCode() const
	{
		return callMethod<jint>(
			"getVersionCode",
			"()I"
		);
	}
	inline JString VersionedPackage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VersionedPackage::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

