#include "./ParserFactory.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	ParserFactory::ParserFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ParserFactory::makeParser()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"()Lorg/xml/sax/Parser;"
		);
	}
	QAndroidJniObject ParserFactory::makeParser(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"(Ljava/lang/String;)Lorg/xml/sax/Parser;",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

