#pragma once

#include "../../JCharArray.hpp"
#include "./Writer.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./CharArrayWriter.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline CharArrayWriter::CharArrayWriter()
		: java::io::Writer(
			"java.io.CharArrayWriter",
			"()V"
		) {}
	inline CharArrayWriter::CharArrayWriter(jint arg0)
		: java::io::Writer(
			"java.io.CharArrayWriter",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline java::io::CharArrayWriter CharArrayWriter::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/CharArrayWriter;",
			arg0
		);
	}
	inline java::io::CharArrayWriter CharArrayWriter::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;",
			arg0.object<jstring>()
		);
	}
	inline java::io::CharArrayWriter CharArrayWriter::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void CharArrayWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void CharArrayWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void CharArrayWriter::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jint CharArrayWriter::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JCharArray CharArrayWriter::toCharArray() const
	{
		return callObjectMethod(
			"toCharArray",
			"()[C"
		);
	}
	inline JString CharArrayWriter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CharArrayWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void CharArrayWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void CharArrayWriter::write(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void CharArrayWriter::writeTo(java::io::Writer arg0) const
	{
		callMethod<void>(
			"writeTo",
			"(Ljava/io/Writer;)V",
			arg0.object()
		);
	}
} // namespace java::io

// Base class headers
#include "./Writer.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
