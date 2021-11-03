#pragma once

#include "../../../java/lang/Error.hpp"

namespace java::lang
{
	class Exception;
}
class JString;
class JThrowable;

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
		FactoryConfigurationError(JString arg0);
		FactoryConfigurationError(java::lang::Exception arg0, JString arg1);
		
		// Methods
		JThrowable getCause();
		java::lang::Exception getException();
		JString getMessage();
	};
} // namespace javax::xml::parsers

