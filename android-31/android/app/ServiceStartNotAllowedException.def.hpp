#pragma once

#include "../../java/lang/IllegalStateException.def.hpp"

namespace android::app
{
	class ServiceStartNotAllowedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceStartNotAllowedException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ServiceStartNotAllowedException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::app

