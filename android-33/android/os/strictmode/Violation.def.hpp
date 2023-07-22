#pragma once

#include "../../../JThrowable.hpp"

class JArray;
class JThrowable;

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
		JThrowable fillInStackTrace() const;
		jint hashCode() const;
		JThrowable initCause(JThrowable arg0) const;
		void setStackTrace(JArray arg0) const;
	};
} // namespace android::os::strictmode

