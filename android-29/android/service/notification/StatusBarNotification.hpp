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
		android::service::notification::StatusBarNotification clone();
		jint describeContents();
		JString getGroupKey();
		jint getId();
		JString getKey();
		android::app::Notification getNotification();
		JString getOpPkg();
		JString getOverrideGroupKey();
		JString getPackageName();
		jlong getPostTime();
		JString getTag();
		jint getUid();
		android::os::UserHandle getUser();
		jint getUserId();
		jboolean isClearable();
		jboolean isGroup();
		jboolean isOngoing();
		void setOverrideGroupKey(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::notification

