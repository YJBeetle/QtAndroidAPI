#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Properties.def.hpp"
#include "./Transformer.def.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Transformer::clearParameters() const
	{
		callMethod<void>(
			"clearParameters",
			"()V"
		);
	}
	inline JObject Transformer::getErrorListener() const
	{
		return callObjectMethod(
			"getErrorListener",
			"()Ljavax/xml/transform/ErrorListener;"
		);
	}
	inline java::util::Properties Transformer::getOutputProperties() const
	{
		return callObjectMethod(
			"getOutputProperties",
			"()Ljava/util/Properties;"
		);
	}
	inline JString Transformer::getOutputProperty(JString arg0) const
	{
		return callObjectMethod(
			"getOutputProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject Transformer::getParameter(JString arg0) const
	{
		return callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JObject Transformer::getURIResolver() const
	{
		return callObjectMethod(
			"getURIResolver",
			"()Ljavax/xml/transform/URIResolver;"
		);
	}
	inline void Transformer::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Transformer::setErrorListener(JObject arg0) const
	{
		callMethod<void>(
			"setErrorListener",
			"(Ljavax/xml/transform/ErrorListener;)V",
			arg0.object()
		);
	}
	inline void Transformer::setOutputProperties(java::util::Properties arg0) const
	{
		callMethod<void>(
			"setOutputProperties",
			"(Ljava/util/Properties;)V",
			arg0.object()
		);
	}
	inline void Transformer::setOutputProperty(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setOutputProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Transformer::setParameter(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void Transformer::setURIResolver(JObject arg0) const
	{
		callMethod<void>(
			"setURIResolver",
			"(Ljavax/xml/transform/URIResolver;)V",
			arg0.object()
		);
	}
	inline void Transformer::transform(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"transform",
			"(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::xml::transform

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::transform;
#endif
