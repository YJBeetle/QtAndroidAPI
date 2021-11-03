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
		jint describeContents() const;
		JObject getAttributes() const;
		java::net::InetAddress getHost() const;
		jint getPort() const;
		JString getServiceName() const;
		JString getServiceType() const;
		void removeAttribute(JString arg0) const;
		void setAttribute(JString arg0, JString arg1) const;
		void setHost(java::net::InetAddress arg0) const;
		void setPort(jint arg0) const;
		void setServiceName(JString arg0) const;
		void setServiceType(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::nsd

