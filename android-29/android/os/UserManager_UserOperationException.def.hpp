#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

class JString;

namespace android::os
{
	class UserManager_UserOperationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UserManager_UserOperationException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		UserManager_UserOperationException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		
		// Methods
		jint getUserOperationResult() const;
	};
} // namespace android::os

