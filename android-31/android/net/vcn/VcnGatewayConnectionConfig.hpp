#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::vcn
{
	class VcnGatewayConnectionConfig : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnGatewayConnectionConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

