#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Validator.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QJniObject forward
	Validator::Validator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Validator::getErrorHandler()
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean Validator::getFeature(JString arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject Validator::getProperty(JString arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JObject Validator::getResourceResolver()
	{
		return callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;"
		);
	}
	void Validator::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Validator::setErrorHandler(JObject arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void Validator::setFeature(JString arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Validator::setProperty(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	void Validator::setResourceResolver(JObject arg0)
	{
		callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.object()
		);
	}
	void Validator::validate(JObject arg0)
	{
		callMethod<void>(
			"validate",
			"(Ljavax/xml/transform/Source;)V",
			arg0.object()
		);
	}
	void Validator::validate(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"validate",
			"(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::xml::validation

