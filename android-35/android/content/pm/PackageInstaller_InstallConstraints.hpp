#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./PackageInstaller_InstallConstraints.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageInstaller_InstallConstraints::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$InstallConstraints",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::content::pm::PackageInstaller_InstallConstraints PackageInstaller_InstallConstraints::GENTLE_UPDATE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$InstallConstraints",
			"GENTLE_UPDATE",
			"Landroid/content/pm/PackageInstaller$InstallConstraints;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PackageInstaller_InstallConstraints::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PackageInstaller_InstallConstraints::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PackageInstaller_InstallConstraints::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean PackageInstaller_InstallConstraints::isAppNotForegroundRequired() const
	{
		return callMethod<jboolean>(
			"isAppNotForegroundRequired",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_InstallConstraints::isAppNotInteractingRequired() const
	{
		return callMethod<jboolean>(
			"isAppNotInteractingRequired",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_InstallConstraints::isAppNotTopVisibleRequired() const
	{
		return callMethod<jboolean>(
			"isAppNotTopVisibleRequired",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_InstallConstraints::isDeviceIdleRequired() const
	{
		return callMethod<jboolean>(
			"isDeviceIdleRequired",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_InstallConstraints::isNotInCallRequired() const
	{
		return callMethod<jboolean>(
			"isNotInCallRequired",
			"()Z"
		);
	}
	inline void PackageInstaller_InstallConstraints::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
