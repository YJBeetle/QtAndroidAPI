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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionConfiguration_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		IkeSessionConfiguration_Builder(android::net::ipsec::ike::IkeSessionConnectionInfo arg0);
		
		// Methods
		android::net::ipsec::ike::IkeSessionConfiguration_Builder addIkeExtension(jint arg0) const;
		android::net::ipsec::ike::IkeSessionConfiguration_Builder addRemoteVendorId(JByteArray arg0) const;
		android::net::ipsec::ike::IkeSessionConfiguration build() const;
		android::net::ipsec::ike::IkeSessionConfiguration_Builder clearIkeExtensions() const;
		android::net::ipsec::ike::IkeSessionConfiguration_Builder clearRemoteApplicationVersion() const;
		android::net::ipsec::ike::IkeSessionConfiguration_Builder clearRemoteVendorIds() const;
		android::net::ipsec::ike::IkeSessionConfiguration_Builder setRemoteApplicationVersion(JString arg0) const;
	};
} // namespace android::net::ipsec::ike

