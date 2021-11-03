#include "./SAXTransformerFactory.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	jstring SAXTransformerFactory::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXTransformerFactory::FEATURE_XMLFILTER()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE_XMLFILTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	SAXTransformerFactory::SAXTransformerFactory(QAndroidJniObject obj) : javax::xml::transform::TransformerFactory(obj) {}
	
	// Constructors
	
	// Methods
	JObject SAXTransformerFactory::newTemplatesHandler()
	{
		return callObjectMethod(
			"newTemplatesHandler",
			"()Ljavax/xml/transform/sax/TemplatesHandler;"
		);
	}
	JObject SAXTransformerFactory::newTransformerHandler()
	{
		return callObjectMethod(
			"newTransformerHandler",
			"()Ljavax/xml/transform/sax/TransformerHandler;"
		);
	}
	JObject SAXTransformerFactory::newTransformerHandler(JObject arg0)
	{
		return callObjectMethod(
			"newTransformerHandler",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/sax/TransformerHandler;",
			arg0.object()
		);
	}
	JObject SAXTransformerFactory::newXMLFilter(JObject arg0)
	{
		return callObjectMethod(
			"newXMLFilter",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLFilter;",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::sax

