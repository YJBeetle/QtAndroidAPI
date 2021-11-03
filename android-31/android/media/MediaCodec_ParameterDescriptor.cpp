#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaCodec_ParameterDescriptor.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCodec_ParameterDescriptor::MediaCodec_ParameterDescriptor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaCodec_ParameterDescriptor::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString MediaCodec_ParameterDescriptor::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint MediaCodec_ParameterDescriptor::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint MediaCodec_ParameterDescriptor::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media

