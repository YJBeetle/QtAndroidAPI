#pragma once

#include "./Violation.hpp"

class JString;
class JThrowable;

namespace android::os::strictmode
{
	class SqliteObjectLeakedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SqliteObjectLeakedViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		SqliteObjectLeakedViolation(QAndroidJniObject obj) : android::os::strictmode::Violation(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

