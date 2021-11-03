#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
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
	DatatypeConfigurationException::DatatypeConfigurationException(JString arg0)
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	DatatypeConfigurationException::DatatypeConfigurationException(JThrowable arg0)
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	DatatypeConfigurationException::DatatypeConfigurationException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::datatype

