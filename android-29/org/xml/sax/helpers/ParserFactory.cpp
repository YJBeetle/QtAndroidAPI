#include "./ParserFactory.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QJniObject forward
	ParserFactory::ParserFactory(QJniObject obj) : JObject(obj) {}
	
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
	JObject ParserFactory::makeParser(jstring arg0)
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"(Ljava/lang/String;)Lorg/xml/sax/Parser;",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

