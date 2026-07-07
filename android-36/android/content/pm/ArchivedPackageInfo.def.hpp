#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class SigningInfo;
}
class JString;

namespace android::content::pm
{
	class ArchivedPackageInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArchivedPackageInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ArchivedPackageInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ArchivedPackageInfo(JString arg0, android::content::pm::SigningInfo arg1, JObject arg2);
		
		// Methods
		JString getDefaultToDeviceProtectedStorage() const;
		JObject getLauncherActivities() const;
		JString getPackageName() const;
		JString getRequestLegacyExternalStorage() const;
		android::content::pm::SigningInfo getSigningInfo() const;
		jint getTargetSdkVersion() const;
		JString getUserDataFragile() const;
		jint getVersionCode() const;
		jint getVersionCodeMajor() const;
		android::content::pm::ArchivedPackageInfo setDefaultToDeviceProtectedStorage(JString arg0) const;
		android::content::pm::ArchivedPackageInfo setLauncherActivities(JObject arg0) const;
		android::content::pm::ArchivedPackageInfo setPackageName(JString arg0) const;
		android::content::pm::ArchivedPackageInfo setRequestLegacyExternalStorage(JString arg0) const;
		android::content::pm::ArchivedPackageInfo setSigningInfo(android::content::pm::SigningInfo arg0) const;
		android::content::pm::ArchivedPackageInfo setTargetSdkVersion(jint arg0) const;
		android::content::pm::ArchivedPackageInfo setUserDataFragile(JString arg0) const;
		android::content::pm::ArchivedPackageInfo setVersionCode(jint arg0) const;
		android::content::pm::ArchivedPackageInfo setVersionCodeMajor(jint arg0) const;
	};
} // namespace android::content::pm

