#pragma once

#ifndef JAVAX_XML_TRANSFORM_SAX_SAXSOURCE
#define JAVAX_XML_TRANSFORM_SAX_SAXSOURCE

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::org::xml::sax
{
	class InputSource;
}

namespace __jni_impl::javax::xml::transform::sax
{
	class SAXSource : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// Constructors
		void __constructor(__jni_impl::org::xml::sax::InputSource arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::org::xml::sax::InputSource arg1);
		void __constructor();
		
		// Methods
		jboolean isEmpty();
		jstring getSystemId();
		void setSystemId(jstring arg0);
		QAndroidJniObject getInputSource();
		void setXMLReader(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getXMLReader();
		void setInputSource(__jni_impl::org::xml::sax::InputSource arg0);
		static QAndroidJniObject sourceToInputSource(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::javax::xml::transform::sax

#include "../../../../org/xml/sax/InputSource.hpp"

namespace __jni_impl::javax::xml::transform::sax
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
	
	// Constructors
	void SAXSource::__constructor(__jni_impl::org::xml::sax::InputSource arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object());
	}
	void SAXSource::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::org::xml::sax::InputSource arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void SAXSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXSource",
			"()V");
	}
	
	// Methods
	jboolean SAXSource::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jstring SAXSource::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SAXSource::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject SAXSource::getInputSource()
	{
		return __thiz.callObjectMethod(
			"getInputSource",
			"()Lorg/xml/sax/InputSource;"
		);
	}
	void SAXSource::setXMLReader(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setXMLReader",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SAXSource::getXMLReader()
	{
		return __thiz.callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	void SAXSource::setInputSource(__jni_impl::org::xml::sax::InputSource arg0)
	{
		__thiz.callMethod<void>(
			"setInputSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SAXSource::sourceToInputSource(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.transform.sax.SAXSource",
			"sourceToInputSource",
			"(Ljavax/xml/transform/Source;)Lorg/xml/sax/InputSource;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::xml::transform::sax

namespace javax::xml::transform::sax
{
	class SAXSource : public __jni_impl::javax::xml::transform::sax::SAXSource
	{
	public:
		SAXSource(QAndroidJniObject obj) { __thiz = obj; }
		SAXSource(__jni_impl::org::xml::sax::InputSource arg0)
		{
			__constructor(
				arg0);
		}
		SAXSource(__jni_impl::__JniBaseClass arg0, __jni_impl::org::xml::sax::InputSource arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SAXSource()
		{
			__constructor();
		}
	};
} // namespace javax::xml::transform::sax

#endif // JAVAX_XML_TRANSFORM_SAX_SAXSOURCE

