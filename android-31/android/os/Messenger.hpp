#pragma once

#include "../../JObject.hpp"

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
	class Messenger : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Messenger(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Messenger(QAndroidJniObject obj);
		
		// Constructors
		Messenger(android::os::Handler arg0);
		Messenger(JObject arg0);
		
		// Methods
		static android::os::Messenger readMessengerOrNullFromParcel(android::os::Parcel arg0);
		static void writeMessengerOrNullToParcel(android::os::Messenger arg0, android::os::Parcel arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		JObject getBinder();
		jint hashCode();
		void send(android::os::Message arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

