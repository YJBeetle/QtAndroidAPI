#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XmlPullParserException.hpp"

namespace org::xmlpull::v1
{
	// Fields
	
	// QJniObject forward
	XmlPullParserException::XmlPullParserException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	XmlPullParserException::XmlPullParserException(JString arg0)
		: java::lang::Exception(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	XmlPullParserException::XmlPullParserException(JString arg0, JObject arg1, JThrowable arg2)
		: java::lang::Exception(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;Lorg/xmlpull/v1/XmlPullParser;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	jint XmlPullParserException::getColumnNumber() const
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	JThrowable XmlPullParserException::getDetail() const
	{
		return callObjectMethod(
			"getDetail",
			"()Ljava/lang/Throwable;"
		);
	}
	jint XmlPullParserException::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	void XmlPullParserException::printStackTrace() const
	{
		callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
} // namespace org::xmlpull::v1

