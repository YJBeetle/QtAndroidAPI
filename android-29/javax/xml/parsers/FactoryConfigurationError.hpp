#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Error.hpp"

namespace java::lang
{
	class Exception;
}

namespace javax::xml::parsers
{
	class FactoryConfigurationError : public java::lang::Error
	{
	public:
		// Fields
		
		FactoryConfigurationError(QAndroidJniObject obj);
		// Constructors
		FactoryConfigurationError();
		FactoryConfigurationError(java::lang::Exception arg0);
		FactoryConfigurationError(jstring arg0);
		FactoryConfigurationError(java::lang::Exception arg0, jstring arg1);
		
		// Methods
		jthrowable getCause();
		QAndroidJniObject getException();
		jstring getMessage();
	};
} // namespace javax::xml::parsers

