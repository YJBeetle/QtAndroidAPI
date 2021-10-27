#include "./ParserFactory.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	ParserFactory::ParserFactory(QAndroidJniObject obj) { __thiz = obj; }
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
	QAndroidJniObject ParserFactory::makeParser(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"(Ljava/lang/String;)Lorg/xml/sax/Parser;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

