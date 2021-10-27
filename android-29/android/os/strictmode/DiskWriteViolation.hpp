#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class DiskWriteViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		DiskWriteViolation(QAndroidJniObject obj);
		// Constructors
		DiskWriteViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

