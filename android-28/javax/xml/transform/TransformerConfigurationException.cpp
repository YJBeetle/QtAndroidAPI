#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./TransformerConfigurationException.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// QJniObject forward
	TransformerConfigurationException::TransformerConfigurationException(QJniObject obj) : javax::xml::transform::TransformerException(obj) {}
	
	// Constructors
	TransformerConfigurationException::TransformerConfigurationException()
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"()V"
		) {}
	TransformerConfigurationException::TransformerConfigurationException(JString arg0)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	TransformerConfigurationException::TransformerConfigurationException(JThrowable arg0)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	TransformerConfigurationException::TransformerConfigurationException(JString arg0, JThrowable arg1)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	TransformerConfigurationException::TransformerConfigurationException(JString arg0, JObject arg1)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	TransformerConfigurationException::TransformerConfigurationException(JString arg0, JObject arg1, JThrowable arg2)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::transform

