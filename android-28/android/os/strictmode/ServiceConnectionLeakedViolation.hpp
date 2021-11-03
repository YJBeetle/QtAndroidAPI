#pragma once

#include "./Violation.hpp"

class JThrowable;

namespace android::os::strictmode
{
	class ServiceConnectionLeakedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceConnectionLeakedViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		ServiceConnectionLeakedViolation(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

