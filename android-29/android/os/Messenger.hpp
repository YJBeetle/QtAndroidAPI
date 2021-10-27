#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Message;
}
namespace android::os
{
	class Parcel;
}

namespace android::os
{
	class Messenger : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Messenger(QAndroidJniObject obj);
		// Constructors
		Messenger(android::os::Handler &arg0);
		Messenger(__JniBaseClass &arg0);
		Messenger() = default;
		
		// Methods
		static QAndroidJniObject readMessengerOrNullFromParcel(android::os::Parcel arg0);
		static void writeMessengerOrNullToParcel(android::os::Messenger arg0, android::os::Parcel arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getBinder();
		jint hashCode();
		void send(android::os::Message arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

