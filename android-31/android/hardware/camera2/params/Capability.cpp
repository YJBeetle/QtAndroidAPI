#include "../../../util/Range.hpp"
#include "../../../util/Size.hpp"
#include "./Capability.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	Capability::Capability(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Capability::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::util::Size Capability::getMaxStreamingSize()
	{
		return callObjectMethod(
			"getMaxStreamingSize",
			"()Landroid/util/Size;"
		);
	}
	jint Capability::getMode()
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	android::util::Range Capability::getZoomRatioRange()
	{
		return callObjectMethod(
			"getZoomRatioRange",
			"()Landroid/util/Range;"
		);
	}
	jint Capability::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Capability::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

