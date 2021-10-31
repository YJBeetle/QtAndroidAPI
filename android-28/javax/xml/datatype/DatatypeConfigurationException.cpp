#include "./DatatypeConfigurationException.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// QAndroidJniObject forward
	DatatypeConfigurationException::DatatypeConfigurationException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	DatatypeConfigurationException::DatatypeConfigurationException()
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"()V"
		) {}
	DatatypeConfigurationException::DatatypeConfigurationException(jstring arg0)
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	DatatypeConfigurationException::DatatypeConfigurationException(jthrowable arg0)
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	DatatypeConfigurationException::DatatypeConfigurationException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace javax::xml::datatype

