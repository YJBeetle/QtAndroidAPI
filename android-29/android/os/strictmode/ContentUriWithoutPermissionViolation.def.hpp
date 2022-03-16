#pragma once

#include "./Violation.def.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::os::strictmode
{
	class ContentUriWithoutPermissionViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentUriWithoutPermissionViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		ContentUriWithoutPermissionViolation(QJniObject obj) : android::os::strictmode::Violation(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

