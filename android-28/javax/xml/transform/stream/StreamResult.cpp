#include "../../../../java/io/File.hpp"
#include "../../../../java/io/OutputStream.hpp"
#include "../../../../java/io/Writer.hpp"
#include "../../../../JString.hpp"
#include "./StreamResult.hpp"

namespace javax::xml::transform::stream
{
	// Fields
	JString StreamResult::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.stream.StreamResult",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	StreamResult::StreamResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StreamResult::StreamResult()
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"()V"
		) {}
	StreamResult::StreamResult(java::io::File arg0)
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	StreamResult::StreamResult(java::io::OutputStream arg0)
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	StreamResult::StreamResult(java::io::Writer arg0)
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	StreamResult::StreamResult(JString arg0)
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	java::io::OutputStream StreamResult::getOutputStream()
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	JString StreamResult::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
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
	void StreamResult::setSystemId(JString arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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

