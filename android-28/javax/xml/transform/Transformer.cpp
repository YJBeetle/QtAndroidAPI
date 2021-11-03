#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Properties.hpp"
#include "./Transformer.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// QJniObject forward
	Transformer::Transformer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Transformer::clearParameters() const
	{
		callMethod<void>(
			"clearParameters",
			"()V"
		);
	}
	JObject Transformer::getErrorListener() const
	{
		return callObjectMethod(
			"getErrorListener",
			"()Ljavax/xml/transform/ErrorListener;"
		);
	}
	java::util::Properties Transformer::getOutputProperties() const
	{
		return callObjectMethod(
			"getOutputProperties",
			"()Ljava/util/Properties;"
		);
	}
	JString Transformer::getOutputProperty(JString arg0) const
	{
		return callObjectMethod(
			"getOutputProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject Transformer::getParameter(JString arg0) const
	{
		return callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JObject Transformer::getURIResolver() const
	{
		return callObjectMethod(
			"getURIResolver",
			"()Ljavax/xml/transform/URIResolver;"
		);
	}
	void Transformer::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Transformer::setErrorListener(JObject arg0) const
	{
		callMethod<void>(
			"setErrorListener",
			"(Ljavax/xml/transform/ErrorListener;)V",
			arg0.object()
		);
	}
	void Transformer::setOutputProperties(java::util::Properties arg0) const
	{
		callMethod<void>(
			"setOutputProperties",
			"(Ljava/util/Properties;)V",
			arg0.object()
		);
	}
	void Transformer::setOutputProperty(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setOutputProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Transformer::setParameter(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	void Transformer::setURIResolver(JObject arg0) const
	{
		callMethod<void>(
			"setURIResolver",
			"(Ljavax/xml/transform/URIResolver;)V",
			arg0.object()
		);
	}
	void Transformer::transform(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"transform",
			"(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::xml::transform

