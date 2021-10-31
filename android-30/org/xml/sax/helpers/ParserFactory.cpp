#include "./ParserFactory.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QJniObject forward
	ParserFactory::ParserFactory(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass ParserFactory::makeParser()
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"()Lorg/xml/sax/Parser;"
		);
	}
	__JniBaseClass ParserFactory::makeParser(jstring arg0)
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"(Ljava/lang/String;)Lorg/xml/sax/Parser;",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

