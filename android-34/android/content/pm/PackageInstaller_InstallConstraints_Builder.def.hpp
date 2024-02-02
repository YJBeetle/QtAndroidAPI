#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class PackageInstaller_InstallConstraints;
}

namespace android::content::pm
{
	class PackageInstaller_InstallConstraints_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_InstallConstraints_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_InstallConstraints_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PackageInstaller_InstallConstraints_Builder();
		
		// Methods
		android::content::pm::PackageInstaller_InstallConstraints build() const;
		android::content::pm::PackageInstaller_InstallConstraints_Builder setAppNotForegroundRequired() const;
		android::content::pm::PackageInstaller_InstallConstraints_Builder setAppNotInteractingRequired() const;
		android::content::pm::PackageInstaller_InstallConstraints_Builder setAppNotTopVisibleRequired() const;
		android::content::pm::PackageInstaller_InstallConstraints_Builder setDeviceIdleRequired() const;
		android::content::pm::PackageInstaller_InstallConstraints_Builder setNotInCallRequired() const;
	};
} // namespace android::content::pm

