#pragma once

#include "../../../../JObject.hpp"

namespace android::net::ipsec::ike
{
	class IkeSessionConnectionInfo;
}
class JString;

namespace android::net::ipsec::ike
{
	class IkeSessionConfiguration : public JObject
	{
	public:
		// Fields
		static jint EXTENSION_TYPE_FRAGMENTATION();
		static jint EXTENSION_TYPE_MOBIKE();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionConfiguration(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::net::ipsec::ike::IkeSessionConnectionInfo getIkeSessionConnectionInfo();
		JString getRemoteApplicationVersion();
		JObject getRemoteVendorIds();
		jboolean isIkeExtensionEnabled(jint arg0);
	};
} // namespace android::net::ipsec::ike

