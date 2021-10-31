#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace javax::xml::datatype
{
	class DatatypeConfigurationException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DatatypeConfigurationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		DatatypeConfigurationException(QJniObject obj);
		
		// Constructors
		DatatypeConfigurationException();
		DatatypeConfigurationException(jstring arg0);
		DatatypeConfigurationException(jthrowable arg0);
		DatatypeConfigurationException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace javax::xml::datatype

