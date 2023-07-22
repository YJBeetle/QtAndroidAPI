#pragma once

#include "../../java/lang/IllegalStateException.def.hpp"

class JString;

namespace android::os
{
	class LimitExceededException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LimitExceededException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		LimitExceededException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		LimitExceededException();
		LimitExceededException(JString arg0);
		
		// Methods
	};
} // namespace android::os

