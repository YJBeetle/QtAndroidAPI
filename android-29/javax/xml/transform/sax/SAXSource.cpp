#include "../../../../JString.hpp"
#include "../../../../org/xml/sax/InputSource.hpp"
#include "./SAXSource.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	JString SAXSource::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXSource",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	SAXSource::SAXSource()
		: JObject(
			"javax.xml.transform.sax.SAXSource",
			"()V"
		) {}
	SAXSource::SAXSource(org::xml::sax::InputSource arg0)
		: JObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		) {}
	SAXSource::SAXSource(JObject arg0, org::xml::sax::InputSource arg1)
		: JObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	org::xml::sax::InputSource SAXSource::sourceToInputSource(JObject arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.transform.sax.SAXSource",
			"sourceToInputSource",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/InputSource;",
			arg0.object()
		);
	}
	org::xml::sax::InputSource SAXSource::getInputSource() const
	{
		return callObjectMethod(
			"getInputSource",
			"()Lorg/xml/sax/InputSource;"
		);
	}
	JString SAXSource::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	JObject SAXSource::getXMLReader() const
	{
		return callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	jboolean SAXSource::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void SAXSource::setInputSource(org::xml::sax::InputSource arg0) const
	{
		callMethod<void>(
			"setInputSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	void SAXSource::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SAXSource::setXMLReader(JObject arg0) const
	{
		callMethod<void>(
			"setXMLReader",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::sax

