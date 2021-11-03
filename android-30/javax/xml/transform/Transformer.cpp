#include "../../../java/util/Properties.hpp"
#include "./Transformer.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// QAndroidJniObject forward
	Transformer::Transformer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Transformer::clearParameters()
	{
		callMethod<void>(
			"clearParameters",
			"()V"
		);
	}
	JObject Transformer::getErrorListener()
	{
		return callObjectMethod(
			"getErrorListener",
			"()Ljavax/xml/transform/ErrorListener;"
		);
	}
	java::util::Properties Transformer::getOutputProperties()
	{
		return callObjectMethod(
			"getOutputProperties",
			"()Ljava/util/Properties;"
		);
	}
	jstring Transformer::getOutputProperty(jstring arg0)
	{
		return callObjectMethod(
			"getOutputProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jobject Transformer::getParameter(jstring arg0)
	{
		return callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	JObject Transformer::getURIResolver()
	{
		return callObjectMethod(
			"getURIResolver",
			"()Ljavax/xml/transform/URIResolver;"
		);
	}
	void Transformer::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Transformer::setErrorListener(JObject arg0)
	{
		callMethod<void>(
			"setErrorListener",
			"(Ljavax/xml/transform/ErrorListener;)V",
			arg0.object()
		);
	}
	void Transformer::setOutputProperties(java::util::Properties arg0)
	{
		callMethod<void>(
			"setOutputProperties",
			"(Ljava/util/Properties;)V",
			arg0.object()
		);
	}
	void Transformer::setOutputProperty(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"setOutputProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Transformer::setParameter(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Transformer::setURIResolver(JObject arg0)
	{
		callMethod<void>(
			"setURIResolver",
			"(Ljavax/xml/transform/URIResolver;)V",
			arg0.object()
		);
	}
	void Transformer::transform(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"transform",
			"(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::xml::transform

