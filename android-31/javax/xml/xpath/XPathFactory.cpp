#include "../../../java/lang/ClassLoader.hpp"
#include "./XPathFactory.hpp"

namespace javax::xml::xpath
{
	// Fields
	jstring XPathFactory::DEFAULT_OBJECT_MODEL_URI()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathFactory",
			"DEFAULT_OBJECT_MODEL_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XPathFactory::DEFAULT_PROPERTY_NAME()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathFactory",
			"DEFAULT_PROPERTY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	XPathFactory::XPathFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::xml::xpath::XPathFactory XPathFactory::newDefaultInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newDefaultInstance",
			"()Ljavax/xml/xpath/XPathFactory;"
		);
	}
	javax::xml::xpath::XPathFactory XPathFactory::newInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"()Ljavax/xml/xpath/XPathFactory;"
		);
	}
	javax::xml::xpath::XPathFactory XPathFactory::newInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;",
			arg0
		);
	}
	javax::xml::xpath::XPathFactory XPathFactory::newInstance(jstring arg0, jstring arg1, java::lang::ClassLoader arg2)
	{
		return callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/xpath/XPathFactory;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean XPathFactory::getFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean XPathFactory::isObjectModelSupported(jstring arg0)
	{
		return callMethod<jboolean>(
			"isObjectModelSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	JObject XPathFactory::newXPath()
	{
		return callObjectMethod(
			"newXPath",
			"()Ljavax/xml/xpath/XPath;"
		);
	}
	void XPathFactory::setFeature(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void XPathFactory::setXPathFunctionResolver(JObject arg0)
	{
		callMethod<void>(
			"setXPathFunctionResolver",
			"(Ljavax/xml/xpath/XPathFunctionResolver;)V",
			arg0.object()
		);
	}
	void XPathFactory::setXPathVariableResolver(JObject arg0)
	{
		callMethod<void>(
			"setXPathVariableResolver",
			"(Ljavax/xml/xpath/XPathVariableResolver;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::xpath

