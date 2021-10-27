#pragma once

#ifndef JAVAX_XML_TRANSFORM_SAX_SAXRESULT
#define JAVAX_XML_TRANSFORM_SAX_SAXRESULT

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::xml::transform::sax
{
	class SAXResult : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject getHandler();
		QAndroidJniObject getLexicalHandler();
		jstring getSystemId();
		void setHandler(__jni_impl::__JniBaseClass arg0);
		void setLexicalHandler(__jni_impl::__JniBaseClass arg0);
		void setSystemId(jstring arg0);
		void setSystemId(const QString &arg0);
	};
} // namespace __jni_impl::javax::xml::transform::sax


namespace __jni_impl::javax::xml::transform::sax
{
	// Fields
	jstring SAXResult::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.sax.SAXResult",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void SAXResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXResult",
			"()V"
		);
	}
	void SAXResult::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXResult",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SAXResult::getHandler()
	{
		return __thiz.callObjectMethod(
			"getHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	QAndroidJniObject SAXResult::getLexicalHandler()
	{
		return __thiz.callObjectMethod(
			"getLexicalHandler",
			"()Lorg/xml/sax/ext/LexicalHandler;"
		);
	}
	jstring SAXResult::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SAXResult::setHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void SAXResult::setLexicalHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLexicalHandler",
			"(Lorg/xml/sax/ext/LexicalHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void SAXResult::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SAXResult::setSystemId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::javax::xml::transform::sax

namespace javax::xml::transform::sax
{
	class SAXResult : public __jni_impl::javax::xml::transform::sax::SAXResult
	{
	public:
		SAXResult(QAndroidJniObject obj) { __thiz = obj; }
		SAXResult()
		{
			__constructor();
		}
		SAXResult(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::xml::transform::sax

#endif // JAVAX_XML_TRANSFORM_SAX_SAXRESULT

