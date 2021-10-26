#pragma once

#ifndef ORG_XML_SAX_INPUTSOURCE
#define ORG_XML_SAX_INPUTSOURCE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class Reader;
}

namespace __jni_impl::org::xml::sax
{
	class InputSource : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::Reader arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor();
		
		// Methods
		jboolean isEmpty();
		jstring getEncoding();
		void setEncoding(jstring arg0);
		void setEncoding(const QString &arg0);
		QAndroidJniObject getCharacterStream();
		void setCharacterStream(__jni_impl::java::io::Reader arg0);
		jstring getSystemId();
		void setSystemId(jstring arg0);
		void setSystemId(const QString &arg0);
		void setPublicId(jstring arg0);
		void setPublicId(const QString &arg0);
		jstring getPublicId();
		void setByteStream(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject getByteStream();
	};
} // namespace __jni_impl::org::xml::sax

#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/Reader.hpp"

namespace __jni_impl::org::xml::sax
{
	// Fields
	
	// Constructors
	void InputSource::__constructor(__jni_impl::java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	void InputSource::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void InputSource::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputSource::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InputSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"()V"
		);
	}
	
	// Methods
	jboolean InputSource::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jstring InputSource::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InputSource::setEncoding(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputSource::setEncoding(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject InputSource::getCharacterStream()
	{
		return __thiz.callObjectMethod(
			"getCharacterStream",
			"()Ljava/io/Reader;"
		);
	}
	void InputSource::setCharacterStream(__jni_impl::java::io::Reader arg0)
	{
		__thiz.callMethod<void>(
			"setCharacterStream",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	jstring InputSource::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InputSource::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputSource::setSystemId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InputSource::setPublicId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputSource::setPublicId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring InputSource::getPublicId()
	{
		return __thiz.callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InputSource::setByteStream(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"setByteStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject InputSource::getByteStream()
	{
		return __thiz.callObjectMethod(
			"getByteStream",
			"()Ljava/io/InputStream;"
		);
	}
} // namespace __jni_impl::org::xml::sax

namespace org::xml::sax
{
	class InputSource : public __jni_impl::org::xml::sax::InputSource
	{
	public:
		InputSource(QAndroidJniObject obj) { __thiz = obj; }
		InputSource(__jni_impl::java::io::Reader arg0)
		{
			__constructor(
				arg0);
		}
		InputSource(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		InputSource(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InputSource()
		{
			__constructor();
		}
	};
} // namespace org::xml::sax

#endif // ORG_XML_SAX_INPUTSOURCE

