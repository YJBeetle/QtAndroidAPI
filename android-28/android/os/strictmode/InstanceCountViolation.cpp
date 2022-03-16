#include "../../../JClass.hpp"
#include "./InstanceCountViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// Constructors
	
	// Methods
	jlong InstanceCountViolation::getNumberOfInstances() const
	{
		return callMethod<jlong>(
			"getNumberOfInstances",
			"()J"
		);
	}
} // namespace android::os::strictmode

