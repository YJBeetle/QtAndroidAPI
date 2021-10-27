#include "../../../java/io/File.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../validation/Schema.hpp"
#include "../../../org/xml/sax/InputSource.hpp"
#include "./DocumentBuilder.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	DocumentBuilder::DocumentBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DocumentBuilder::getDOMImplementation()
	{
		return __thiz.callObjectMethod(
			"getDOMImplementation",
			"()Lorg/w3c/dom/DOMImplementation;"
		);
	}
	QAndroidJniObject DocumentBuilder::getSchema()
	{
		return __thiz.callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	jboolean DocumentBuilder::isNamespaceAware()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean DocumentBuilder::isValidating()
	{
		return __thiz.callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean DocumentBuilder::isXIncludeAware()
	{
		return __thiz.callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	QAndroidJniObject DocumentBuilder::newDocument()
	{
		return __thiz.callObjectMethod(
			"newDocument",
			"()Lorg/w3c/dom/Document;"
		);
	}
	QAndroidJniObject DocumentBuilder::parse(java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/io/File;)Lorg/w3c/dom/Document;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilder::parse(java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;)Lorg/w3c/dom/Document;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilder::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0
		);
	}
	QAndroidJniObject DocumentBuilder::parse(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Lorg/w3c/dom/Document;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DocumentBuilder::parse(org::xml::sax::InputSource arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilder::parse(java::io::InputStream arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DocumentBuilder::parse(java::io::InputStream arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DocumentBuilder::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void DocumentBuilder::setEntityResolver(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.__jniObject().object()
		);
	}
	void DocumentBuilder::setErrorHandler(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace javax::xml::parsers

