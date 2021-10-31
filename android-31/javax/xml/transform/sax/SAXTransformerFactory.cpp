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
	
	// QJniObject forward
	SAXTransformerFactory::SAXTransformerFactory(QJniObject obj) : javax::xml::transform::TransformerFactory(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass SAXTransformerFactory::newTemplatesHandler()
	{
		return callObjectMethod(
			"newTemplatesHandler",
			"()Ljavax/xml/transform/sax/TemplatesHandler;"
		);
	}
	__JniBaseClass SAXTransformerFactory::newTransformerHandler()
	{
		return callObjectMethod(
			"newTransformerHandler",
			"()Ljavax/xml/transform/sax/TransformerHandler;"
		);
	}
	__JniBaseClass SAXTransformerFactory::newTransformerHandler(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"newTransformerHandler",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/sax/TransformerHandler;",
			arg0.object()
		);
	}
	__JniBaseClass SAXTransformerFactory::newXMLFilter(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"newXMLFilter",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLFilter;",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::sax

