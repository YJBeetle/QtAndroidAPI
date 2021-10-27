#include "./InstanceCountViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	InstanceCountViolation::InstanceCountViolation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong InstanceCountViolation::getNumberOfInstances()
	{
		return __thiz.callMethod<jlong>(
			"getNumberOfInstances",
			"()J"
		);
	}
} // namespace android::os::strictmode

