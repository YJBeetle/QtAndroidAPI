#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

class JString;

namespace android::os
{
	class OperationCanceledException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OperationCanceledException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		OperationCanceledException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		OperationCanceledException();
		OperationCanceledException(JString arg0);
		
		// Methods
	};
} // namespace android::os

