#pragma once

#include "../../../JObject.hpp"

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
class JString;
class JString;

namespace android::app::admin
{
	class DeviceAdminInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint USES_ENCRYPTED_STORAGE();
		static jint USES_POLICY_DISABLE_CAMERA();
		static jint USES_POLICY_DISABLE_KEYGUARD_FEATURES();
		static jint USES_POLICY_EXPIRE_PASSWORD();
		static jint USES_POLICY_FORCE_LOCK();
		static jint USES_POLICY_LIMIT_PASSWORD();
		static jint USES_POLICY_RESET_PASSWORD();
		static jint USES_POLICY_WATCH_LOGIN();
		static jint USES_POLICY_WIPE_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceAdminInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceAdminInfo(QJniObject obj);
		
		// Constructors
		DeviceAdminInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1);
		
		// Methods
		jint describeContents();
		void dump(JObject arg0, JString arg1);
		android::content::pm::ActivityInfo getActivityInfo();
		android::content::ComponentName getComponent();
		JString getPackageName();
		JString getReceiverName();
		JString getTagForPolicy(jint arg0);
		jboolean isVisible();
		JString loadDescription(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0);
		JString loadLabel(android::content::pm::PackageManager arg0);
		jboolean supportsTransferOwnership();
		JString toString();
		jboolean usesPolicy(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

