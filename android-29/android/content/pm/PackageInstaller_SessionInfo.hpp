#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::content
{
	class Intent;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}
class JString;
class JString;

namespace android::content::pm
{
	class PackageInstaller_SessionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint INVALID_ID();
		static jint STAGED_SESSION_ACTIVATION_FAILED();
		static jint STAGED_SESSION_NO_ERROR();
		static jint STAGED_SESSION_UNKNOWN();
		static jint STAGED_SESSION_VERIFICATION_FAILED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageInstaller_SessionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_SessionInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::content::Intent createDetailsIntent() const;
		jint describeContents() const;
		android::graphics::Bitmap getAppIcon() const;
		JString getAppLabel() const;
		JString getAppPackageName() const;
		JIntArray getChildSessionIds() const;
		jint getInstallLocation() const;
		jint getInstallReason() const;
		JString getInstallerPackageName() const;
		jint getMode() const;
		jint getOriginatingUid() const;
		android::net::Uri getOriginatingUri() const;
		jint getParentSessionId() const;
		jfloat getProgress() const;
		android::net::Uri getReferrerUri() const;
		jint getSessionId() const;
		jlong getSize() const;
		jint getStagedSessionErrorCode() const;
		JString getStagedSessionErrorMessage() const;
		jlong getUpdatedMillis() const;
		android::os::UserHandle getUser() const;
		jboolean isActive() const;
		jboolean isCommitted() const;
		jboolean isMultiPackage() const;
		jboolean isSealed() const;
		jboolean isStaged() const;
		jboolean isStagedSessionApplied() const;
		jboolean isStagedSessionFailed() const;
		jboolean isStagedSessionReady() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

