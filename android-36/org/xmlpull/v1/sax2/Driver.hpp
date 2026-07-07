#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../xml/sax/InputSource.def.hpp"
#include "./Driver.def.hpp"

namespace org::xmlpull::v1::sax2
{
	// Fields
	
	// Constructors
	inline Driver::Driver()
		: JObject(
			"org.xmlpull.v1.sax2.Driver",
			"()V"
		) {}
	inline Driver::Driver(JObject arg0)
		: JObject(
			"org.xmlpull.v1.sax2.Driver",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Driver::getColumnNumber() const
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	inline JObject Driver::getContentHandler() const
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	inline JObject Driver::getDTDHandler() const
	{
		return callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	inline JObject Driver::getEntityResolver() const
	{
		return callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	inline JObject Driver::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	inline jboolean Driver::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jint Driver::getIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint Driver::getIndex(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint Driver::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline jint Driver::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	inline JString Driver::getLocalName(jint arg0) const
	{
		return callObjectMethod(
			"getLocalName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JObject Driver::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JString Driver::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	inline JString Driver::getQName(jint arg0) const
	{
		return callObjectMethod(
			"getQName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Driver::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline JString Driver::getType(jint arg0) const
	{
		return callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Driver::getType(JString arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Driver::getType(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString Driver::getURI(jint arg0) const
	{
		return callObjectMethod(
			"getURI",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Driver::getValue(jint arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Driver::getValue(JString arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Driver::getValue(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Driver::parse(JString arg0) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Driver::parse(org::xml::sax::InputSource arg0) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	inline void Driver::parseSubTree(JObject arg0) const
	{
		callMethod<void>(
			"parseSubTree",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.object()
		);
	}
	inline void Driver::setContentHandler(JObject arg0) const
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	inline void Driver::setDTDHandler(JObject arg0) const
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	inline void Driver::setEntityResolver(JObject arg0) const
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	inline void Driver::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	inline void Driver::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Driver::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
} // namespace org::xmlpull::v1::sax2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xmlpull::v1::sax2;
#endif
