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
	class IntentSender : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		IntentSender(QAndroidJniObject obj);
		// Constructors
		IntentSender() = default;
		
		// Methods
		static QAndroidJniObject readIntentSenderOrNullFromParcel(android::os::Parcel arg0);
		static void writeIntentSenderOrNullToParcel(android::content::IntentSender arg0, android::os::Parcel arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getCreatorPackage();
		jint getCreatorUid();
		QAndroidJniObject getCreatorUserHandle();
		jstring getTargetPackage();
		jint hashCode();
		void sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4);
		void sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4, jstring arg5);
		void sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4, const QString &arg5);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

