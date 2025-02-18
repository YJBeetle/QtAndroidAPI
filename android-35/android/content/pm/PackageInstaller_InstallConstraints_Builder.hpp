#pragma once

#include "./PackageInstaller_InstallConstraints.def.hpp"
#include "./PackageInstaller_InstallConstraints_Builder.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline PackageInstaller_InstallConstraints_Builder::PackageInstaller_InstallConstraints_Builder()
		: JObject(
			"android.content.pm.PackageInstaller$InstallConstraints$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::content::pm::PackageInstaller_InstallConstraints PackageInstaller_InstallConstraints_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/pm/PackageInstaller$InstallConstraints;"
		);
	}
	inline android::content::pm::PackageInstaller_InstallConstraints_Builder PackageInstaller_InstallConstraints_Builder::setAppNotForegroundRequired() const
	{
		return callObjectMethod(
			"setAppNotForegroundRequired",
			"()Landroid/content/pm/PackageInstaller$InstallConstraints$Builder;"
		);
	}
	inline android::content::pm::PackageInstaller_InstallConstraints_Builder PackageInstaller_InstallConstraints_Builder::setAppNotInteractingRequired() const
	{
		return callObjectMethod(
			"setAppNotInteractingRequired",
			"()Landroid/content/pm/PackageInstaller$InstallConstraints$Builder;"
		);
	}
	inline android::content::pm::PackageInstaller_InstallConstraints_Builder PackageInstaller_InstallConstraints_Builder::setAppNotTopVisibleRequired() const
	{
		return callObjectMethod(
			"setAppNotTopVisibleRequired",
			"()Landroid/content/pm/PackageInstaller$InstallConstraints$Builder;"
		);
	}
	inline android::content::pm::PackageInstaller_InstallConstraints_Builder PackageInstaller_InstallConstraints_Builder::setDeviceIdleRequired() const
	{
		return callObjectMethod(
			"setDeviceIdleRequired",
			"()Landroid/content/pm/PackageInstaller$InstallConstraints$Builder;"
		);
	}
	inline android::content::pm::PackageInstaller_InstallConstraints_Builder PackageInstaller_InstallConstraints_Builder::setNotInCallRequired() const
	{
		return callObjectMethod(
			"setNotInCallRequired",
			"()Landroid/content/pm/PackageInstaller$InstallConstraints$Builder;"
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
