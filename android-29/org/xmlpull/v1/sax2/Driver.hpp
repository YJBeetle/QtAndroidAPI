#pragma once

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
		jint getColumnNumber();
		QAndroidJniObject getContentHandler();
		QAndroidJniObject getDTDHandler();
		QAndroidJniObject getEntityResolver();
		QAndroidJniObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jboolean getFeature(const QString &arg0);
		jint getIndex(jstring arg0);
		jint getIndex(const QString &arg0);
		jint getIndex(jstring arg0, jstring arg1);
		jint getIndex(const QString &arg0, const QString &arg1);
		jint getLength();
		jint getLineNumber();
		jstring getLocalName(jint arg0);
		jobject getProperty(jstring arg0);
		jobject getProperty(const QString &arg0);
		jstring getPublicId();
		jstring getQName(jint arg0);
		jstring getSystemId();
		jstring getType(jint arg0);
		jstring getType(jstring arg0);
		jstring getType(const QString &arg0);
		jstring getType(jstring arg0, jstring arg1);
		jstring getType(const QString &arg0, const QString &arg1);
		jstring getURI(jint arg0);
		jstring getValue(jint arg0);
		jstring getValue(jstring arg0);
		jstring getValue(const QString &arg0);
		jstring getValue(jstring arg0, jstring arg1);
		jstring getValue(const QString &arg0, const QString &arg1);
		void parse(jstring arg0);
		void parse(const QString &arg0);
		void parse(__jni_impl::org::xml::sax::InputSource arg0);
		void parseSubTree(__jni_impl::__JniBaseClass arg0);
		void setContentHandler(__jni_impl::__JniBaseClass arg0);
		void setDTDHandler(__jni_impl::__JniBaseClass arg0);
		void setEntityResolver(__jni_impl::__JniBaseClass arg0);
		void setErrorHandler(__jni_impl::__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setFeature(const QString &arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setProperty(const QString &arg0, jobject arg1);
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
			"()V"
		);
	}
	void Driver::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.sax2.Driver",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Driver::getColumnNumber()
	{
		return __thiz.callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	QAndroidJniObject Driver::getContentHandler()
	{
		return __thiz.callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	QAndroidJniObject Driver::getDTDHandler()
	{
		return __thiz.callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	QAndroidJniObject Driver::getEntityResolver()
	{
		return __thiz.callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	QAndroidJniObject Driver::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
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
	jboolean Driver::getFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jint Driver::getIndex(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jint Driver::getIndex(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint Driver::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint Driver::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
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
	jobject Driver::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Driver::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jstring Driver::getPublicId()
	{
		return __thiz.callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
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
	jstring Driver::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
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
	jstring Driver::getType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getType(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
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
	jstring Driver::getType(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	jstring Driver::getValue(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
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
	jstring Driver::getValue(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring Driver::getValue(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	void Driver::parse(jstring arg0)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Driver::parse(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void Driver::parseSubTree(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"parseSubTree",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.__jniObject().object()
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
	void Driver::setDTDHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void Driver::setEntityResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.__jniObject().object()
		);
	}
	void Driver::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
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
	void Driver::setFeature(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
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
	void Driver::setProperty(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
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

