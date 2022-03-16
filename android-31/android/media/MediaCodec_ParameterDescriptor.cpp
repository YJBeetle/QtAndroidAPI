#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaCodec_ParameterDescriptor.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean MediaCodec_ParameterDescriptor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString MediaCodec_ParameterDescriptor::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint MediaCodec_ParameterDescriptor::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint MediaCodec_ParameterDescriptor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media

