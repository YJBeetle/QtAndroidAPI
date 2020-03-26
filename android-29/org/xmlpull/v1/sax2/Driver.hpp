#pragma once

#ifndef ORG_XMLPULL_V1_SAX2_DRIVER
#define ORG_XMLPULL_V1_SAX2_DRIVER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::org::xml::sax
{
	class InputSource;
}

namespace __jni_impl::org::xmlpull::v1::sax2
{
	class Driver : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jobject getProperty(jstring arg0);
		jint getLength();
		jstring getValue(jint arg0);
		jstring getValue(jstring arg0, jstring arg1);
		jstring getValue(jstring arg0);
		void setProperty(jstring arg0, jobject arg1);
		jstring getType(jstring arg0, jstring arg1);
		jstring getType(jstring arg0);
		jstring getType(jint arg0);
		jint getLineNumber();
		jint getIndex(jstring arg0, jstring arg1);
		jint getIndex(jstring arg0);
		void parse(jstring arg0);
		void parse(__jni_impl::org::xml::sax::InputSource arg0);
		jint getColumnNumber();
		jstring getSystemId();
		jstring getURI(jint arg0);
		jstring getQName(jint arg0);
		void parseSubTree(__jni_impl::__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		jboolean getFeature(jstring arg0);
		jstring getPublicId();
		void setEntityResolver(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getEntityResolver();
		void setDTDHandler(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getDTDHandler();
		void setContentHandler(__jni_impl::__JniBaseClass arg0);
		jstring getLocalName(jint arg0);
		void setErrorHandler(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getErrorHandler();
		QAndroidJniObject getContentHandler();
	};
} // namespace __jni_impl::org::xmlpull::v1::sax2

#include "../../../xml/sax/InputSource.hpp"

namespace __jni_impl::org::xmlpull::v1::sax2
{
	// Fields
	
	// Constructors
	void Driver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.sax2.Driver",
			"()V");
	}
	void Driver::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.sax2.Driver",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jobject Driver::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint Driver::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jstring Driver::getValue(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getValue(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Driver::getValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Driver::setProperty(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jstring Driver::getType(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Driver::getType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Driver::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	jint Driver::getIndex(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Driver::getIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	void Driver::parse(jstring arg0)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Driver::parse(__jni_impl::org::xml::sax::InputSource arg0)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object()
		);
	}
	jint Driver::getColumnNumber()
	{
		return __thiz.callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jstring Driver::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Driver::getURI(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getURI",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getQName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getQName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Driver::parseSubTree(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"parseSubTree",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.__jniObject().object()
		);
	}
	void Driver::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	jboolean Driver::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring Driver::getPublicId()
	{
		return __thiz.callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Driver::setEntityResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Driver::getEntityResolver()
	{
		return __thiz.callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	void Driver::setDTDHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Driver::getDTDHandler()
	{
		return __thiz.callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	void Driver::setContentHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Driver::getLocalName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLocalName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Driver::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Driver::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	QAndroidJniObject Driver::getContentHandler()
	{
		return __thiz.callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
} // namespace __jni_impl::org::xmlpull::v1::sax2

namespace org::xmlpull::v1::sax2
{
	class Driver : public __jni_impl::org::xmlpull::v1::sax2::Driver
	{
	public:
		Driver(QAndroidJniObject obj) { __thiz = obj; }
		Driver()
		{
			__constructor();
		}
		Driver(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xmlpull::v1::sax2

#endif // ORG_XMLPULL_V1_SAX2_DRIVER

