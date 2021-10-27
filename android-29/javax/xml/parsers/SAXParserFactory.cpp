#include "../../../java/lang/ClassLoader.hpp"
#include "./SAXParser.hpp"
#include "../validation/Schema.hpp"
#include "./SAXParserFactory.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	SAXParserFactory::SAXParserFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SAXParserFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newDefaultInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	QAndroidJniObject SAXParserFactory::newDefaultNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newDefaultNSInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	QAndroidJniObject SAXParserFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	QAndroidJniObject SAXParserFactory::newInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SAXParserFactory::newInstance(const QString &arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SAXParserFactory::newNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newNSInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	QAndroidJniObject SAXParserFactory::newNSInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SAXParserFactory::newNSInstance(const QString &arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean SAXParserFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean SAXParserFactory::getFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SAXParserFactory::getSchema()
	{
		return __thiz.callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	jboolean SAXParserFactory::isNamespaceAware()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean SAXParserFactory::isValidating()
	{
		return __thiz.callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean SAXParserFactory::isXIncludeAware()
	{
		return __thiz.callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	QAndroidJniObject SAXParserFactory::newSAXParser()
	{
		return __thiz.callObjectMethod(
			"newSAXParser",
			"()Ljavax/xml/parsers/SAXParser;"
		);
	}
	void SAXParserFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void SAXParserFactory::setFeature(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SAXParserFactory::setNamespaceAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	void SAXParserFactory::setSchema(javax::xml::validation::Schema arg0)
	{
		__thiz.callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.__jniObject().object()
		);
	}
	void SAXParserFactory::setValidating(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
	void SAXParserFactory::setXIncludeAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::xml::parsers

