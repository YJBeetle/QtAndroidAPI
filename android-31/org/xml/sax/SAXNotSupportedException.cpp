#include "../../../JString.hpp"
#include "./SAXNotSupportedException.hpp"

namespace org::xml::sax
{
	// Fields
	
	// Constructors
	SAXNotSupportedException::SAXNotSupportedException()
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotSupportedException",
			"()V"
		) {}
	SAXNotSupportedException::SAXNotSupportedException(JString arg0)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace org::xml::sax

