#pragma once

#ifndef ORG_XMLPULL_V1_XMLPULLPARSEREXCEPTION
#define ORG_XMLPULL_V1_XMLPULLPARSEREXCEPTION

#include "../../../java/lang/Exception.hpp"


namespace __jni_impl::org::xmlpull::v1
{
	class XmlPullParserException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2);
		
		// Methods
		void printStackTrace();
		jint getLineNumber();
		jint getColumnNumber();
		QAndroidJniObject getDetail();
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
			arg0);
	}
	void XmlPullParserException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;Lorg/xmlpull/v1/XmlPullParser;Ljava/lang/Throwable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	
	// Methods
	void XmlPullParserException::printStackTrace()
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"()V");
	}
	jint XmlPullParserException::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I");
	}
	jint XmlPullParserException::getColumnNumber()
	{
		return __thiz.callMethod<jint>(
			"getColumnNumber",
			"()I");
	}
	QAndroidJniObject XmlPullParserException::getDetail()
	{
		return __thiz.callObjectMethod(
			"getDetail",
			"()Ljava/lang/Throwable;");
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

#endif // ORG_XMLPULL_V1_XMLPULLPARSEREXCEPTION

