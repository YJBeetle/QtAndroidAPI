#include "./Writer.hpp"
#include "./CharArrayWriter.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	CharArrayWriter::CharArrayWriter(QAndroidJniObject obj) : java::io::Writer(obj) {}
	
	// Constructors
	CharArrayWriter::CharArrayWriter()
		: java::io::Writer(
			"java.io.CharArrayWriter",
			"()V"
		) {}
	CharArrayWriter::CharArrayWriter(jint arg0)
		: java::io::Writer(
			"java.io.CharArrayWriter",
			"(I)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject CharArrayWriter::append(jchar arg0)
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/CharArrayWriter;",
			arg0
		);
	}
	QAndroidJniObject CharArrayWriter::append(jstring arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;",
			arg0
		);
	}
	QAndroidJniObject CharArrayWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;",
			arg0,
			arg1,
			arg2
		);
	}
	void CharArrayWriter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CharArrayWriter::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void CharArrayWriter::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint CharArrayWriter::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jcharArray CharArrayWriter::toCharArray()
	{
		return callObjectMethod(
			"toCharArray",
			"()[C"
		).object<jcharArray>();
	}
	jstring CharArrayWriter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CharArrayWriter::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void CharArrayWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CharArrayWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CharArrayWriter::writeTo(java::io::Writer arg0)
	{
		callMethod<void>(
			"writeTo",
			"(Ljava/io/Writer;)V",
			arg0.object()
		);
	}
} // namespace java::io

