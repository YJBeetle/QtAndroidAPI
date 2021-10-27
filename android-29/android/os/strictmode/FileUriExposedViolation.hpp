#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class FileUriExposedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		FileUriExposedViolation(QAndroidJniObject obj);
		// Constructors
		FileUriExposedViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

