#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::renderscript
{
	class RSRuntimeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RSRuntimeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RSRuntimeException(QJniObject obj);
		
		// Constructors
		RSRuntimeException(jstring arg0);
		
		// Methods
	};
} // namespace android::renderscript

