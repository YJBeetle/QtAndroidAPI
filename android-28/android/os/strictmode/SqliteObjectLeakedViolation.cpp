#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SqliteObjectLeakedViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QAndroidJniObject forward
	SqliteObjectLeakedViolation::SqliteObjectLeakedViolation(QAndroidJniObject obj) : android::os::strictmode::Violation(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::os::strictmode

