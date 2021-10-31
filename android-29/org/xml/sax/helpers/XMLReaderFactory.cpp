#include "../../../../java/lang/ClassLoader.hpp"
#include "./XMLReaderFactory.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	XMLReaderFactory::XMLReaderFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass XMLReaderFactory::createXMLReader()
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	__JniBaseClass XMLReaderFactory::createXMLReader(jstring arg0)
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"(Ljava/lang/String;)Lorg/xml/sax/XMLReader;",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

