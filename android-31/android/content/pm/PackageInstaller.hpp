#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class IntentSender;
}
namespace android::content::pm
{
	class PackageInstaller_Session;
}
namespace android::content::pm
{
	class PackageInstaller_SessionCallback;
}
namespace android::content::pm
{
	class PackageInstaller_SessionInfo;
}
namespace android::content::pm
{
	class PackageInstaller_SessionParams;
}
namespace android::content::pm
{
	class VersionedPackage;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Handler;
}

namespace android::content::pm
{
	class PackageInstaller : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_SESSION_COMMITTED();
		static jstring ACTION_SESSION_DETAILS();
		static jstring ACTION_SESSION_UPDATED();
		static jstring EXTRA_OTHER_PACKAGE_NAME();
		static jstring EXTRA_PACKAGE_NAME();
		static jstring EXTRA_SESSION();
		static jstring EXTRA_SESSION_ID();
		static jstring EXTRA_STATUS();
		static jstring EXTRA_STATUS_MESSAGE();
		static jstring EXTRA_STORAGE_PATH();
		static jint STATUS_FAILURE();
		static jint STATUS_FAILURE_ABORTED();
		static jint STATUS_FAILURE_BLOCKED();
		static jint STATUS_FAILURE_CONFLICT();
		static jint STATUS_FAILURE_INCOMPATIBLE();
		static jint STATUS_FAILURE_INVALID();
		static jint STATUS_FAILURE_STORAGE();
		static jint STATUS_PENDING_USER_ACTION();
		static jint STATUS_SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageInstaller(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void abandonSession(jint arg0);
		jint createSession(android::content::pm::PackageInstaller_SessionParams arg0);
		android::content::pm::PackageInstaller_SessionInfo getActiveStagedSession();
		__JniBaseClass getActiveStagedSessions();
		__JniBaseClass getAllSessions();
		__JniBaseClass getMySessions();
		android::content::pm::PackageInstaller_SessionInfo getSessionInfo(jint arg0);
		__JniBaseClass getStagedSessions();
		void installExistingPackage(jstring arg0, jint arg1, android::content::IntentSender arg2);
		android::content::pm::PackageInstaller_Session openSession(jint arg0);
		void registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0);
		void registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0, android::os::Handler arg1);
		void uninstall(android::content::pm::VersionedPackage arg0, android::content::IntentSender arg1);
		void uninstall(jstring arg0, android::content::IntentSender arg1);
		void uninstallExistingPackage(jstring arg0, android::content::IntentSender arg1);
		void unregisterSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0);
		void updateSessionAppIcon(jint arg0, android::graphics::Bitmap arg1);
		void updateSessionAppLabel(jint arg0, jstring arg1);
	};
} // namespace android::content::pm

