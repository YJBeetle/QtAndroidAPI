#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class InstanceCountViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		InstanceCountViolation(QAndroidJniObject obj);
		// Constructors
		InstanceCountViolation() = default;
		
		// Methods
		jlong getNumberOfInstances();
	};
} // namespace android::os::strictmode

