#include "../../../java/lang/ClassLoader.hpp"
#include "../../../JString.hpp"
#include "./XPathFactory.hpp"

namespace javax::xml::xpath
{
	// Fields
	JString XPathFactory::DEFAULT_OBJECT_MODEL_URI()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathFactory",
			"DEFAULT_OBJECT_MODEL_URI",
			"Ljava/lang/String;"
		);
	}
	JString XPathFactory::DEFAULT_PROPERTY_NAME()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathFactory",
			"DEFAULT_PROPERTY_NAME",
			"Ljava/lang/String;"
		);
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
	javax::xml::xpath::XPathFactory XPathFactory::newInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;",
			arg0.object<jstring>()
		);
	}
	javax::xml::xpath::XPathFactory XPathFactory::newInstance(JString arg0, JString arg1, java::lang::ClassLoader arg2)
	{
		return callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/xpath/XPathFactory;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	jboolean XPathFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean XPathFactory::isObjectModelSupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isObjectModelSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject XPathFactory::newXPath() const
	{
		return callObjectMethod(
			"newXPath",
			"()Ljavax/xml/xpath/XPath;"
		);
	}
	void XPathFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void XPathFactory::setXPathFunctionResolver(JObject arg0) const
	{
		callMethod<void>(
			"setXPathFunctionResolver",
			"(Ljavax/xml/xpath/XPathFunctionResolver;)V",
			arg0.object()
		);
	}
	void XPathFactory::setXPathVariableResolver(JObject arg0) const
	{
		callMethod<void>(
			"setXPathVariableResolver",
			"(Ljavax/xml/xpath/XPathVariableResolver;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::xpath

