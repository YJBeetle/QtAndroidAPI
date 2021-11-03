#include "../../../java/lang/ClassLoader.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DocumentBuilder.hpp"
#include "../validation/Schema.hpp"
#include "./DocumentBuilderFactory.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// QJniObject forward
	DocumentBuilderFactory::DocumentBuilderFactory(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newDefaultInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newDefaultNSInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newNSInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newNSInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject DocumentBuilderFactory::getAttribute(JString arg0) const
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	jboolean DocumentBuilderFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	javax::xml::validation::Schema DocumentBuilderFactory::getSchema() const
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	jboolean DocumentBuilderFactory::isCoalescing() const
	{
		return callMethod<jboolean>(
			"isCoalescing",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isExpandEntityReferences() const
	{
		return callMethod<jboolean>(
			"isExpandEntityReferences",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isIgnoringComments() const
	{
		return callMethod<jboolean>(
			"isIgnoringComments",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isIgnoringElementContentWhitespace() const
	{
		return callMethod<jboolean>(
			"isIgnoringElementContentWhitespace",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isXIncludeAware() const
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	javax::xml::parsers::DocumentBuilder DocumentBuilderFactory::newDocumentBuilder() const
	{
		return callObjectMethod(
			"newDocumentBuilder",
			"()Ljavax/xml/parsers/DocumentBuilder;"
		);
	}
	void DocumentBuilderFactory::setAttribute(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	void DocumentBuilderFactory::setCoalescing(jboolean arg0) const
	{
		callMethod<void>(
			"setCoalescing",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setExpandEntityReferences(jboolean arg0) const
	{
		callMethod<void>(
			"setExpandEntityReferences",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void DocumentBuilderFactory::setIgnoringComments(jboolean arg0) const
	{
		callMethod<void>(
			"setIgnoringComments",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setIgnoringElementContentWhitespace(jboolean arg0) const
	{
		callMethod<void>(
			"setIgnoringElementContentWhitespace",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setNamespaceAware(jboolean arg0) const
	{
		callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setSchema(javax::xml::validation::Schema arg0) const
	{
		callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.object()
		);
	}
	void DocumentBuilderFactory::setValidating(jboolean arg0) const
	{
		callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setXIncludeAware(jboolean arg0) const
	{
		callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::xml::parsers

