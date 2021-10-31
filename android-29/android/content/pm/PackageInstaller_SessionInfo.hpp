#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class PackageInstaller_SessionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint INVALID_ID();
		static jint STAGED_SESSION_ACTIVATION_FAILED();
		static jint STAGED_SESSION_NO_ERROR();
		static jint STAGED_SESSION_UNKNOWN();
		static jint STAGED_SESSION_VERIFICATION_FAILED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageInstaller_SessionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_SessionInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject createDetailsIntent();
		jint describeContents();
		QAndroidJniObject getAppIcon();
		jstring getAppLabel();
		jstring getAppPackageName();
		jintArray getChildSessionIds();
		jint getInstallLocation();
		jint getInstallReason();
		jstring getInstallerPackageName();
		jint getMode();
		jint getOriginatingUid();
		QAndroidJniObject getOriginatingUri();
		jint getParentSessionId();
		jfloat getProgress();
		QAndroidJniObject getReferrerUri();
		jint getSessionId();
		jlong getSize();
		jint getStagedSessionErrorCode();
		jstring getStagedSessionErrorMessage();
		jlong getUpdatedMillis();
		QAndroidJniObject getUser();
		jboolean isActive();
		jboolean isCommitted();
		jboolean isMultiPackage();
		jboolean isSealed();
		jboolean isStaged();
		jboolean isStagedSessionApplied();
		jboolean isStagedSessionFailed();
		jboolean isStagedSessionReady();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

