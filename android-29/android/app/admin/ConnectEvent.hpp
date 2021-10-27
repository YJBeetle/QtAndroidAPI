#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./NetworkEvent.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::net
{
	class InetAddress;
}

namespace android::app::admin
{
	class ConnectEvent : public android::app::admin::NetworkEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ConnectEvent(QAndroidJniObject obj);
		// Constructors
		ConnectEvent() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getInetAddress();
		jint getPort();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

