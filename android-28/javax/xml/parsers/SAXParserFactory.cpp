#include "../../../java/lang/ClassLoader.hpp"
#include "../../../JString.hpp"
#include "./SAXParser.hpp"
#include "../validation/Schema.hpp"
#include "./SAXParserFactory.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// QAndroidJniObject forward
	SAXParserFactory::SAXParserFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::xml::parsers::SAXParserFactory SAXParserFactory::newDefaultInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newDefaultInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	javax::xml::parsers::SAXParserFactory SAXParserFactory::newDefaultNSInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newDefaultNSInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	javax::xml::parsers::SAXParserFactory SAXParserFactory::newInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	javax::xml::parsers::SAXParserFactory SAXParserFactory::newInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	javax::xml::parsers::SAXParserFactory SAXParserFactory::newNSInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newNSInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	javax::xml::parsers::SAXParserFactory SAXParserFactory::newNSInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean SAXParserFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	javax::xml::validation::Schema SAXParserFactory::getSchema() const
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	jboolean SAXParserFactory::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean SAXParserFactory::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean SAXParserFactory::isXIncludeAware() const
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	javax::xml::parsers::SAXParser SAXParserFactory::newSAXParser() const
	{
		return callObjectMethod(
			"newSAXParser",
			"()Ljavax/xml/parsers/SAXParser;"
		);
	}
	void SAXParserFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void SAXParserFactory::setNamespaceAware(jboolean arg0) const
	{
		callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	void SAXParserFactory::setSchema(javax::xml::validation::Schema arg0) const
	{
		callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.object()
		);
	}
	void SAXParserFactory::setValidating(jboolean arg0) const
	{
		callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
	void SAXParserFactory::setXIncludeAware(jboolean arg0) const
	{
		callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::xml::parsers

