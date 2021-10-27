#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"

namespace android::net
{
	class Uri;
}

namespace android::os::strictmode
{
	class ContentUriWithoutPermissionViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		ContentUriWithoutPermissionViolation(QAndroidJniObject obj);
		// Constructors
		ContentUriWithoutPermissionViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

