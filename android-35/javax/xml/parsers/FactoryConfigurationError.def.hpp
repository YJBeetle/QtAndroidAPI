#pragma once

#include "../../../java/lang/Error.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit FactoryConfigurationError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		FactoryConfigurationError(QJniObject obj) : java::lang::Error(obj) {}
		
		// Constructors
		FactoryConfigurationError();
		FactoryConfigurationError(java::lang::Exception arg0);
		FactoryConfigurationError(JString arg0);
		FactoryConfigurationError(java::lang::Exception arg0, JString arg1);
		
		// Methods
		JThrowable getCause() const;
		java::lang::Exception getException() const;
		JString getMessage() const;
	};
} // namespace javax::xml::parsers

