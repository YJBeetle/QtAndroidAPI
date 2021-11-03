#pragma once

#include "../../../java/lang/Error.hpp"

namespace java::lang
{
	class Exception;
}
class JString;
class JThrowable;

namespace javax::xml::transform
{
	class TransformerFactoryConfigurationError : public java::lang::Error
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransformerFactoryConfigurationError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		TransformerFactoryConfigurationError(QJniObject obj);
		
		// Constructors
		TransformerFactoryConfigurationError();
		TransformerFactoryConfigurationError(java::lang::Exception arg0);
		TransformerFactoryConfigurationError(JString arg0);
		TransformerFactoryConfigurationError(java::lang::Exception arg0, JString arg1);
		
		// Methods
		JThrowable getCause();
		java::lang::Exception getException();
		JString getMessage();
	};
} // namespace javax::xml::transform

