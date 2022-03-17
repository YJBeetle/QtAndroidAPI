#pragma once

#include "./VersionedPackage.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SharedLibraryInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject SharedLibraryInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.SharedLibraryInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SharedLibraryInfo::TYPE_BUILTIN()
	{
		return getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"TYPE_BUILTIN"
		);
	}
	inline jint SharedLibraryInfo::TYPE_DYNAMIC()
	{
		return getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"TYPE_DYNAMIC"
		);
	}
	inline jint SharedLibraryInfo::TYPE_STATIC()
	{
		return getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"TYPE_STATIC"
		);
	}
	inline jint SharedLibraryInfo::VERSION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"VERSION_UNDEFINED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SharedLibraryInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::pm::VersionedPackage SharedLibraryInfo::getDeclaringPackage() const
	{
		return callObjectMethod(
			"getDeclaringPackage",
			"()Landroid/content/pm/VersionedPackage;"
		);
	}
	inline JObject SharedLibraryInfo::getDependentPackages() const
	{
		return callObjectMethod(
			"getDependentPackages",
			"()Ljava/util/List;"
		);
	}
	inline jlong SharedLibraryInfo::getLongVersion() const
	{
		return callMethod<jlong>(
			"getLongVersion",
			"()J"
		);
	}
	inline JString SharedLibraryInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint SharedLibraryInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint SharedLibraryInfo::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline JString SharedLibraryInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SharedLibraryInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

