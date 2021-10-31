#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace java::nio::file
{
	class ProviderNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		ProviderNotFoundException(QAndroidJniObject obj);
		// Constructors
		ProviderNotFoundException();
		ProviderNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace java::nio::file

