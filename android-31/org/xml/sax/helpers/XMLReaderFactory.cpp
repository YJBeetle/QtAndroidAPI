#include "../../../../JClass.hpp"
#include "../../../../java/lang/ClassLoader.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./XMLReaderFactory.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
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
	JObject XMLReaderFactory::createXMLReader(JString arg0)
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"(Ljava/lang/String;)Lorg/xml/sax/XMLReader;",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

