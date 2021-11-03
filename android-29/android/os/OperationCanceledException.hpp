#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::os
{
	class OperationCanceledException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OperationCanceledException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		OperationCanceledException(QJniObject obj);
		
		// Constructors
		OperationCanceledException();
		OperationCanceledException(jstring arg0);
		
		// Methods
	};
} // namespace android::os

