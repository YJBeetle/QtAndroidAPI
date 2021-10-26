#pragma once

#ifndef ORG_XML_SAX_HANDLERBASE
#define ORG_XML_SAX_HANDLERBASE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::org::xml::sax
{
	class SAXParseException;
}
namespace __jni_impl::org::xml::sax
{
	class InputSource;
}

namespace __jni_impl::org::xml::sax
{
	class HandlerBase : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void error(__jni_impl::org::xml::sax::SAXParseException arg0);
		void warning(__jni_impl::org::xml::sax::SAXParseException arg0);
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void startDocument();
		void endDocument();
		void processingInstruction(jstring arg0, jstring arg1);
		void processingInstruction(const QString &arg0, const QString &arg1);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void setDocumentLocator(__jni_impl::__JniBaseClass arg0);
		void startElement(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void startElement(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void endElement(jstring arg0);
		void endElement(const QString &arg0);
		void fatalError(__jni_impl::org::xml::sax::SAXParseException arg0);
		void notationDecl(jstring arg0, jstring arg1, jstring arg2);
		void notationDecl(const QString &arg0, const QString &arg1, const QString &arg2);
		void unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void unparsedEntityDecl(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		QAndroidJniObject resolveEntity(jstring arg0, jstring arg1);
		QAndroidJniObject resolveEntity(const QString &arg0, const QString &arg1);
	};
} // namespace __jni_impl::org::xml::sax

#include "SAXParseException.hpp"
#include "InputSource.hpp"

namespace __jni_impl::org::xml::sax
{
	// Fields
	
	// Constructors
	void HandlerBase::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.HandlerBase",
			"()V"
		);
	}
	
	// Methods
	void HandlerBase::error(__jni_impl::org::xml::sax::SAXParseException arg0)
	{
		__thiz.callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.__jniObject().object()
		);
	}
	void HandlerBase::warning(__jni_impl::org::xml::sax::SAXParseException arg0)
	{
		__thiz.callMethod<void>(
			"warning",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.__jniObject().object()
		);
	}
	void HandlerBase::characters(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"characters",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void HandlerBase::startDocument()
	{
		__thiz.callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void HandlerBase::endDocument()
	{
		__thiz.callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void HandlerBase::processingInstruction(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void HandlerBase::processingInstruction(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void HandlerBase::ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void HandlerBase::setDocumentLocator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.__jniObject().object()
		);
	}
	void HandlerBase::startElement(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void HandlerBase::startElement(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void HandlerBase::endElement(jstring arg0)
	{
		__thiz.callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HandlerBase::endElement(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void HandlerBase::fatalError(__jni_impl::org::xml::sax::SAXParseException arg0)
	{
		__thiz.callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.__jniObject().object()
		);
	}
	void HandlerBase::notationDecl(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void HandlerBase::notationDecl(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void HandlerBase::unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"unparsedEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void HandlerBase::unparsedEntityDecl(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz.callMethod<void>(
			"unparsedEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	QAndroidJniObject HandlerBase::resolveEntity(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject HandlerBase::resolveEntity(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::org::xml::sax

namespace org::xml::sax
{
	class HandlerBase : public __jni_impl::org::xml::sax::HandlerBase
	{
	public:
		HandlerBase(QAndroidJniObject obj) { __thiz = obj; }
		HandlerBase()
		{
			__constructor();
		}
	};
} // namespace org::xml::sax

#endif // ORG_XML_SAX_HANDLERBASE

