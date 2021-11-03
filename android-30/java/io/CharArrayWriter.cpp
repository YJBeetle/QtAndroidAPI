#include "../../JCharArray.hpp"
#include "./Writer.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./CharArrayWriter.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	CharArrayWriter::CharArrayWriter(QJniObject obj) : java::io::Writer(obj) {}
	
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
	java::io::CharArrayWriter CharArrayWriter::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/CharArrayWriter;",
			arg0
		);
	}
	java::io::CharArrayWriter CharArrayWriter::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;",
			arg0.object<jstring>()
		);
	}
	java::io::CharArrayWriter CharArrayWriter::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void CharArrayWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CharArrayWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void CharArrayWriter::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint CharArrayWriter::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JCharArray CharArrayWriter::toCharArray() const
	{
		return callObjectMethod(
			"toCharArray",
			"()[C"
		);
	}
	JString CharArrayWriter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CharArrayWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void CharArrayWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void CharArrayWriter::write(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void CharArrayWriter::writeTo(java::io::Writer arg0) const
	{
		callMethod<void>(
			"writeTo",
			"(Ljava/io/Writer;)V",
			arg0.object()
		);
	}
} // namespace java::io

