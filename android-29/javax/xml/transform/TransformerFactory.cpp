#include "../../../java/lang/ClassLoader.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Transformer.hpp"
#include "./TransformerFactory.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// QAndroidJniObject forward
	TransformerFactory::TransformerFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::xml::transform::TransformerFactory TransformerFactory::newDefaultInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newDefaultInstance",
			"()Ljavax/xml/transform/TransformerFactory;"
		);
	}
	javax::xml::transform::TransformerFactory TransformerFactory::newInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newInstance",
			"()Ljavax/xml/transform/TransformerFactory;"
		);
	}
	javax::xml::transform::TransformerFactory TransformerFactory::newInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/transform/TransformerFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject TransformerFactory::getAssociatedStylesheet(JObject arg0, JString arg1, JString arg2, JString arg3) const
	{
		return callObjectMethod(
			"getAssociatedStylesheet",
			"(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	JObject TransformerFactory::getAttribute(JString arg0) const
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JObject TransformerFactory::getErrorListener() const
	{
		return callObjectMethod(
			"getErrorListener",
			"()Ljavax/xml/transform/ErrorListener;"
		);
	}
	jboolean TransformerFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject TransformerFactory::getURIResolver() const
	{
		return callObjectMethod(
			"getURIResolver",
			"()Ljavax/xml/transform/URIResolver;"
		);
	}
	JObject TransformerFactory::newTemplates(JObject arg0) const
	{
		return callObjectMethod(
			"newTemplates",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Templates;",
			arg0.object()
		);
	}
	javax::xml::transform::Transformer TransformerFactory::newTransformer() const
	{
		return callObjectMethod(
			"newTransformer",
			"()Ljavax/xml/transform/Transformer;"
		);
	}
	javax::xml::transform::Transformer TransformerFactory::newTransformer(JObject arg0) const
	{
		return callObjectMethod(
			"newTransformer",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Transformer;",
			arg0.object()
		);
	}
	void TransformerFactory::setAttribute(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	void TransformerFactory::setErrorListener(JObject arg0) const
	{
		callMethod<void>(
			"setErrorListener",
			"(Ljavax/xml/transform/ErrorListener;)V",
			arg0.object()
		);
	}
	void TransformerFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void TransformerFactory::setURIResolver(JObject arg0) const
	{
		callMethod<void>(
			"setURIResolver",
			"(Ljavax/xml/transform/URIResolver;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::transform

