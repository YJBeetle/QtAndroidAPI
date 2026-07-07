#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::content::pm
{
	class PackageInstaller_InstallConstraints : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::content::pm::PackageInstaller_InstallConstraints GENTLE_UPDATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_InstallConstraints(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_InstallConstraints(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jboolean isAppNotForegroundRequired() const;
		jboolean isAppNotInteractingRequired() const;
		jboolean isAppNotTopVisibleRequired() const;
		jboolean isDeviceIdleRequired() const;
		jboolean isNotInCallRequired() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

