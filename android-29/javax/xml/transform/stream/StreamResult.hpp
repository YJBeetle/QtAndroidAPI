#pragma once

#ifndef JAVAX_XML_TRANSFORM_STREAM_STREAMRESULT
#define JAVAX_XML_TRANSFORM_STREAM_STREAMRESULT

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::io
{
	class Writer;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::javax::xml::transform::stream
{
	class StreamResult : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::java::io::Writer arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		void __constructor();
		
		// Methods
		void setOutputStream(__jni_impl::java::io::OutputStream arg0);
		jstring getSystemId();
		void setSystemId(jstring arg0);
		void setSystemId(__jni_impl::java::io::File arg0);
		void setWriter(__jni_impl::java::io::Writer arg0);
		QAndroidJniObject getWriter();
		QAndroidJniObject getOutputStream();
	};
} // namespace __jni_impl::javax::xml::transform::stream

#include "../../../../java/io/OutputStream.hpp"
#include "../../../../java/io/Writer.hpp"
#include "../../../../java/io/File.hpp"

namespace __jni_impl::javax::xml::transform::stream
{
	// Fields
	jstring StreamResult::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.stream.StreamResult",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void StreamResult::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void StreamResult::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void StreamResult::__constructor(__jni_impl::java::io::Writer arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object());
	}
	void StreamResult::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
	void StreamResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"()V");
	}
	
	// Methods
	void StreamResult::setOutputStream(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"setOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	jstring StreamResult::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StreamResult::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StreamResult::setSystemId(__jni_impl::java::io::File arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void StreamResult::setWriter(__jni_impl::java::io::Writer arg0)
	{
		__thiz.callMethod<void>(
			"setWriter",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StreamResult::getWriter()
	{
		return __thiz.callObjectMethod(
			"getWriter",
			"()Ljava/io/Writer;"
		);
	}
	QAndroidJniObject StreamResult::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
} // namespace __jni_impl::javax::xml::transform::stream

namespace javax::xml::transform::stream
{
	class StreamResult : public __jni_impl::javax::xml::transform::stream::StreamResult
	{
	public:
		StreamResult(QAndroidJniObject obj) { __thiz = obj; }
		StreamResult(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		StreamResult(jstring arg0)
		{
			__constructor(
				arg0);
		}
		StreamResult(__jni_impl::java::io::Writer arg0)
		{
			__constructor(
				arg0);
		}
		StreamResult(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
		StreamResult()
		{
			__constructor();
		}
	};
} // namespace javax::xml::transform::stream

#endif // JAVAX_XML_TRANSFORM_STREAM_STREAMRESULT

