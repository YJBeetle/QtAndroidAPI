#pragma once

#ifndef JAVAX_XML_XPATH_XPATHFACTORY
#define JAVAX_XML_XPATH_XPATHFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::javax::xml::xpath
{
	class XPathFactory : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT_PROPERTY_NAME();
		static QAndroidJniObject DEFAULT_OBJECT_MODEL_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2);
		static QAndroidJniObject newInstance(jstring arg0);
		static QAndroidJniObject newInstance();
		void setFeature(jstring arg0, jboolean arg1);
		jboolean getFeature(jstring arg0);
		static QAndroidJniObject newDefaultInstance();
		void setXPathVariableResolver(__jni_impl::__JniBaseClass arg0);
		void setXPathFunctionResolver(__jni_impl::__JniBaseClass arg0);
		jboolean isObjectModelSupported(jstring arg0);
		QAndroidJniObject newXPath();
	};
} // namespace __jni_impl::javax::xml::xpath

#include "../../../java/lang/ClassLoader.hpp"

namespace __jni_impl::javax::xml::xpath
{
	// Fields
	QAndroidJniObject XPathFactory::DEFAULT_PROPERTY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathFactory",
			"DEFAULT_PROPERTY_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XPathFactory::DEFAULT_OBJECT_MODEL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathFactory",
			"DEFAULT_OBJECT_MODEL_URI",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void XPathFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject XPathFactory::newInstance(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/xpath/XPathFactory;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject XPathFactory::newInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;",
			arg0);
	}
	QAndroidJniObject XPathFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newInstance",
			"()Ljavax/xml/xpath/XPathFactory;");
	}
	void XPathFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	jboolean XPathFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject XPathFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.xpath.XPathFactory",
			"newDefaultInstance",
			"()Ljavax/xml/xpath/XPathFactory;");
	}
	void XPathFactory::setXPathVariableResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setXPathVariableResolver",
			"(Ljavax/xml/xpath/XPathVariableResolver;)V",
			arg0.__jniObject().object());
	}
	void XPathFactory::setXPathFunctionResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setXPathFunctionResolver",
			"(Ljavax/xml/xpath/XPathFunctionResolver;)V",
			arg0.__jniObject().object());
	}
	jboolean XPathFactory::isObjectModelSupported(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isObjectModelSupported",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject XPathFactory::newXPath()
	{
		return __thiz.callObjectMethod(
			"newXPath",
			"()Ljavax/xml/xpath/XPath;");
	}
} // namespace __jni_impl::javax::xml::xpath

namespace javax::xml::xpath
{
	class XPathFactory : public __jni_impl::javax::xml::xpath::XPathFactory
	{
	public:
		XPathFactory(QAndroidJniObject obj) { __thiz = obj; }
		XPathFactory()
		{
			__constructor();
		}
	};
} // namespace javax::xml::xpath

#endif // JAVAX_XML_XPATH_XPATHFACTORY

