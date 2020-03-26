#pragma once

#ifndef ORG_XML_SAX_HELPERS_DEFAULTHANDLER
#define ORG_XML_SAX_HELPERS_DEFAULTHANDLER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::org::xml::sax
{
	class SAXParseException;
}
namespace __jni_impl::org::xml::sax
{
	class InputSource;
}

namespace __jni_impl::org::xml::sax::helpers
{
	class DefaultHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void error(__jni_impl::org::xml::sax::SAXParseException arg0);
		void warning(__jni_impl::org::xml::sax::SAXParseException arg0);
		void startDocument();
		void endDocument();
		void processingInstruction(jstring arg0, jstring arg1);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void fatalError(__jni_impl::org::xml::sax::SAXParseException arg0);
		void notationDecl(jstring arg0, jstring arg1, jstring arg2);
		void unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		QAndroidJniObject resolveEntity(jstring arg0, jstring arg1);
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void setDocumentLocator(__jni_impl::__JniBaseClass arg0);
		void startPrefixMapping(jstring arg0, jstring arg1);
		void endPrefixMapping(jstring arg0);
		void startElement(jstring arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3);
		void endElement(jstring arg0, jstring arg1, jstring arg2);
		void skippedEntity(jstring arg0);
	};
} // namespace __jni_impl::org::xml::sax::helpers

#include "../SAXParseException.hpp"
#include "../InputSource.hpp"

namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	void DefaultHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.DefaultHandler",
			"()V");
	}
	
	// Methods
	void DefaultHandler::error(__jni_impl::org::xml::sax::SAXParseException arg0)
	{
		__thiz.callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.__jniObject().object()
		);
	}
	void DefaultHandler::warning(__jni_impl::org::xml::sax::SAXParseException arg0)
	{
		__thiz.callMethod<void>(
			"warning",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.__jniObject().object()
		);
	}
	void DefaultHandler::startDocument()
	{
		__thiz.callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void DefaultHandler::endDocument()
	{
		__thiz.callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void DefaultHandler::processingInstruction(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DefaultHandler::ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DefaultHandler::fatalError(__jni_impl::org::xml::sax::SAXParseException arg0)
	{
		__thiz.callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.__jniObject().object()
		);
	}
	void DefaultHandler::notationDecl(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DefaultHandler::unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
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
	QAndroidJniObject DefaultHandler::resolveEntity(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1
		);
	}
	void DefaultHandler::characters(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"characters",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DefaultHandler::setDocumentLocator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.__jniObject().object()
		);
	}
	void DefaultHandler::startPrefixMapping(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"startPrefixMapping",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DefaultHandler::endPrefixMapping(jstring arg0)
	{
		__thiz.callMethod<void>(
			"endPrefixMapping",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DefaultHandler::startElement(jstring arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void DefaultHandler::endElement(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"endElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DefaultHandler::skippedEntity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"skippedEntity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class DefaultHandler : public __jni_impl::org::xml::sax::helpers::DefaultHandler
	{
	public:
		DefaultHandler(QAndroidJniObject obj) { __thiz = obj; }
		DefaultHandler()
		{
			__constructor();
		}
	};
} // namespace org::xml::sax::helpers

#endif // ORG_XML_SAX_HELPERS_DEFAULTHANDLER

