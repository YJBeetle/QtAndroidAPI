#pragma once

#include "../../../JString.hpp"
#include "./ParserConfigurationException.def.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// Constructors
	inline ParserConfigurationException::ParserConfigurationException()
		: java::lang::Exception(
			"javax.xml.parsers.ParserConfigurationException",
			"()V"
		) {}
	inline ParserConfigurationException::ParserConfigurationException(JString arg0)
		: java::lang::Exception(
			"javax.xml.parsers.ParserConfigurationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::xml::parsers

// Base class headers
#include "../../../java/lang/Exception.hpp"

