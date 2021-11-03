#pragma once

#include "../../../JObject.hpp"


namespace android::os::strictmode
{
	class Violation : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Violation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Violation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jthrowable fillInStackTrace();
		jint hashCode();
		jthrowable initCause(jthrowable arg0);
		void setStackTrace(jarray arg0);
	};
} // namespace android::os::strictmode

