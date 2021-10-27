#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::io
{
	class Writer;
}

namespace __jni_impl::javax::xml::transform::stream
{
	class StreamResult : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		void __constructor(__jni_impl::java::io::Writer arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject getOutputStream();
		jstring getSystemId();
		QAndroidJniObject getWriter();
		void setOutputStream(__jni_impl::java::io::OutputStream arg0);
		void setSystemId(__jni_impl::java::io::File arg0);
		void setSystemId(jstring arg0);
		void setSystemId(const QString &arg0);
		void setWriter(__jni_impl::java::io::Writer arg0);
	};
} // namespace __jni_impl::javax::xml::transform::stream

#include "../../../../java/io/File.hpp"
#include "../../../../java/io/OutputStream.hpp"
#include "../../../../java/io/Writer.hpp"

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
	void StreamResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"()V"
		);
	}
	void StreamResult::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void StreamResult::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void StreamResult::__constructor(__jni_impl::java::io::Writer arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object()
		);
	}
	void StreamResult::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StreamResult::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject StreamResult::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jstring StreamResult::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject StreamResult::getWriter()
	{
		return __thiz.callObjectMethod(
			"getWriter",
			"()Ljava/io/Writer;"
		);
	}
	void StreamResult::setOutputStream(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"setOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
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
	void StreamResult::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StreamResult::setSystemId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
} // namespace __jni_impl::javax::xml::transform::stream

namespace javax::xml::transform::stream
{
	class StreamResult : public __jni_impl::javax::xml::transform::stream::StreamResult
	{
	public:
		StreamResult(QAndroidJniObject obj) { __thiz = obj; }
		StreamResult()
		{
			__constructor();
		}
		StreamResult(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		StreamResult(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
		StreamResult(__jni_impl::java::io::Writer arg0)
		{
			__constructor(
				arg0);
		}
		StreamResult(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::xml::transform::stream

