#include "../../../JString.hpp"
#include "./SAXNotRecognizedException.hpp"

namespace org::xml::sax
{
	// Fields
	
	// Constructors
	SAXNotRecognizedException::SAXNotRecognizedException()
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotRecognizedException",
			"()V"
		) {}
	SAXNotRecognizedException::SAXNotRecognizedException(JString arg0)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotRecognizedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace org::xml::sax

