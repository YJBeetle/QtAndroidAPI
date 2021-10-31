#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "./RSRuntimeException.hpp"


namespace android::renderscript
{
	class RSInvalidStateException : public android::renderscript::RSRuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RSInvalidStateException(const char *className, const char *sig, Ts...agv) : android::renderscript::RSRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RSInvalidStateException(QJniObject obj);
		
		// Constructors
		RSInvalidStateException(jstring arg0);
		
		// Methods
	};
} // namespace android::renderscript

