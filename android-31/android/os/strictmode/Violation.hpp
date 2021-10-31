#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::os::strictmode
{
	class Violation : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Violation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Violation(QJniObject obj);
		
		// Constructors
		
		// Methods
		jthrowable fillInStackTrace();
		jint hashCode();
		jthrowable initCause(jthrowable arg0);
		void setStackTrace(jarray arg0);
	};
} // namespace android::os::strictmode

