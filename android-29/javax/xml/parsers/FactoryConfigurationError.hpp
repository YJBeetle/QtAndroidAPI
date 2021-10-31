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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FactoryConfigurationError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		FactoryConfigurationError(QAndroidJniObject obj);
		
		// Constructors
		FactoryConfigurationError();
		FactoryConfigurationError(java::lang::Exception arg0);
		FactoryConfigurationError(jstring arg0);
		FactoryConfigurationError(java::lang::Exception arg0, jstring arg1);
		
		// Methods
		jthrowable getCause();
		java::lang::Exception getException();
		jstring getMessage();
	};
} // namespace javax::xml::parsers

