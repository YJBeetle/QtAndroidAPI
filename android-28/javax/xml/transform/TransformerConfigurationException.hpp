#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./TransformerConfigurationException.def.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// Constructors
	inline TransformerConfigurationException::TransformerConfigurationException()
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"()V"
		) {}
	inline TransformerConfigurationException::TransformerConfigurationException(JString arg0)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline TransformerConfigurationException::TransformerConfigurationException(JThrowable arg0)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline TransformerConfigurationException::TransformerConfigurationException(JString arg0, JThrowable arg1)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline TransformerConfigurationException::TransformerConfigurationException(JString arg0, JObject arg1)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline TransformerConfigurationException::TransformerConfigurationException(JString arg0, JObject arg1, JThrowable arg2)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::transform

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./TransformerException.hpp"

