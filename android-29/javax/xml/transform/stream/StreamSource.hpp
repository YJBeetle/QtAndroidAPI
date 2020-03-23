#pragma once

#ifndef JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE
#define JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class Reader;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::javax::xml::transform::stream
{
	class StreamSource : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject FEATURE();
		
		// Constructors
		void __constructor(__jni_impl::java::io::Reader arg0);
		void __constructor(__jni_impl::java::io::Reader arg0, jstring arg1);
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor();
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0, jstring arg1);
		
		// Methods
		jboolean isEmpty();
		QAndroidJniObject getInputStream();
		void setSystemId(__jni_impl::java::io::File arg0);
		void setSystemId(jstring arg0);
		void setInputStream(__jni_impl::java::io::InputStream arg0);
		void setReader(__jni_impl::java::io::Reader arg0);
		void setPublicId(jstring arg0);
		QAndroidJniObject getPublicId();
		QAndroidJniObject getSystemId();
		QAndroidJniObject getReader();
	};
} // namespace __jni_impl::javax::xml::transform::stream

#include "../../../../java/io/InputStream.hpp"
#include "../../../../java/io/Reader.hpp"
#include "../../../../java/io/File.hpp"

namespace __jni_impl::javax::xml::transform::stream
{
	// Fields
	QAndroidJniObject StreamSource::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.stream.StreamSource",
			"FEATURE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void StreamSource::__constructor(__jni_impl::java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object());
	}
	void StreamSource::__constructor(__jni_impl::java::io::Reader arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/Reader;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void StreamSource::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void StreamSource::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void StreamSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamSource",
			"()V");
	}
	void StreamSource::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	void StreamSource::__constructor(__jni_impl::java::io::InputStream arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jboolean StreamSource::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	QAndroidJniObject StreamSource::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;");
	}
	void StreamSource::setSystemId(__jni_impl::java::io::File arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void StreamSource::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void StreamSource::setInputStream(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"setInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	void StreamSource::setReader(__jni_impl::java::io::Reader arg0)
	{
		__thiz.callMethod<void>(
			"setReader",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object());
	}
	void StreamSource::setPublicId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject StreamSource::getPublicId()
	{
		return __thiz.callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StreamSource::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StreamSource::getReader()
	{
		return __thiz.callObjectMethod(
			"getReader",
			"()Ljava/io/Reader;");
	}
} // namespace __jni_impl::javax::xml::transform::stream

namespace javax::xml::transform::stream
{
	class StreamSource : public __jni_impl::javax::xml::transform::stream::StreamSource
	{
	public:
		StreamSource(QAndroidJniObject obj) { __thiz = obj; }
		StreamSource(__jni_impl::java::io::Reader arg0)
		{
			__constructor(
				arg0);
		}
		StreamSource(__jni_impl::java::io::Reader arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		StreamSource(jstring arg0)
		{
			__constructor(
				arg0);
		}
		StreamSource(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		StreamSource()
		{
			__constructor();
		}
		StreamSource(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		StreamSource(__jni_impl::java::io::InputStream arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::xml::transform::stream

#endif // JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE

