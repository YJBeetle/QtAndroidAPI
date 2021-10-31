#include "../../../java/lang/ClassLoader.hpp"
#include "./XPathFactory.hpp"

namespace javax::xml::xpath
{
	// Fields
	jstring XPathFactory::DEFAULT_OBJECT_MODEL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathFactory",
			"DEFAULT_OBJECT_MODEL_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XPathFactory::DEFAULT_PROPERTY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathFactory",
			"DEFAULT_PROPERTY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	XPathFactory::XPathFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject XPathFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newDefaultInstance",
			"()Ljavax/xml/xpath/XPathFactory;"
		);
	}
	QAndroidJniObject XPathFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"()Ljavax/xml/xpath/XPathFactory;"
		);
	}
	QAndroidJniObject XPathFactory::newInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;",
			arg0
		);
	}
	QAndroidJniObject XPathFactory::newInstance(jstring arg0, jstring arg1, java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject XPathFactory::newXPath()
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
	void XPathFactory::setXPathFunctionResolver(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setXPathFunctionResolver",
			"(Ljavax/xml/xpath/XPathFunctionResolver;)V",
			arg0.object()
		);
	}
	void XPathFactory::setXPathVariableResolver(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setXPathVariableResolver",
			"(Ljavax/xml/xpath/XPathVariableResolver;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::xpath

