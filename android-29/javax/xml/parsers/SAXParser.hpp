#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::javax::xml::validation
{
	class Schema;
}
namespace __jni_impl::org::xml::sax
{
	class HandlerBase;
}
namespace __jni_impl::org::xml::sax
{
	class InputSource;
}
namespace __jni_impl::org::xml::sax::helpers
{
	class DefaultHandler;
}

namespace __jni_impl::javax::xml::parsers
{
	class SAXParser : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getParser();
		jobject getProperty(jstring arg0);
		jobject getProperty(const QString &arg0);
		QAndroidJniObject getSchema();
		QAndroidJniObject getXMLReader();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		void parse(__jni_impl::java::io::File arg0, __jni_impl::org::xml::sax::HandlerBase arg1);
		void parse(__jni_impl::java::io::File arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1);
		void parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::HandlerBase arg1);
		void parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1);
		void parse(jstring arg0, __jni_impl::org::xml::sax::HandlerBase arg1);
		void parse(const QString &arg0, __jni_impl::org::xml::sax::HandlerBase arg1);
		void parse(jstring arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1);
		void parse(const QString &arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1);
		void parse(__jni_impl::org::xml::sax::InputSource arg0, __jni_impl::org::xml::sax::HandlerBase arg1);
		void parse(__jni_impl::org::xml::sax::InputSource arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1);
		void parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::HandlerBase arg1, jstring arg2);
		void parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::HandlerBase arg1, const QString &arg2);
		void parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1, jstring arg2);
		void parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1, const QString &arg2);
		void reset();
		void setProperty(jstring arg0, jobject arg1);
		void setProperty(const QString &arg0, jobject arg1);
	};
} // namespace __jni_impl::javax::xml::parsers

#include "../../../java/io/File.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../validation/Schema.hpp"
#include "../../../org/xml/sax/HandlerBase.hpp"
#include "../../../org/xml/sax/InputSource.hpp"
#include "../../../org/xml/sax/helpers/DefaultHandler.hpp"

namespace __jni_impl::javax::xml::parsers
{
	// Fields
	
	// Constructors
	void SAXParser::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.SAXParser",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SAXParser::getParser()
	{
		return __thiz.callObjectMethod(
			"getParser",
			"()Lorg/xml/sax/Parser;"
		);
	}
	jobject SAXParser::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject SAXParser::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	QAndroidJniObject SAXParser::getSchema()
	{
		return __thiz.callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	QAndroidJniObject SAXParser::getXMLReader()
	{
		return __thiz.callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	jboolean SAXParser::isNamespaceAware()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean SAXParser::isValidating()
	{
		return __thiz.callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean SAXParser::isXIncludeAware()
	{
		return __thiz.callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	void SAXParser::parse(__jni_impl::java::io::File arg0, __jni_impl::org::xml::sax::HandlerBase arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/HandlerBase;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(__jni_impl::java::io::File arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::HandlerBase arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(jstring arg0, __jni_impl::org::xml::sax::HandlerBase arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(const QString &arg0, __jni_impl::org::xml::sax::HandlerBase arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(jstring arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(const QString &arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(__jni_impl::org::xml::sax::InputSource arg0, __jni_impl::org::xml::sax::HandlerBase arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(__jni_impl::org::xml::sax::InputSource arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::HandlerBase arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SAXParser::parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::HandlerBase arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void SAXParser::parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SAXParser::parse(__jni_impl::java::io::InputStream arg0, __jni_impl::org::xml::sax::helpers::DefaultHandler arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void SAXParser::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void SAXParser::setProperty(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void SAXParser::setProperty(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace __jni_impl::javax::xml::parsers

namespace javax::xml::parsers
{
	class SAXParser : public __jni_impl::javax::xml::parsers::SAXParser
	{
	public:
		SAXParser(QAndroidJniObject obj) { __thiz = obj; }
		SAXParser()
		{
			__constructor();
		}
	};
} // namespace javax::xml::parsers

