#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::os
{
	class FileUriExposedException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileUriExposedException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		FileUriExposedException(QJniObject obj);
		
		// Constructors
		FileUriExposedException(JString arg0);
		
		// Methods
	};
} // namespace android::os

