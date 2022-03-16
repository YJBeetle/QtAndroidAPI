#include "../../JCharArray.hpp"
#include "./OutputStream.hpp"
#include "./Writer.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.hpp"
#include "../nio/charset/CharsetEncoder.hpp"
#include "./OutputStreamWriter.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0, JString arg1)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0, java::nio::charset::Charset arg1)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0, java::nio::charset::CharsetEncoder arg1)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::io::Writer OutputStreamWriter::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			arg0.object<jstring>()
		);
	}
	java::io::Writer OutputStreamWriter::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void OutputStreamWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void OutputStreamWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	JString OutputStreamWriter::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	void OutputStreamWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void OutputStreamWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void OutputStreamWriter::write(JString arg0, jint arg1, jint arg2) const
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

