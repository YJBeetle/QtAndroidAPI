#pragma once

#include "../../../JObject.hpp"

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

namespace android::content::pm
{
	class PackageInstaller_SessionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint INVALID_ID();
		static jint STAGED_SESSION_ACTIVATION_FAILED();
		static jint STAGED_SESSION_CONFLICT();
		static jint STAGED_SESSION_NO_ERROR();
		static jint STAGED_SESSION_UNKNOWN();
		static jint STAGED_SESSION_VERIFICATION_FAILED();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_SessionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_SessionInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createDetailsIntent();
		jint describeContents();
		android::graphics::Bitmap getAppIcon();
		jstring getAppLabel();
		jstring getAppPackageName();
		jintArray getChildSessionIds();
		jlong getCreatedMillis();
		jint getInstallLocation();
		jint getInstallReason();
		jstring getInstallerAttributionTag();
		jstring getInstallerPackageName();
		jint getMode();
		jint getOriginatingUid();
		android::net::Uri getOriginatingUri();
		jint getParentSessionId();
		jfloat getProgress();
		android::net::Uri getReferrerUri();
		jint getRequireUserAction();
		jint getSessionId();
		jlong getSize();
		jint getStagedSessionErrorCode();
		jstring getStagedSessionErrorMessage();
		jlong getUpdatedMillis();
		android::os::UserHandle getUser();
		jboolean hasParentSessionId();
		jboolean isActive();
		jboolean isCommitted();
		jboolean isMultiPackage();
		jboolean isSealed();
		jboolean isStaged();
		jboolean isStagedSessionActive();
		jboolean isStagedSessionApplied();
		jboolean isStagedSessionFailed();
		jboolean isStagedSessionReady();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

