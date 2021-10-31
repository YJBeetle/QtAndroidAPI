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
	
	// QAndroidJniObject forward
	StreamResult::StreamResult(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StreamResult::StreamResult()
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamResult",
			"()V"
		) {}
	StreamResult::StreamResult(java::io::File arg0)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	StreamResult::StreamResult(java::io::OutputStream arg0)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	StreamResult::StreamResult(java::io::Writer arg0)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	StreamResult::StreamResult(jstring arg0)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	java::io::OutputStream StreamResult::getOutputStream()
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jstring StreamResult::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::io::Writer StreamResult::getWriter()
	{
		return callObjectMethod(
			"getWriter",
			"()Ljava/io/Writer;"
		);
	}
	void StreamResult::setOutputStream(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"setOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	void StreamResult::setSystemId(java::io::File arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
	void StreamResult::setSystemId(jstring arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StreamResult::setWriter(java::io::Writer arg0)
	{
		callMethod<void>(
			"setWriter",
			"(Ljava/io/Writer;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::stream

