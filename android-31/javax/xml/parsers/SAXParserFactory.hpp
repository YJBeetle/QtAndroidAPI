#pragma once

#include "../../../java/lang/ClassLoader.def.hpp"
#include "../../../JString.hpp"
#include "./SAXParser.def.hpp"
#include "../validation/Schema.def.hpp"
#include "./SAXParserFactory.def.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::xml::parsers::SAXParserFactory SAXParserFactory::newDefaultInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newDefaultInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	inline javax::xml::parsers::SAXParserFactory SAXParserFactory::newDefaultNSInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newDefaultNSInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	inline javax::xml::parsers::SAXParserFactory SAXParserFactory::newInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	inline javax::xml::parsers::SAXParserFactory SAXParserFactory::newInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline javax::xml::parsers::SAXParserFactory SAXParserFactory::newNSInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newNSInstance",
			"()Ljavax/xml/parsers/SAXParserFactory;"
		);
	}
	inline javax::xml::parsers::SAXParserFactory SAXParserFactory::newNSInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.parsers.SAXParserFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean SAXParserFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline javax::xml::validation::Schema SAXParserFactory::getSchema() const
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	inline jboolean SAXParserFactory::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	inline jboolean SAXParserFactory::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	inline jboolean SAXParserFactory::isXIncludeAware() const
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	inline javax::xml::parsers::SAXParser SAXParserFactory::newSAXParser() const
	{
		return callObjectMethod(
			"newSAXParser",
			"()Ljavax/xml/parsers/SAXParser;"
		);
	}
	inline void SAXParserFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void SAXParserFactory::setNamespaceAware(jboolean arg0) const
	{
		callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	inline void SAXParserFactory::setSchema(javax::xml::validation::Schema arg0) const
	{
		callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.object()
		);
	}
	inline void SAXParserFactory::setValidating(jboolean arg0) const
	{
		callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
	inline void SAXParserFactory::setXIncludeAware(jboolean arg0) const
	{
		callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::xml::parsers

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::parsers;
#endif
