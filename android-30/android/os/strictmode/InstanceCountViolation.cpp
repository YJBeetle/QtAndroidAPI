#include "./InstanceCountViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QAndroidJniObject forward
	InstanceCountViolation::InstanceCountViolation(QAndroidJniObject obj) : android::os::strictmode::Violation(obj) {}
	
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

