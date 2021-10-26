#pragma once

#ifndef JAVAX_XML_PARSERS_DOCUMENTBUILDER
#define JAVAX_XML_PARSERS_DOCUMENTBUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::org::xml::sax
{
	class InputSource;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::javax::xml::validation
{
	class Schema;
}

namespace __jni_impl::javax::xml::parsers
{
	class DocumentBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void reset();
		QAndroidJniObject parse(__jni_impl::java::io::File arg0);
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject parse(__jni_impl::org::xml::sax::InputSource arg0);
		QAndroidJniObject parse(__jni_impl::java::io::InputStream arg0, jstring arg1);
		QAndroidJniObject parse(__jni_impl::java::io::InputStream arg0, const QString &arg1);
		QAndroidJniObject parse(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject getSchema();
		void setErrorHandler(__jni_impl::__JniBaseClass arg0);
		void setEntityResolver(__jni_impl::__JniBaseClass arg0);
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		QAndroidJniObject newDocument();
		QAndroidJniObject getDOMImplementation();
	};
} // namespace __jni_impl::javax::xml::parsers

#include "../../../java/io/File.hpp"
#include "../../../org/xml/sax/InputSource.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../validation/Schema.hpp"

namespace __jni_impl::javax::xml::parsers
{
	// Fields
	
	// Constructors
	void DocumentBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.DocumentBuilder",
			"(V)V");
	}
	
	// Methods
	void DocumentBuilder::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	QAndroidJniObject DocumentBuilder::parse(__jni_impl::java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/io/File;)Lorg/w3c/dom/Document;",
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
	QAndroidJniObject DocumentBuilder::parse(__jni_impl::org::xml::sax::InputSource arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilder::parse(__jni_impl::java::io::InputStream arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DocumentBuilder::parse(__jni_impl::java::io::InputStream arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentBuilder::parse(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;)Lorg/w3c/dom/Document;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilder::getSchema()
	{
		return __thiz.callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	void DocumentBuilder::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void DocumentBuilder::setEntityResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject DocumentBuilder::getDOMImplementation()
	{
		return __thiz.callObjectMethod(
			"getDOMImplementation",
			"()Lorg/w3c/dom/DOMImplementation;"
		);
	}
} // namespace __jni_impl::javax::xml::parsers

namespace javax::xml::parsers
{
	class DocumentBuilder : public __jni_impl::javax::xml::parsers::DocumentBuilder
	{
	public:
		DocumentBuilder(QAndroidJniObject obj) { __thiz = obj; }
		DocumentBuilder()
		{
			__constructor();
		}
	};
} // namespace javax::xml::parsers

#endif // JAVAX_XML_PARSERS_DOCUMENTBUILDER

