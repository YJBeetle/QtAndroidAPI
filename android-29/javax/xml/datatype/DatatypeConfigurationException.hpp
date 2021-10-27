#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace javax::xml::datatype
{
	class DatatypeConfigurationException : public java::lang::Exception
	{
	public:
		// Fields
		
		DatatypeConfigurationException(QAndroidJniObject obj);
		// Constructors
		DatatypeConfigurationException();
		DatatypeConfigurationException(jstring &arg0);
		DatatypeConfigurationException(const QString &arg0);
		DatatypeConfigurationException(jthrowable &arg0);
		DatatypeConfigurationException(jstring &arg0, jthrowable &arg1);
		DatatypeConfigurationException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace javax::xml::datatype

