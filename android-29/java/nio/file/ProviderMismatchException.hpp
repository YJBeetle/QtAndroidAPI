#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::file
{
	class ProviderMismatchException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		ProviderMismatchException(QAndroidJniObject obj);
		// Constructors
		ProviderMismatchException();
		ProviderMismatchException(jstring arg0);
		
		// Methods
	};
} // namespace java::nio::file

