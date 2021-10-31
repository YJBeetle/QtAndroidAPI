#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class ActivityInfo;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::content::pm
{
	class ResolveInfo;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class DeviceAdminInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint USES_ENCRYPTED_STORAGE();
		static jint USES_POLICY_DISABLE_CAMERA();
		static jint USES_POLICY_DISABLE_KEYGUARD_FEATURES();
		static jint USES_POLICY_EXPIRE_PASSWORD();
		static jint USES_POLICY_FORCE_LOCK();
		static jint USES_POLICY_LIMIT_PASSWORD();
		static jint USES_POLICY_RESET_PASSWORD();
		static jint USES_POLICY_WATCH_LOGIN();
		static jint USES_POLICY_WIPE_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DeviceAdminInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DeviceAdminInfo(QAndroidJniObject obj);
		
		// Constructors
		DeviceAdminInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1);
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		QAndroidJniObject getActivityInfo();
		QAndroidJniObject getComponent();
		jstring getPackageName();
		jstring getReceiverName();
		jstring getTagForPolicy(jint arg0);
		jboolean isVisible();
		jstring loadDescription(android::content::pm::PackageManager arg0);
		QAndroidJniObject loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		jboolean supportsTransferOwnership();
		jstring toString();
		jboolean usesPolicy(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

