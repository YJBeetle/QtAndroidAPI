#include "../../../JIntArray.hpp"
#include "../../../JLongArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./VcnGatewayConnectionConfig.hpp"

namespace android::net::vcn
{
	// Fields
	
	// QAndroidJniObject forward
	VcnGatewayConnectionConfig::VcnGatewayConnectionConfig(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean VcnGatewayConnectionConfig::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JIntArray VcnGatewayConnectionConfig::getExposedCapabilities()
	{
		return callObjectMethod(
			"getExposedCapabilities",
			"()[I"
		);
	}
	JString VcnGatewayConnectionConfig::getGatewayConnectionName()
	{
		return callObjectMethod(
			"getGatewayConnectionName",
			"()Ljava/lang/String;"
		);
	}
	jint VcnGatewayConnectionConfig::getMaxMtu()
	{
		return callMethod<jint>(
			"getMaxMtu",
			"()I"
		);
	}
	JLongArray VcnGatewayConnectionConfig::getRetryIntervalsMillis()
	{
		return callObjectMethod(
			"getRetryIntervalsMillis",
			"()[J"
		);
	}
	jint VcnGatewayConnectionConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::vcn

