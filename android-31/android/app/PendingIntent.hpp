#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JObject;
class JString;

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
		static android::app::PendingIntent getActivities(android::content::Context arg0, jint arg1, JArray arg2, jint arg3);
		static android::app::PendingIntent getActivities(android::content::Context arg0, jint arg1, JArray arg2, jint arg3, android::os::Bundle arg4);
		static android::app::PendingIntent getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static android::app::PendingIntent getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3, android::os::Bundle arg4);
		static android::app::PendingIntent getBroadcast(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static android::app::PendingIntent getForegroundService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static android::app::PendingIntent getService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3);
		static android::app::PendingIntent readPendingIntentOrNullFromParcel(android::os::Parcel arg0);
		static void writePendingIntentOrNullToParcel(android::app::PendingIntent arg0, android::os::Parcel arg1);
		void cancel() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getCreatorPackage() const;
		jint getCreatorUid() const;
		android::os::UserHandle getCreatorUserHandle() const;
		android::content::IntentSender getIntentSender() const;
		JString getTargetPackage() const;
		jint hashCode() const;
		jboolean isActivity() const;
		jboolean isBroadcast() const;
		jboolean isForegroundService() const;
		jboolean isImmutable() const;
		jboolean isService() const;
		void send() const;
		void send(jint arg0) const;
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2) const;
		void send(jint arg0, JObject arg1, android::os::Handler arg2) const;
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4) const;
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, JString arg5) const;
		void send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, JString arg5, android::os::Bundle arg6) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

