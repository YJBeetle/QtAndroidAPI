#pragma once

#include "./NetworkEvent.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
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
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectEvent(const char *className, const char *sig, Ts...agv) : android::app::admin::NetworkEvent(className, sig, std::forward<Ts>(agv)...) {}
		ConnectEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		java::net::InetAddress getInetAddress() const;
		jint getPort() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

