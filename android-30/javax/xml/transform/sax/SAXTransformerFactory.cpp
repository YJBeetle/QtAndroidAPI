#include "../../../../JString.hpp"
#include "./SAXTransformerFactory.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	JString SAXTransformerFactory::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	JString SAXTransformerFactory::FEATURE_XMLFILTER()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE_XMLFILTER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	JObject SAXTransformerFactory::newTemplatesHandler() const
	{
		return callObjectMethod(
			"newTemplatesHandler",
			"()Ljavax/xml/transform/sax/TemplatesHandler;"
		);
	}
	JObject SAXTransformerFactory::newTransformerHandler() const
	{
		return callObjectMethod(
			"newTransformerHandler",
			"()Ljavax/xml/transform/sax/TransformerHandler;"
		);
	}
	JObject SAXTransformerFactory::newTransformerHandler(JObject arg0) const
	{
		return callObjectMethod(
			"newTransformerHandler",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/sax/TransformerHandler;",
			arg0.object()
		);
	}
	JObject SAXTransformerFactory::newXMLFilter(JObject arg0) const
	{
		return callObjectMethod(
			"newXMLFilter",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLFilter;",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::sax

