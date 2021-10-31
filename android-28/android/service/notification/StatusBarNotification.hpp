#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::service::notification
{
	class StatusBarNotification : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StatusBarNotification(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StatusBarNotification(QJniObject obj);
		
		// Constructors
		StatusBarNotification(android::os::Parcel arg0);
		StatusBarNotification(jstring arg0, jstring arg1, jint arg2, jstring arg3, jint arg4, jint arg5, jint arg6, android::app::Notification arg7, android::os::UserHandle arg8, jlong arg9);
		
		// Methods
		android::service::notification::StatusBarNotification clone();
		jint describeContents();
		jstring getGroupKey();
		jint getId();
		jstring getKey();
		android::app::Notification getNotification();
		jstring getOverrideGroupKey();
		jstring getPackageName();
		jlong getPostTime();
		jstring getTag();
		android::os::UserHandle getUser();
		jint getUserId();
		jboolean isClearable();
		jboolean isGroup();
		jboolean isOngoing();
		void setOverrideGroupKey(jstring arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::notification

