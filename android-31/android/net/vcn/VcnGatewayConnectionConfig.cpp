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
	jboolean VcnGatewayConnectionConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JIntArray VcnGatewayConnectionConfig::getExposedCapabilities() const
	{
		return callObjectMethod(
			"getExposedCapabilities",
			"()[I"
		);
	}
	JString VcnGatewayConnectionConfig::getGatewayConnectionName() const
	{
		return callObjectMethod(
			"getGatewayConnectionName",
			"()Ljava/lang/String;"
		);
	}
	jint VcnGatewayConnectionConfig::getMaxMtu() const
	{
		return callMethod<jint>(
			"getMaxMtu",
			"()I"
		);
	}
	JLongArray VcnGatewayConnectionConfig::getRetryIntervalsMillis() const
	{
		return callObjectMethod(
			"getRetryIntervalsMillis",
			"()[J"
		);
	}
	jint VcnGatewayConnectionConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::vcn

