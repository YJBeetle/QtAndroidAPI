#pragma once

#include "../../../JThrowable.hpp"

class JString;

namespace android::os::strictmode
{
	class Violation : public JThrowable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Violation(const char *className, const char *sig, Ts...agv) : JThrowable(className, sig, std::forward<Ts>(agv)...) {}
		Violation(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

