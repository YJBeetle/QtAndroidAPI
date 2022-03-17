#pragma once

#include "../../../../java/io/File.def.hpp"
#include "../../../../java/io/OutputStream.def.hpp"
#include "../../../../java/io/Writer.def.hpp"
#include "../../../../JString.hpp"
#include "./StreamResult.def.hpp"

namespace javax::xml::transform::stream
{
	// Fields
	inline JString StreamResult::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.stream.StreamResult",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline StreamResult::StreamResult()
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"()V"
		) {}
	inline StreamResult::StreamResult(java::io::File arg0)
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline StreamResult::StreamResult(java::io::OutputStream arg0)
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline StreamResult::StreamResult(java::io::Writer arg0)
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	inline StreamResult::StreamResult(JString arg0)
		: JObject(
			"javax.xml.transform.stream.StreamResult",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline java::io::OutputStream StreamResult::getOutputStream() const
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	inline JString StreamResult::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline java::io::Writer StreamResult::getWriter() const
	{
		return callObjectMethod(
			"getWriter",
			"()Ljava/io/Writer;"
		);
	}
	inline void StreamResult::setOutputStream(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"setOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	inline void StreamResult::setSystemId(java::io::File arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
	inline void StreamResult::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void StreamResult::setWriter(java::io::Writer arg0) const
	{
		callMethod<void>(
			"setWriter",
			"(Ljava/io/Writer;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::transform::stream

// Base class headers

