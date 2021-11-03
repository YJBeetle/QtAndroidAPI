#include "./XmlPullParserException.hpp"

namespace org::xmlpull::v1
{
	// Fields
	
	// QJniObject forward
	XmlPullParserException::XmlPullParserException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	XmlPullParserException::XmlPullParserException(jstring arg0)
		: java::lang::Exception(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	XmlPullParserException::XmlPullParserException(jstring arg0, JObject arg1, jthrowable arg2)
		: java::lang::Exception(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;Lorg/xmlpull/v1/XmlPullParser;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jint XmlPullParserException::getColumnNumber()
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jthrowable XmlPullParserException::getDetail()
	{
		return callObjectMethod(
			"getDetail",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jint XmlPullParserException::getLineNumber()
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	void XmlPullParserException::printStackTrace()
	{
		callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
} // namespace org::xmlpull::v1

