#include "./Validator.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QJniObject forward
	Validator::Validator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Validator::getErrorHandler()
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean Validator::getFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jobject Validator::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	__JniBaseClass Validator::getResourceResolver()
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
	void Validator::setErrorHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void Validator::setFeature(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void Validator::setProperty(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Validator::setResourceResolver(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.object()
		);
	}
	void Validator::validate(__JniBaseClass arg0)
	{
		callMethod<void>(
			"validate",
			"(Ljavax/xml/transform/Source;)V",
			arg0.object()
		);
	}
	void Validator::validate(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"validate",
			"(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::xml::validation

