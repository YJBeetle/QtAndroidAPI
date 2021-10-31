#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace java::util::concurrent
{
	class CompletionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		CompletionException(QAndroidJniObject obj);
		// Constructors
		CompletionException(jthrowable arg0);
		CompletionException(jstring arg0, jthrowable arg1);
		CompletionException() = default;
		
		// Methods
	};
} // namespace java::util::concurrent

