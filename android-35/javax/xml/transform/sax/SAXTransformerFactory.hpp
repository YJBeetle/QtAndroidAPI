#pragma once

#include "../../../../JString.hpp"
#include "./SAXTransformerFactory.def.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	inline JString SAXTransformerFactory::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	inline JString SAXTransformerFactory::FEATURE_XMLFILTER()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE_XMLFILTER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject SAXTransformerFactory::newTemplatesHandler() const
	{
		return callObjectMethod(
			"newTemplatesHandler",
			"()Ljavax/xml/transform/sax/TemplatesHandler;"
		);
	}
	inline JObject SAXTransformerFactory::newTransformerHandler() const
	{
		return callObjectMethod(
			"newTransformerHandler",
			"()Ljavax/xml/transform/sax/TransformerHandler;"
		);
	}
	inline JObject SAXTransformerFactory::newTransformerHandler(JObject arg0) const
	{
		return callObjectMethod(
			"newTransformerHandler",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/sax/TransformerHandler;",
			arg0.object()
		);
	}
	inline JObject SAXTransformerFactory::newXMLFilter(JObject arg0) const
	{
		return callObjectMethod(
			"newXMLFilter",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLFilter;",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::sax

// Base class headers
#include "../TransformerFactory.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::transform::sax;
#endif
