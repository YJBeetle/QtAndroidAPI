#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./LeakedClosableViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QJniObject forward
	LeakedClosableViolation::LeakedClosableViolation(QJniObject obj) : android::os::strictmode::Violation(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::os::strictmode

