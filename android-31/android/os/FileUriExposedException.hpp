#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::os
{
	class FileUriExposedException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileUriExposedException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		FileUriExposedException(QAndroidJniObject obj);
		
		// Constructors
		FileUriExposedException(jstring arg0);
		
		// Methods
	};
} // namespace android::os

