#include "./SAXTransformerFactory.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	jstring SAXTransformerFactory::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXTransformerFactory::FEATURE_XMLFILTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE_XMLFILTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	SAXTransformerFactory::SAXTransformerFactory(QAndroidJniObject obj) : javax::xml::transform::TransformerFactory(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject SAXTransformerFactory::newTemplatesHandler()
	{
		return callObjectMethod(
			"newTemplatesHandler",
			"()Ljavax/xml/transform/sax/TemplatesHandler;"
		);
	}
	QAndroidJniObject SAXTransformerFactory::newTransformerHandler()
	{
		return callObjectMethod(
			"newTransformerHandler",
			"()Ljavax/xml/transform/sax/TransformerHandler;"
		);
	}
	QAndroidJniObject SAXTransformerFactory::newTransformerHandler(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"newTransformerHandler",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/sax/TransformerHandler;",
			arg0.object()
		);
	}
	QAndroidJniObject SAXTransformerFactory::newXMLFilter(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"newXMLFilter",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLFilter;",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::sax

