#pragma once

#include "../../../JObject.hpp"

namespace android::net::nsd
{
	class AdvertisingRequest;
}
namespace android::net::nsd
{
	class NsdServiceInfo;
}

namespace android::net::nsd
{
	class AdvertisingRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdvertisingRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertisingRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdvertisingRequest_Builder(android::net::nsd::NsdServiceInfo arg0);
		
		// Methods
		android::net::nsd::AdvertisingRequest build() const;
		android::net::nsd::AdvertisingRequest_Builder setFlags(jlong arg0) const;
		android::net::nsd::AdvertisingRequest_Builder setProtocolType(jint arg0) const;
	};
} // namespace android::net::nsd

