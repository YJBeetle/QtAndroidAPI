#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentSender;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}

namespace android::app
{
	class PendingIntent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_CANCEL_CURRENT();
		static jint FLAG_IMMUTABLE();
		static jint FLAG_NO_CREATE();
		static jint FLAG_ONE_SHOT();
		static jint FLAG_UPDATE_CURRENT();
		
		PendingIntent(QAndroidJniObject obj);
		// Constructors
		PendingIntent() = default;
		
		// Methods
		static QAndroidJniObject getActivities(android::content::Context arg0, jint arg1, jarray arg2, jint arg3);
		static QAndroidJniObject getActivities(android::content::Context arg0, jint arg1, jarray arg2, jint arg3, android::os::Bundle arg4);
		static QAndroidJniObject getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static QAndroidJniObject getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3, android::os::Bundle arg4);
		static QAndroidJniObject getBroadcast(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static QAndroidJniObject getForegroundService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static QAndroidJniObject getService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static QAndroidJniObject readPendingIntentOrNullFromParcel(android::os::Parcel arg0);
		static void writePendingIntentOrNullToParcel(android::app::PendingIntent arg0, android::os::Parcel arg1);
		void cancel();
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getCreatorPackage();
		jint getCreatorUid();
		QAndroidJniObject getCreatorUserHandle();
		QAndroidJniObject getIntentSender();
		jstring getTargetPackage();
		jint hashCode();
		void send();
		void send(jint arg0);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2);
		void send(jint arg0, __JniBaseClass arg1, android::os::Handler arg2);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4, jstring arg5);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4, const QString &arg5);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4, jstring arg5, android::os::Bundle arg6);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4, const QString &arg5, android::os::Bundle arg6);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

