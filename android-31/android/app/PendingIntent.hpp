#pragma once

#include "../../JObject.hpp"

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
	class PendingIntent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_CANCEL_CURRENT();
		static jint FLAG_IMMUTABLE();
		static jint FLAG_MUTABLE();
		static jint FLAG_NO_CREATE();
		static jint FLAG_ONE_SHOT();
		static jint FLAG_UPDATE_CURRENT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PendingIntent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PendingIntent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::PendingIntent getActivities(android::content::Context arg0, jint arg1, jarray arg2, jint arg3);
		static android::app::PendingIntent getActivities(android::content::Context arg0, jint arg1, jarray arg2, jint arg3, android::os::Bundle arg4);
		static android::app::PendingIntent getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static android::app::PendingIntent getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3, android::os::Bundle arg4);
		static android::app::PendingIntent getBroadcast(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static android::app::PendingIntent getForegroundService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static android::app::PendingIntent getService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static android::app::PendingIntent readPendingIntentOrNullFromParcel(android::os::Parcel arg0);
		static void writePendingIntentOrNullToParcel(android::app::PendingIntent arg0, android::os::Parcel arg1);
		void cancel();
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getCreatorPackage();
		jint getCreatorUid();
		android::os::UserHandle getCreatorUserHandle();
		android::content::IntentSender getIntentSender();
		jstring getTargetPackage();
		jint hashCode();
		jboolean isActivity();
		jboolean isBroadcast();
		jboolean isForegroundService();
		jboolean isImmutable();
		jboolean isService();
		void send();
		void send(jint arg0);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2);
		void send(jint arg0, JObject arg1, android::os::Handler arg2);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, jstring arg5);
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, jstring arg5, android::os::Bundle arg6);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

