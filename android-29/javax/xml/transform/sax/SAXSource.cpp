#include "../../../../org/xml/sax/InputSource.hpp"
#include "./SAXSource.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	jstring SAXSource::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.sax.SAXSource",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	SAXSource::SAXSource(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SAXSource::SAXSource()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXSource",
			"()V"
		);
	}
	SAXSource::SAXSource(org::xml::sax::InputSource arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object()
		);
	}
	SAXSource::SAXSource(__JniBaseClass arg0, org::xml::sax::InputSource arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SAXSource::sourceToInputSource(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.transform.sax.SAXSource",
			"sourceToInputSource",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/InputSource;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SAXSource::getInputSource()
	{
		return __thiz.callObjectMethod(
			"getInputSource",
			"()Lorg/xml/sax/InputSource;"
		);
	}
	jstring SAXSource::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SAXSource::getXMLReader()
	{
		return __thiz.callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	jboolean SAXSource::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void SAXSource::setInputSource(org::xml::sax::InputSource arg0)
	{
		__thiz.callMethod<void>(
			"setInputSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object()
		);
	}
	void SAXSource::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SAXSource::setXMLReader(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setXMLReader",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace javax::xml::transform::sax

