#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::org::xml::sax
{
	class InputSource;
}
namespace __jni_impl::org::xml::sax
{
	class SAXParseException;
}
namespace __jni_impl::org::xml::sax::helpers
{
	class AttributesImpl;
}
namespace __jni_impl::org::xml::sax::helpers
{
	class NamespaceSupport;
}

namespace __jni_impl::org::xml::sax::helpers
{
	class ParserAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(jstring arg0);
		void endElement(const QString &arg0);
		QAndroidJniObject getContentHandler();
		QAndroidJniObject getDTDHandler();
		QAndroidJniObject getEntityResolver();
		QAndroidJniObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jboolean getFeature(const QString &arg0);
		jobject getProperty(jstring arg0);
		jobject getProperty(const QString &arg0);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void parse(jstring arg0);
		void parse(const QString &arg0);
		void parse(__jni_impl::org::xml::sax::InputSource arg0);
		void processingInstruction(jstring arg0, jstring arg1);
		void processingInstruction(const QString &arg0, const QString &arg1);
		void setContentHandler(__jni_impl::__JniBaseClass arg0);
		void setDTDHandler(__jni_impl::__JniBaseClass arg0);
		void setDocumentLocator(__jni_impl::__JniBaseClass arg0);
		void setEntityResolver(__jni_impl::__JniBaseClass arg0);
		void setErrorHandler(__jni_impl::__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setFeature(const QString &arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setProperty(const QString &arg0, jobject arg1);
		void startDocument();
		void startElement(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void startElement(const QString &arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::org::xml::sax::helpers

#include "../InputSource.hpp"
#include "../SAXParseException.hpp"
#include "./AttributesImpl.hpp"
#include "./NamespaceSupport.hpp"

namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	void ParserAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.ParserAdapter",
			"()V"
		);
	}
	void ParserAdapter::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.ParserAdapter",
			"(Lorg/xml/sax/Parser;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ParserAdapter::characters(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"characters",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ParserAdapter::endDocument()
	{
		__thiz.callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void ParserAdapter::endElement(jstring arg0)
	{
		__thiz.callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ParserAdapter::endElement(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ParserAdapter::getContentHandler()
	{
		return __thiz.callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	QAndroidJniObject ParserAdapter::getDTDHandler()
	{
		return __thiz.callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	QAndroidJniObject ParserAdapter::getEntityResolver()
	{
		return __thiz.callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	QAndroidJniObject ParserAdapter::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean ParserAdapter::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ParserAdapter::getFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject ParserAdapter::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ParserAdapter::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	void ParserAdapter::ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ParserAdapter::parse(jstring arg0)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ParserAdapter::parse(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ParserAdapter::parse(__jni_impl::org::xml::sax::InputSource arg0)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object()
		);
	}
	void ParserAdapter::processingInstruction(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ParserAdapter::processingInstruction(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ParserAdapter::setContentHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void ParserAdapter::setDTDHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void ParserAdapter::setDocumentLocator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.__jniObject().object()
		);
	}
	void ParserAdapter::setEntityResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.__jniObject().object()
		);
	}
	void ParserAdapter::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void ParserAdapter::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void ParserAdapter::setFeature(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ParserAdapter::setProperty(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void ParserAdapter::setProperty(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ParserAdapter::startDocument()
	{
		__thiz.callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void ParserAdapter::startElement(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ParserAdapter::startElement(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class ParserAdapter : public __jni_impl::org::xml::sax::helpers::ParserAdapter
	{
	public:
		ParserAdapter(QAndroidJniObject obj) { __thiz = obj; }
		ParserAdapter()
		{
			__constructor();
		}
		ParserAdapter(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xml::sax::helpers

