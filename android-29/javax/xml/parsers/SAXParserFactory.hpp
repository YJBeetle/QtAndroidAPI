#pragma once

#ifndef JAVAX_XML_PARSERS_SAXPARSERFACTORY
#define JAVAX_XML_PARSERS_SAXPARSERFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::javax::xml::parsers
{
	class SAXParser;
}
namespace __jni_impl::javax::xml::validation
{
	class Schema;
}

namespace __jni_impl::javax::xml::parsers
{
	class SAXParserFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject newDefaultInstance();
		void setNamespaceAware(jboolean arg0);
		static QAndroidJniObject newDefaultNSInstance();
		static QAndroidJniObject newNSInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject newNSInstance();
		QAndroidJniObject newSAXParser();
		void setValidating(jboolean arg0);
		jboolean isNamespaceAware();
		jboolean isValidating();
		void setXIncludeAware(jboolean arg0);
		jboolean isXIncludeAware();
		void setSchema(__jni_impl::javax::xml::validation::Schema arg0);
		QAndroidJniObject getSchema();
		void setFeature(jstring arg0, jboolean arg1);
		jboolean getFeature(jstring arg0);
	};
} // namespace __jni_impl::javax::xml::parsers

#include "../../../java/lang/ClassLoader.hpp"
#include "SAXParser.hpp"
#include "../validation/Schema.hpp"

namespace __jni_impl::javax::xml::parsers
{
	// Fields
	
	// Constructors
	void SAXParserFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.SAXParserFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SAXParserFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;");
	}
	QAndroidJniObject SAXParserFactory::newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject SAXParserFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newDefaultInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;");
	}
	void SAXParserFactory::setNamespaceAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject SAXParserFactory::newDefaultNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newDefaultNSInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;");
	}
	QAndroidJniObject SAXParserFactory::newNSInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject SAXParserFactory::newNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newNSInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;");
	}
	QAndroidJniObject SAXParserFactory::newSAXParser()
	{
		return __thiz.callObjectMethod(
			"newSAXParser",
			"()Ljavax/xml/parsers/SAXParser;");
	}
	void SAXParserFactory::setValidating(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0);
	}
	jboolean SAXParserFactory::isNamespaceAware()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceAware",
			"()Z");
	}
	jboolean SAXParserFactory::isValidating()
	{
		return __thiz.callMethod<jboolean>(
			"isValidating",
			"()Z");
	}
	void SAXParserFactory::setXIncludeAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0);
	}
	jboolean SAXParserFactory::isXIncludeAware()
	{
		return __thiz.callMethod<jboolean>(
			"isXIncludeAware",
			"()Z");
	}
	void SAXParserFactory::setSchema(__jni_impl::javax::xml::validation::Schema arg0)
	{
		__thiz.callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SAXParserFactory::getSchema()
	{
		return __thiz.callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;");
	}
	void SAXParserFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	jboolean SAXParserFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0);
	}
} // namespace __jni_impl::javax::xml::parsers

namespace javax::xml::parsers
{
	class SAXParserFactory : public __jni_impl::javax::xml::parsers::SAXParserFactory
	{
	public:
		SAXParserFactory(QAndroidJniObject obj) { __thiz = obj; }
		SAXParserFactory()
		{
			__constructor();
		}
	};
} // namespace javax::xml::parsers

#endif // JAVAX_XML_PARSERS_SAXPARSERFACTORY

