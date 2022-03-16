#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XmlPullParserException.def.hpp"

namespace org::xmlpull::v1
{
	// Fields
	
	// Constructors
	inline XmlPullParserException::XmlPullParserException(JString arg0)
		: java::lang::Exception(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline XmlPullParserException::XmlPullParserException(JString arg0, JObject arg1, JThrowable arg2)
		: java::lang::Exception(
			"org.xmlpull.v1.XmlPullParserException",
			"(Ljava/lang/String;Lorg/xmlpull/v1/XmlPullParser;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline jint XmlPullParserException::getColumnNumber() const
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	inline JThrowable XmlPullParserException::getDetail() const
	{
		return callObjectMethod(
			"getDetail",
			"()Ljava/lang/Throwable;"
		);
	}
	inline jint XmlPullParserException::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	inline void XmlPullParserException::printStackTrace() const
	{
		callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
} // namespace org::xmlpull::v1

// Base class headers
#include "../../../java/lang/Exception.hpp"

