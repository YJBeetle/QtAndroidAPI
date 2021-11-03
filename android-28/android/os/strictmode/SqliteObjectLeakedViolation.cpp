#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SqliteObjectLeakedViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QJniObject forward
	SqliteObjectLeakedViolation::SqliteObjectLeakedViolation(QJniObject obj) : android::os::strictmode::Violation(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::os::strictmode

