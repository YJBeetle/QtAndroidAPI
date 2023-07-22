#pragma once

#include "../../../../JClass.hpp"
#include "../../../../java/lang/ClassLoader.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./XMLReaderFactory.def.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject XMLReaderFactory::createXMLReader()
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	inline JObject XMLReaderFactory::createXMLReader(JString arg0)
	{
		return callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"(Ljava/lang/String;)Lorg/xml/sax/XMLReader;",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xml::sax::helpers;
#endif
