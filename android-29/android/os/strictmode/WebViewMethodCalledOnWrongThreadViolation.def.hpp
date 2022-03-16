#pragma once

#include "./Violation.def.hpp"

class JThrowable;

namespace android::os::strictmode
{
	class WebViewMethodCalledOnWrongThreadViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebViewMethodCalledOnWrongThreadViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		WebViewMethodCalledOnWrongThreadViolation(QJniObject obj) : android::os::strictmode::Violation(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

