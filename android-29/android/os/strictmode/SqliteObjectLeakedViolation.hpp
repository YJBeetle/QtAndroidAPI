#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class SqliteObjectLeakedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		SqliteObjectLeakedViolation(QAndroidJniObject obj);
		// Constructors
		SqliteObjectLeakedViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

