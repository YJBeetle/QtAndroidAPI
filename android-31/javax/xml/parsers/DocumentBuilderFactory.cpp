#include "../../../java/lang/ClassLoader.hpp"
#include "./DocumentBuilder.hpp"
#include "../validation/Schema.hpp"
#include "./DocumentBuilderFactory.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// QJniObject forward
	DocumentBuilderFactory::DocumentBuilderFactory(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0,
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
	javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newNSInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0,
			arg1.object()
		);
	}
	jobject DocumentBuilderFactory::getAttribute(jstring arg0)
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean DocumentBuilderFactory::getFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	javax::xml::validation::Schema DocumentBuilderFactory::getSchema()
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	jboolean DocumentBuilderFactory::isCoalescing()
	{
		return callMethod<jboolean>(
			"isCoalescing",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isExpandEntityReferences()
	{
		return callMethod<jboolean>(
			"isExpandEntityReferences",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isIgnoringComments()
	{
		return callMethod<jboolean>(
			"isIgnoringComments",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isIgnoringElementContentWhitespace()
	{
		return callMethod<jboolean>(
			"isIgnoringElementContentWhitespace",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isNamespaceAware()
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isValidating()
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isXIncludeAware()
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	javax::xml::parsers::DocumentBuilder DocumentBuilderFactory::newDocumentBuilder()
	{
		return callObjectMethod(
			"newDocumentBuilder",
			"()Ljavax/xml/parsers/DocumentBuilder;"
		);
	}
	void DocumentBuilderFactory::setAttribute(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void DocumentBuilderFactory::setCoalescing(jboolean arg0)
	{
		callMethod<void>(
			"setCoalescing",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setExpandEntityReferences(jboolean arg0)
	{
		callMethod<void>(
			"setExpandEntityReferences",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setFeature(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void DocumentBuilderFactory::setIgnoringComments(jboolean arg0)
	{
		callMethod<void>(
			"setIgnoringComments",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setIgnoringElementContentWhitespace(jboolean arg0)
	{
		callMethod<void>(
			"setIgnoringElementContentWhitespace",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setNamespaceAware(jboolean arg0)
	{
		callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setSchema(javax::xml::validation::Schema arg0)
	{
		callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.object()
		);
	}
	void DocumentBuilderFactory::setValidating(jboolean arg0)
	{
		callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setXIncludeAware(jboolean arg0)
	{
		callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::xml::parsers

