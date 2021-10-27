#include "../../../java/lang/ClassLoader.hpp"
#include "./DocumentBuilder.hpp"
#include "../validation/Schema.hpp"
#include "./DocumentBuilderFactory.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	DocumentBuilderFactory::DocumentBuilderFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DocumentBuilderFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newDefaultNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newInstance(const QString &arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newNSInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newNSInstance(const QString &arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jobject DocumentBuilderFactory::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject DocumentBuilderFactory::getAttribute(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jboolean DocumentBuilderFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean DocumentBuilderFactory::getFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DocumentBuilderFactory::getSchema()
	{
		return __thiz.callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	jboolean DocumentBuilderFactory::isCoalescing()
	{
		return __thiz.callMethod<jboolean>(
			"isCoalescing",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isExpandEntityReferences()
	{
		return __thiz.callMethod<jboolean>(
			"isExpandEntityReferences",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isIgnoringComments()
	{
		return __thiz.callMethod<jboolean>(
			"isIgnoringComments",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isIgnoringElementContentWhitespace()
	{
		return __thiz.callMethod<jboolean>(
			"isIgnoringElementContentWhitespace",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isNamespaceAware()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isValidating()
	{
		return __thiz.callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isXIncludeAware()
	{
		return __thiz.callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newDocumentBuilder()
	{
		return __thiz.callObjectMethod(
			"newDocumentBuilder",
			"()Ljavax/xml/parsers/DocumentBuilder;"
		);
	}
	void DocumentBuilderFactory::setAttribute(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void DocumentBuilderFactory::setAttribute(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void DocumentBuilderFactory::setCoalescing(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCoalescing",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setExpandEntityReferences(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExpandEntityReferences",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void DocumentBuilderFactory::setFeature(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void DocumentBuilderFactory::setIgnoringComments(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIgnoringComments",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setIgnoringElementContentWhitespace(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIgnoringElementContentWhitespace",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setNamespaceAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setSchema(javax::xml::validation::Schema arg0)
	{
		__thiz.callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.__jniObject().object()
		);
	}
	void DocumentBuilderFactory::setValidating(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setXIncludeAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::xml::parsers

