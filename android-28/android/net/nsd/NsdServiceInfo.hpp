#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
namespace java::net
{
	class InetAddress;
}

namespace android::net::nsd
{
	class NsdServiceInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NsdServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NsdServiceInfo(QAndroidJniObject obj);
		
		// Constructors
		NsdServiceInfo();
		
		// Methods
		jint describeContents();
		JObject getAttributes();
		java::net::InetAddress getHost();
		jint getPort();
		JString getServiceName();
		JString getServiceType();
		void removeAttribute(JString arg0);
		void setAttribute(JString arg0, JString arg1);
		void setHost(java::net::InetAddress arg0);
		void setPort(jint arg0);
		void setServiceName(JString arg0);
		void setServiceType(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::nsd

