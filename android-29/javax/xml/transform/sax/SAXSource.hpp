#pragma once

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
		void __constructor();
		void __constructor(__jni_impl::org::xml::sax::InputSource arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::org::xml::sax::InputSource arg1);
		
		// Methods
		static QAndroidJniObject sourceToInputSource(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getInputSource();
		jstring getSystemId();
		QAndroidJniObject getXMLReader();
		jboolean isEmpty();
		void setInputSource(__jni_impl::org::xml::sax::InputSource arg0);
		void setSystemId(jstring arg0);
		void setSystemId(const QString &arg0);
		void setXMLReader(__jni_impl::__JniBaseClass arg0);
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
	void SAXSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXSource",
			"()V"
		);
	}
	void SAXSource::__constructor(__jni_impl::org::xml::sax::InputSource arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object()
		);
	}
	void SAXSource::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::org::xml::sax::InputSource arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXSource",
			"(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SAXSource::sourceToInputSource(__jni_impl::__JniBaseClass arg0)
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
	void SAXSource::setInputSource(__jni_impl::org::xml::sax::InputSource arg0)
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
	void SAXSource::setSystemId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
} // namespace __jni_impl::javax::xml::transform::sax

namespace javax::xml::transform::sax
{
	class SAXSource : public __jni_impl::javax::xml::transform::sax::SAXSource
	{
	public:
		SAXSource(QAndroidJniObject obj) { __thiz = obj; }
		SAXSource()
		{
			__constructor();
		}
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
	};
} // namespace javax::xml::transform::sax

