#include "./OutputStream.hpp"
#include "./Writer.hpp"
#include "../nio/charset/Charset.hpp"
#include "../nio/charset/CharsetEncoder.hpp"
#include "./OutputStreamWriter.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	OutputStreamWriter::OutputStreamWriter(QAndroidJniObject obj) : java::io::Writer(obj) {}
	
	// Constructors
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream arg0, jstring arg1)
		: java::io::Writer(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1
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
	QAndroidJniObject OutputStreamWriter::append(jstring arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			arg0
		);
	}
	QAndroidJniObject OutputStreamWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			arg0,
			arg1,
			arg2
		);
	}
	void OutputStreamWriter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void OutputStreamWriter::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	jstring OutputStreamWriter::getEncoding()
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void OutputStreamWriter::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void OutputStreamWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void OutputStreamWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io

