#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

namespace android::companion
{
	class CompanionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CompanionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		CompanionException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::companion

