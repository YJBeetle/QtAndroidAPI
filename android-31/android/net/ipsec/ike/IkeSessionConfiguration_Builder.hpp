#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::ipsec::ike
{
	class IkeSessionConfiguration;
}
namespace android::net::ipsec::ike
{
	class IkeSessionConnectionInfo;
}
class JString;

namespace android::net::ipsec::ike
{
	class IkeSessionConfiguration_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionConfiguration_Builder(QJniObject obj);
		
		// Constructors
		IkeSessionConfiguration_Builder(android::net::ipsec::ike::IkeSessionConnectionInfo arg0);
		
		// Methods
		android::net::ipsec::ike::IkeSessionConfiguration_Builder addIkeExtension(jint arg0);
		android::net::ipsec::ike::IkeSessionConfiguration_Builder addRemoteVendorId(JByteArray arg0);
		android::net::ipsec::ike::IkeSessionConfiguration build();
		android::net::ipsec::ike::IkeSessionConfiguration_Builder clearIkeExtensions();
		android::net::ipsec::ike::IkeSessionConfiguration_Builder clearRemoteApplicationVersion();
		android::net::ipsec::ike::IkeSessionConfiguration_Builder clearRemoteVendorIds();
		android::net::ipsec::ike::IkeSessionConfiguration_Builder setRemoteApplicationVersion(JString arg0);
	};
} // namespace android::net::ipsec::ike

