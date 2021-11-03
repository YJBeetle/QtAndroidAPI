#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TypeInfoProvider.hpp"
#include "./ValidatorHandler.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QAndroidJniObject forward
	ValidatorHandler::ValidatorHandler(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject ValidatorHandler::getContentHandler()
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	JObject ValidatorHandler::getErrorHandler()
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean ValidatorHandler::getFeature(JString arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject ValidatorHandler::getProperty(JString arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JObject ValidatorHandler::getResourceResolver()
	{
		return callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;"
		);
	}
	javax::xml::validation::TypeInfoProvider ValidatorHandler::getTypeInfoProvider()
	{
		return callObjectMethod(
			"getTypeInfoProvider",
			"()Ljavax/xml/validation/TypeInfoProvider;"
		);
	}
	void ValidatorHandler::setContentHandler(JObject arg0)
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void ValidatorHandler::setErrorHandler(JObject arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void ValidatorHandler::setFeature(JString arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void ValidatorHandler::setProperty(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	void ValidatorHandler::setResourceResolver(JObject arg0)
	{
		callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::validation

