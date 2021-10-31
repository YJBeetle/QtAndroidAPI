#include "../../../../org/xml/sax/InputSource.hpp"
#include "./SAXSource.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	jstring SAXSource::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXSource",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	SAXSource::SAXSource(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SAXSource::SAXSource()
		: __JniBaseClass(
			"javax.xml.transform.sax.SAXSource",
			"()V"
		) {}
	SAXSource::SAXSource(org::xml::sax::InputSource arg0)
		: __JniBaseClass(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		) {}
	SAXSource::SAXSource(__JniBaseClass arg0, org::xml::sax::InputSource arg1)
		: __JniBaseClass(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	org::xml::sax::InputSource SAXSource::sourceToInputSource(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.transform.sax.SAXSource",
			"sourceToInputSource",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/InputSource;",
			arg0.object()
		);
	}
	org::xml::sax::InputSource SAXSource::getInputSource()
	{
		return callObjectMethod(
			"getInputSource",
			"()Lorg/xml/sax/InputSource;"
		);
	}
	jstring SAXSource::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass SAXSource::getXMLReader()
	{
		return callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	jboolean SAXSource::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void SAXSource::setInputSource(org::xml::sax::InputSource arg0)
	{
		callMethod<void>(
			"setInputSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	void SAXSource::setSystemId(jstring arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SAXSource::setXMLReader(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setXMLReader",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::sax

