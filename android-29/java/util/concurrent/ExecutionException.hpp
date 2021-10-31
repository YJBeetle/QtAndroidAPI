#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::concurrent
{
	class ExecutionException : public java::lang::Exception
	{
	public:
		// Fields
		
		ExecutionException(QAndroidJniObject obj);
		// Constructors
		ExecutionException(jthrowable arg0);
		ExecutionException(jstring arg0, jthrowable arg1);
		ExecutionException() = default;
		
		// Methods
	};
} // namespace java::util::concurrent

