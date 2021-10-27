#include "../../../../java/io/File.hpp"
#include "../../../../java/io/OutputStream.hpp"
#include "../../../../java/io/Writer.hpp"
#include "./StreamResult.hpp"

namespace javax::xml::transform::stream
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
	
	StreamResult::StreamResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StreamResult::StreamResult()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"()V"
		);
	}
	StreamResult::StreamResult(java::io::File &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	StreamResult::StreamResult(java::io::OutputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	StreamResult::StreamResult(java::io::Writer &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object()
		);
	}
	StreamResult::StreamResult(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	StreamResult::StreamResult(const QString &arg0)
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
	void StreamResult::setOutputStream(java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"setOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void StreamResult::setSystemId(java::io::File arg0)
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
	void StreamResult::setWriter(java::io::Writer arg0)
	{
		__thiz.callMethod<void>(
			"setWriter",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace javax::xml::transform::stream

