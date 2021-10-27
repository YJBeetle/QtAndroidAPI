#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace __jni_impl::org::xmlpull::v1
{
	class XmlPullParserException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2);
		void __constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2);
		
		// Methods
		jint getColumnNumber();
		jthrowable getDetail();
		jint getLineNumber();
		void printStackTrace();
	};
} // namespace __jni_impl::org::xmlpull::v1


namespace __jni_impl::org::xmlpull::v1
{
	// Fields
	
	// Constructors
	void XmlPullParserException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void XmlPullParserException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void XmlPullParserException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;Lorg/xmlpull/v1/XmlPullParser;Ljava/lang/Throwable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void XmlPullParserException::__constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;Lorg/xmlpull/v1/XmlPullParser;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	jint XmlPullParserException::getColumnNumber()
	{
		return __thiz.callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jthrowable XmlPullParserException::getDetail()
	{
		return __thiz.callObjectMethod(
			"getDetail",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jint XmlPullParserException::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	void XmlPullParserException::printStackTrace()
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
} // namespace __jni_impl::org::xmlpull::v1

namespace org::xmlpull::v1
{
	class XmlPullParserException : public __jni_impl::org::xmlpull::v1::XmlPullParserException
	{
	public:
		XmlPullParserException(QAndroidJniObject obj) { __thiz = obj; }
		XmlPullParserException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		XmlPullParserException(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace org::xmlpull::v1

