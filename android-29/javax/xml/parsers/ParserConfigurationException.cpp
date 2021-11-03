#include "../../../JString.hpp"
#include "./ParserConfigurationException.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// QJniObject forward
	ParserConfigurationException::ParserConfigurationException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	ParserConfigurationException::ParserConfigurationException()
		: java::lang::Exception(
			"javax.xml.parsers.ParserConfigurationException",
			"()V"
		) {}
	ParserConfigurationException::ParserConfigurationException(JString arg0)
		: java::lang::Exception(
			"javax.xml.parsers.ParserConfigurationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::xml::parsers

