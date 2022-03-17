#pragma once

#include "../../../../JString.hpp"
#include "../../../../org/xml/sax/InputSource.def.hpp"
#include "./SAXSource.def.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	inline JString SAXSource::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXSource",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SAXSource::SAXSource()
		: JObject(
			"javax.xml.transform.sax.SAXSource",
			"()V"
		) {}
	inline SAXSource::SAXSource(org::xml::sax::InputSource arg0)
		: JObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		) {}
	inline SAXSource::SAXSource(JObject arg0, org::xml::sax::InputSource arg1)
		: JObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline org::xml::sax::InputSource SAXSource::sourceToInputSource(JObject arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.transform.sax.SAXSource",
			"sourceToInputSource",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/InputSource;",
			arg0.object()
		);
	}
	inline org::xml::sax::InputSource SAXSource::getInputSource() const
	{
		return callObjectMethod(
			"getInputSource",
			"()Lorg/xml/sax/InputSource;"
		);
	}
	inline JString SAXSource::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SAXSource::getXMLReader() const
	{
		return callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	inline jboolean SAXSource::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline void SAXSource::setInputSource(org::xml::sax::InputSource arg0) const
	{
		callMethod<void>(
			"setInputSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	inline void SAXSource::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SAXSource::setXMLReader(JObject arg0) const
	{
		callMethod<void>(
			"setXMLReader",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::sax

// Base class headers

