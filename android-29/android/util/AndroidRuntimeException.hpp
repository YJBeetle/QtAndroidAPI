#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::util
{
	class AndroidRuntimeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AndroidRuntimeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		AndroidRuntimeException(QJniObject obj);
		
		// Constructors
		AndroidRuntimeException();
		AndroidRuntimeException(java::lang::Exception arg0);
		AndroidRuntimeException(jstring arg0);
		AndroidRuntimeException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::util

