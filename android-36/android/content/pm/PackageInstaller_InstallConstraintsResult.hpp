#pragma once

#include "../../os/Parcel.def.hpp"
#include "./PackageInstaller_InstallConstraintsResult.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageInstaller_InstallConstraintsResult::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$InstallConstraintsResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean PackageInstaller_InstallConstraintsResult::areAllConstraintsSatisfied() const
	{
		return callMethod<jboolean>(
			"areAllConstraintsSatisfied",
			"()Z"
		);
	}
	inline jint PackageInstaller_InstallConstraintsResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void PackageInstaller_InstallConstraintsResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
