#include "./XmlPullParserException.hpp"

namespace org::xmlpull::v1
{
	// Fields
	
	XmlPullParserException::XmlPullParserException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	XmlPullParserException::XmlPullParserException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	XmlPullParserException::XmlPullParserException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	XmlPullParserException::XmlPullParserException(jstring &arg0, __JniBaseClass &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;Lorg/xmlpull/v1/XmlPullParser;Ljava/lang/Throwable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	XmlPullParserException::XmlPullParserException(const QString &arg0, __JniBaseClass &arg1, jthrowable &arg2)
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
} // namespace org::xmlpull::v1

