#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::ipsec::ike
{
	class IkeSessionConnectionInfo;
}

namespace android::net::ipsec::ike
{
	class IkeSessionConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static jint EXTENSION_TYPE_FRAGMENTATION();
		static jint EXTENSION_TYPE_MOBIKE();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionConfiguration(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::net::ipsec::ike::IkeSessionConnectionInfo getIkeSessionConnectionInfo();
		jstring getRemoteApplicationVersion();
		__JniBaseClass getRemoteVendorIds();
		jboolean isIkeExtensionEnabled(jint arg0);
	};
} // namespace android::net::ipsec::ike

