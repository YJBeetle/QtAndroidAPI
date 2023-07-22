#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

namespace java::lang
{
	class Exception;
}
class JString;
class JThrowable;

namespace android::util
{
	class AndroidRuntimeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AndroidRuntimeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		AndroidRuntimeException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		AndroidRuntimeException();
		AndroidRuntimeException(java::lang::Exception arg0);
		AndroidRuntimeException(JString arg0);
		AndroidRuntimeException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::util

