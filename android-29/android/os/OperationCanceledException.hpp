#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::os
{
	class OperationCanceledException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		OperationCanceledException(QAndroidJniObject obj);
		// Constructors
		OperationCanceledException();
		OperationCanceledException(jstring &arg0);
		OperationCanceledException(const QString &arg0);
		
		// Methods
	};
} // namespace android::os

