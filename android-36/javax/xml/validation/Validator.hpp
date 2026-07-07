#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Validator.def.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Validator::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	inline jboolean Validator::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject Validator::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JObject Validator::getResourceResolver() const
	{
		return callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;"
		);
	}
	inline void Validator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Validator::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	inline void Validator::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Validator::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void Validator::setResourceResolver(JObject arg0) const
	{
		callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.object()
		);
	}
	inline void Validator::validate(JObject arg0) const
	{
		callMethod<void>(
			"validate",
			"(Ljavax/xml/transform/Source;)V",
			arg0.object()
		);
	}
	inline void Validator::validate(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"validate",
			"(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::xml::validation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::validation;
#endif
