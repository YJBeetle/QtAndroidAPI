#include "../../../../java/lang/ClassLoader.hpp"
#include "./XMLReaderFactory.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	XMLReaderFactory::XMLReaderFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject XMLReaderFactory::createXMLReader()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	QAndroidJniObject XMLReaderFactory::createXMLReader(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"(Ljava/lang/String;)Lorg/xml/sax/XMLReader;",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

