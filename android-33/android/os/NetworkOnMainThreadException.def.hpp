#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

namespace android::os
{
	class NetworkOnMainThreadException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkOnMainThreadException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NetworkOnMainThreadException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		NetworkOnMainThreadException();
		
		// Methods
	};
} // namespace android::os

