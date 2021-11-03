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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DeviceAdminInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceAdminInfo(QAndroidJniObject obj);
		
		// Constructors
		DeviceAdminInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1);
		
		// Methods
		jint describeContents() const;
		void dump(JObject arg0, JString arg1) const;
		android::content::pm::ActivityInfo getActivityInfo() const;
		android::content::ComponentName getComponent() const;
		JString getPackageName() const;
		JString getReceiverName() const;
		JString getTagForPolicy(jint arg0) const;
		jboolean isVisible() const;
		JString loadDescription(android::content::pm::PackageManager arg0) const;
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0) const;
		JString loadLabel(android::content::pm::PackageManager arg0) const;
		jboolean supportsTransferOwnership() const;
		JString toString() const;
		jboolean usesPolicy(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

