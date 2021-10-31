#include "./InstanceCountViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QJniObject forward
	InstanceCountViolation::InstanceCountViolation(QJniObject obj) : android::os::strictmode::Violation(obj) {}
	
	// Constructors
	
	// Methods
	jlong InstanceCountViolation::getNumberOfInstances()
	{
		return callMethod<jlong>(
			"getNumberOfInstances",
			"()J"
		);
	}
} // namespace android::os::strictmode

