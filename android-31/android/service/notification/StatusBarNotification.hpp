#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class Notification;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}
class JObject;
class JString;

namespace android::service::notification
{
	class StatusBarNotification : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatusBarNotification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StatusBarNotification(QAndroidJniObject obj);
		
		// Constructors
		StatusBarNotification(android::os::Parcel arg0);
		StatusBarNotification(JString arg0, JString arg1, jint arg2, JString arg3, jint arg4, jint arg5, jint arg6, android::app::Notification arg7, android::os::UserHandle arg8, jlong arg9);
		
		// Methods
		android::service::notification::StatusBarNotification clone() const;
		jint describeContents() const;
		JString getGroupKey() const;
		jint getId() const;
		JString getKey() const;
		android::app::Notification getNotification() const;
		JString getOpPkg() const;
		JString getOverrideGroupKey() const;
		JString getPackageName() const;
		jlong getPostTime() const;
		JString getTag() const;
		jint getUid() const;
		android::os::UserHandle getUser() const;
		jint getUserId() const;
		jboolean isAppGroup() const;
		jboolean isClearable() const;
		jboolean isGroup() const;
		jboolean isOngoing() const;
		void setOverrideGroupKey(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::notification

