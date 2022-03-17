#pragma once

#include "../../../java/lang/ClassLoader.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DocumentBuilder.def.hpp"
#include "../validation/Schema.def.hpp"
#include "./DocumentBuilderFactory.def.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newDefaultInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	inline javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newDefaultNSInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	inline javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	inline javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newNSInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	inline javax::xml::parsers::DocumentBuilderFactory DocumentBuilderFactory::newNSInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject DocumentBuilderFactory::getAttribute(JString arg0) const
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline jboolean DocumentBuilderFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline javax::xml::validation::Schema DocumentBuilderFactory::getSchema() const
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	inline jboolean DocumentBuilderFactory::isCoalescing() const
	{
		return callMethod<jboolean>(
			"isCoalescing",
			"()Z"
		);
	}
	inline jboolean DocumentBuilderFactory::isExpandEntityReferences() const
	{
		return callMethod<jboolean>(
			"isExpandEntityReferences",
			"()Z"
		);
	}
	inline jboolean DocumentBuilderFactory::isIgnoringComments() const
	{
		return callMethod<jboolean>(
			"isIgnoringComments",
			"()Z"
		);
	}
	inline jboolean DocumentBuilderFactory::isIgnoringElementContentWhitespace() const
	{
		return callMethod<jboolean>(
			"isIgnoringElementContentWhitespace",
			"()Z"
		);
	}
	inline jboolean DocumentBuilderFactory::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	inline jboolean DocumentBuilderFactory::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	inline jboolean DocumentBuilderFactory::isXIncludeAware() const
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	inline javax::xml::parsers::DocumentBuilder DocumentBuilderFactory::newDocumentBuilder() const
	{
		return callObjectMethod(
			"newDocumentBuilder",
			"()Ljavax/xml/parsers/DocumentBuilder;"
		);
	}
	inline void DocumentBuilderFactory::setAttribute(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void DocumentBuilderFactory::setCoalescing(jboolean arg0) const
	{
		callMethod<void>(
			"setCoalescing",
			"(Z)V",
			arg0
		);
	}
	inline void DocumentBuilderFactory::setExpandEntityReferences(jboolean arg0) const
	{
		callMethod<void>(
			"setExpandEntityReferences",
			"(Z)V",
			arg0
		);
	}
	inline void DocumentBuilderFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void DocumentBuilderFactory::setIgnoringComments(jboolean arg0) const
	{
		callMethod<void>(
			"setIgnoringComments",
			"(Z)V",
			arg0
		);
	}
	inline void DocumentBuilderFactory::setIgnoringElementContentWhitespace(jboolean arg0) const
	{
		callMethod<void>(
			"setIgnoringElementContentWhitespace",
			"(Z)V",
			arg0
		);
	}
	inline void DocumentBuilderFactory::setNamespaceAware(jboolean arg0) const
	{
		callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	inline void DocumentBuilderFactory::setSchema(javax::xml::validation::Schema arg0) const
	{
		callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.object()
		);
	}
	inline void DocumentBuilderFactory::setValidating(jboolean arg0) const
	{
		callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
	inline void DocumentBuilderFactory::setXIncludeAware(jboolean arg0) const
	{
		callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::xml::parsers

// Base class headers

