#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JLongArray;
class JObject;
class JString;

namespace android::net::vcn
{
	class VcnGatewayConnectionConfig : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VcnGatewayConnectionConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnGatewayConnectionConfig(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JIntArray getExposedCapabilities() const;
		JString getGatewayConnectionName() const;
		jint getMaxMtu() const;
		JLongArray getRetryIntervalsMillis() const;
		JObject getVcnUnderlyingNetworkPriorities() const;
		jint hashCode() const;
	};
} // namespace android::net::vcn

