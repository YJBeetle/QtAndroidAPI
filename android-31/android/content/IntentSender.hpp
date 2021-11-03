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

namespace android::content
{
	class IntentSender : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntentSender(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntentSender(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::IntentSender readIntentSenderOrNullFromParcel(android::os::Parcel arg0);
		static void writeIntentSenderOrNullToParcel(android::content::IntentSender arg0, android::os::Parcel arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getCreatorPackage();
		jint getCreatorUid();
		android::os::UserHandle getCreatorUserHandle();
		jstring getTargetPackage();
		jint hashCode();
		void sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4);
		void sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, jstring arg5);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

