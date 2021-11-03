#include "./VcnGatewayConnectionConfig.hpp"

namespace android::net::vcn
{
	// Fields
	
	// QAndroidJniObject forward
	VcnGatewayConnectionConfig::VcnGatewayConnectionConfig(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean VcnGatewayConnectionConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jintArray VcnGatewayConnectionConfig::getExposedCapabilities()
	{
		return callObjectMethod(
			"getExposedCapabilities",
			"()[I"
		).object<jintArray>();
	}
	jstring VcnGatewayConnectionConfig::getGatewayConnectionName()
	{
		return callObjectMethod(
			"getGatewayConnectionName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint VcnGatewayConnectionConfig::getMaxMtu()
	{
		return callMethod<jint>(
			"getMaxMtu",
			"()I"
		);
	}
	jlongArray VcnGatewayConnectionConfig::getRetryIntervalsMillis()
	{
		return callObjectMethod(
			"getRetryIntervalsMillis",
			"()[J"
		).object<jlongArray>();
	}
	jint VcnGatewayConnectionConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::vcn

