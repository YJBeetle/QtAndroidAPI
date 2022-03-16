#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./DatatypeConfigurationException.def.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// Constructors
	inline DatatypeConfigurationException::DatatypeConfigurationException()
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"()V"
		) {}
	inline DatatypeConfigurationException::DatatypeConfigurationException(JString arg0)
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline DatatypeConfigurationException::DatatypeConfigurationException(JThrowable arg0)
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline DatatypeConfigurationException::DatatypeConfigurationException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::datatype

// Base class headers
#include "../../../java/lang/Exception.hpp"

