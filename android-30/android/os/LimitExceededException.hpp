#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


namespace android::os
{
	class LimitExceededException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LimitExceededException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		LimitExceededException(QAndroidJniObject obj);
		
		// Constructors
		LimitExceededException();
		LimitExceededException(jstring arg0);
		
		// Methods
	};
} // namespace android::os

