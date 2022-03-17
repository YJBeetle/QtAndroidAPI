#pragma once

#include "../../../JThrowable.hpp"

class JString;

namespace android::os::strictmode
{
	class Violation : public JThrowable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Violation(const char *className, const char *sig, Ts...agv) : JThrowable(className, sig, std::forward<Ts>(agv)...) {}
		Violation(QAndroidJniObject obj) : JThrowable(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

