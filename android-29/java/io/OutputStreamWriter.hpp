#pragma once

#include "../../JCharArray.hpp"
#include "./OutputStream.def.hpp"
#include "./Writer.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "../nio/charset/CharsetEncoder.def.hpp"
#include "./OutputStreamWriter.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0, JString arg1)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0, java::nio::charset::Charset arg1)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0, java::nio::charset::CharsetEncoder arg1)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::io::Writer OutputStreamWriter::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			arg0.object<jstring>()
		);
	}
	inline java::io::Writer OutputStreamWriter::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void OutputStreamWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void OutputStreamWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline JString OutputStreamWriter::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	inline void OutputStreamWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void OutputStreamWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void OutputStreamWriter::write(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers
#include "./Writer.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
