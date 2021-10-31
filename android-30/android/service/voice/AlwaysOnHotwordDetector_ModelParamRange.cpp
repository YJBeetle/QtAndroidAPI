#include "./AlwaysOnHotwordDetector_ModelParamRange.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	AlwaysOnHotwordDetector_ModelParamRange::AlwaysOnHotwordDetector_ModelParamRange(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AlwaysOnHotwordDetector_ModelParamRange::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AlwaysOnHotwordDetector_ModelParamRange::getEnd()
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	jint AlwaysOnHotwordDetector_ModelParamRange::getStart()
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jint AlwaysOnHotwordDetector_ModelParamRange::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AlwaysOnHotwordDetector_ModelParamRange::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::voice

