#include "./TransformerConfigurationException.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// QAndroidJniObject forward
	TransformerConfigurationException::TransformerConfigurationException(QAndroidJniObject obj) : javax::xml::transform::TransformerException(obj) {}
	
	// Constructors
	TransformerConfigurationException::TransformerConfigurationException()
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"()V"
		) {}
	TransformerConfigurationException::TransformerConfigurationException(jstring arg0)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	TransformerConfigurationException::TransformerConfigurationException(jthrowable arg0)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	TransformerConfigurationException::TransformerConfigurationException(jstring arg0, jthrowable arg1)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	TransformerConfigurationException::TransformerConfigurationException(jstring arg0, JObject arg1)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0,
			arg1.object()
		) {}
	TransformerConfigurationException::TransformerConfigurationException(jstring arg0, JObject arg1, jthrowable arg2)
		: javax::xml::transform::TransformerException(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
} // namespace javax::xml::transform

