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
	ParserConfigurationException::ParserConfigurationException(jstring arg0)
		: java::lang::Exception(
			"javax.xml.parsers.ParserConfigurationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::xml::parsers

