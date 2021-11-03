#include "../../../../JString.hpp"
#include "./ParserFactory.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	ParserFactory::ParserFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject ParserFactory::makeParser()
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"()Lorg/xml/sax/Parser;"
		);
	}
	JObject ParserFactory::makeParser(JString arg0)
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"(Ljava/lang/String;)Lorg/xml/sax/Parser;",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

