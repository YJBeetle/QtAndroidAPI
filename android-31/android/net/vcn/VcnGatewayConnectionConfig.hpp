#pragma once

#include "../../../JObject.hpp"


namespace android::net::vcn
{
	class VcnGatewayConnectionConfig : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnGatewayConnectionConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnGatewayConnectionConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jintArray getExposedCapabilities();
		jstring getGatewayConnectionName();
		jint getMaxMtu();
		jlongArray getRetryIntervalsMillis();
		jint hashCode();
	};
} // namespace android::net::vcn

