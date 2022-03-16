#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::renderscript
{
	class RSRuntimeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSRuntimeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RSRuntimeException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		RSRuntimeException(JString arg0);
		
		// Methods
	};
} // namespace android::renderscript

