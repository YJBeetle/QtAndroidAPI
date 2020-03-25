#pragma once

#ifndef ORG_XML_SAX_HELPERS_XMLREADERADAPTER
#define ORG_XML_SAX_HELPERS_XMLREADERADAPTER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::org::xml::sax
{
	class InputSource;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::org::xml::sax::helpers
{
	class XMLReaderAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		void parse(jstring arg0);
		void parse(__jni_impl::org::xml::sax::InputSource arg0);
		void setLocale(__jni_impl::java::util::Locale arg0);
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void startDocument();
		void endDocument();
		void processingInstruction(jstring arg0, jstring arg1);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void setErrorHandler(__jni_impl::__JniBaseClass arg0);
		void setDocumentLocator(__jni_impl::__JniBaseClass arg0);
		void startPrefixMapping(jstring arg0, jstring arg1);
		void endPrefixMapping(jstring arg0);
		void startElement(jstring arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3);
		void endElement(jstring arg0, jstring arg1, jstring arg2);
		void skippedEntity(jstring arg0);
		void setEntityResolver(__jni_impl::__JniBaseClass arg0);
		void setDTDHandler(__jni_impl::__JniBaseClass arg0);
		void setDocumentHandler(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::org::xml::sax::helpers

#include "../InputSource.hpp"
#include "../../../../java/util/Locale.hpp"

namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	void XMLReaderAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.XMLReaderAdapter",
			"()V");
	}
	void XMLReaderAdapter::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.XMLReaderAdapter",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void XMLReaderAdapter::parse(jstring arg0)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void XMLReaderAdapter::parse(__jni_impl::org::xml::sax::InputSource arg0)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object());
	}
	void XMLReaderAdapter::setLocale(__jni_impl::java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void XMLReaderAdapter::characters(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"characters",
			"([CII)V",
			arg0,
			arg1,
			arg2);
	}
	void XMLReaderAdapter::startDocument()
	{
		__thiz.callMethod<void>(
			"startDocument",
			"()V");
	}
	void XMLReaderAdapter::endDocument()
	{
		__thiz.callMethod<void>(
			"endDocument",
			"()V");
	}
	void XMLReaderAdapter::processingInstruction(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void XMLReaderAdapter::ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0,
			arg1,
			arg2);
	}
	void XMLReaderAdapter::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.__jniObject().object());
	}
	void XMLReaderAdapter::setDocumentLocator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.__jniObject().object());
	}
	void XMLReaderAdapter::startPrefixMapping(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"startPrefixMapping",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void XMLReaderAdapter::endPrefixMapping(jstring arg0)
	{
		__thiz.callMethod<void>(
			"endPrefixMapping",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void XMLReaderAdapter::startElement(jstring arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void XMLReaderAdapter::endElement(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"endElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void XMLReaderAdapter::skippedEntity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"skippedEntity",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void XMLReaderAdapter::setEntityResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.__jniObject().object());
	}
	void XMLReaderAdapter::setDTDHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.__jniObject().object());
	}
	void XMLReaderAdapter::setDocumentHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDocumentHandler",
			"(Lorg/xml/sax/DocumentHandler;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class XMLReaderAdapter : public __jni_impl::org::xml::sax::helpers::XMLReaderAdapter
	{
	public:
		XMLReaderAdapter(QAndroidJniObject obj) { __thiz = obj; }
		XMLReaderAdapter()
		{
			__constructor();
		}
		XMLReaderAdapter(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xml::sax::helpers

#endif // ORG_XML_SAX_HELPERS_XMLREADERADAPTER

