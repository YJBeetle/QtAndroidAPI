#include "../../../java/lang/ClassLoader.hpp"
#include "./Transformer.hpp"
#include "./TransformerFactory.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// QJniObject forward
	TransformerFactory::TransformerFactory(QJniObject obj) : JObject(obj) {}
	
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
	javax::xml::transform::TransformerFactory TransformerFactory::newInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/transform/TransformerFactory;",
			arg0,
			arg1.object()
		);
	}
	JObject TransformerFactory::getAssociatedStylesheet(JObject arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		return callObjectMethod(
			"getAssociatedStylesheet",
			"(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	jobject TransformerFactory::getAttribute(jstring arg0)
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	JObject TransformerFactory::getErrorListener()
	{
		return callObjectMethod(
			"getErrorListener",
			"()Ljavax/xml/transform/ErrorListener;"
		);
	}
	jboolean TransformerFactory::getFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	JObject TransformerFactory::getURIResolver()
	{
		return callObjectMethod(
			"getURIResolver",
			"()Ljavax/xml/transform/URIResolver;"
		);
	}
	JObject TransformerFactory::newTemplates(JObject arg0)
	{
		return callObjectMethod(
			"newTemplates",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Templates;",
			arg0.object()
		);
	}
	javax::xml::transform::Transformer TransformerFactory::newTransformer()
	{
		return callObjectMethod(
			"newTransformer",
			"()Ljavax/xml/transform/Transformer;"
		);
	}
	javax::xml::transform::Transformer TransformerFactory::newTransformer(JObject arg0)
	{
		return callObjectMethod(
			"newTransformer",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Transformer;",
			arg0.object()
		);
	}
	void TransformerFactory::setAttribute(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void TransformerFactory::setErrorListener(JObject arg0)
	{
		callMethod<void>(
			"setErrorListener",
			"(Ljavax/xml/transform/ErrorListener;)V",
			arg0.object()
		);
	}
	void TransformerFactory::setFeature(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void TransformerFactory::setURIResolver(JObject arg0)
	{
		callMethod<void>(
			"setURIResolver",
			"(Ljavax/xml/transform/URIResolver;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::transform

