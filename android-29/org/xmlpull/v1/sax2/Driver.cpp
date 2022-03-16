#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../xml/sax/InputSource.hpp"
#include "./Driver.hpp"

namespace org::xmlpull::v1::sax2
{
	// Fields
	
	// Constructors
	Driver::Driver()
		: JObject(
			"org.xmlpull.v1.sax2.Driver",
			"()V"
		) {}
	Driver::Driver(JObject arg0)
		: JObject(
			"org.xmlpull.v1.sax2.Driver",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Driver::getColumnNumber() const
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	JObject Driver::getContentHandler() const
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	JObject Driver::getDTDHandler() const
	{
		return callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	JObject Driver::getEntityResolver() const
	{
		return callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	JObject Driver::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean Driver::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jint Driver::getIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint Driver::getIndex(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint Driver::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint Driver::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	JString Driver::getLocalName(jint arg0) const
	{
		return callObjectMethod(
			"getLocalName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JObject Driver::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JString Driver::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	JString Driver::getQName(jint arg0) const
	{
		return callObjectMethod(
			"getQName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Driver::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	JString Driver::getType(jint arg0) const
	{
		return callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Driver::getType(JString arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Driver::getType(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString Driver::getURI(jint arg0) const
	{
		return callObjectMethod(
			"getURI",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Driver::getValue(jint arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Driver::getValue(JString arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Driver::getValue(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Driver::parse(JString arg0) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Driver::parse(org::xml::sax::InputSource arg0) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	void Driver::parseSubTree(JObject arg0) const
	{
		callMethod<void>(
			"parseSubTree",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.object()
		);
	}
	void Driver::setContentHandler(JObject arg0) const
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void Driver::setDTDHandler(JObject arg0) const
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	void Driver::setEntityResolver(JObject arg0) const
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	void Driver::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void Driver::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Driver::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
} // namespace org::xmlpull::v1::sax2

