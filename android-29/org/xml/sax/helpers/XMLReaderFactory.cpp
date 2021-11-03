#include "../../../../java/lang/ClassLoader.hpp"
#include "./XMLReaderFactory.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	XMLReaderFactory::XMLReaderFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject XMLReaderFactory::createXMLReader()
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	JObject XMLReaderFactory::createXMLReader(jstring arg0)
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"(Ljava/lang/String;)Lorg/xml/sax/XMLReader;",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

