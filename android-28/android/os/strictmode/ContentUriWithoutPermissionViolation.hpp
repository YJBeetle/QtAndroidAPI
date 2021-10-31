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
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentUriWithoutPermissionViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		ContentUriWithoutPermissionViolation(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

