#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class CleartextNetworkViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		CleartextNetworkViolation(QAndroidJniObject obj);
		// Constructors
		CleartextNetworkViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

