#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Error.hpp"

namespace java::lang
{
	class Exception;
}

namespace javax::xml::transform
{
	class TransformerFactoryConfigurationError : public java::lang::Error
	{
	public:
		// Fields
		
		TransformerFactoryConfigurationError(QAndroidJniObject obj);
		// Constructors
		TransformerFactoryConfigurationError();
		TransformerFactoryConfigurationError(java::lang::Exception &arg0);
		TransformerFactoryConfigurationError(jstring &arg0);
		TransformerFactoryConfigurationError(const QString &arg0);
		TransformerFactoryConfigurationError(java::lang::Exception &arg0, jstring &arg1);
		TransformerFactoryConfigurationError(java::lang::Exception &arg0, const QString &arg1);
		
		// Methods
		jthrowable getCause();
		QAndroidJniObject getException();
		jstring getMessage();
	};
} // namespace javax::xml::transform

