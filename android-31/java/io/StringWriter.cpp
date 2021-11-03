#include "../../JCharArray.hpp"
#include "./Writer.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.hpp"
#include "./StringWriter.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	StringWriter::StringWriter(QAndroidJniObject obj) : java::io::Writer(obj) {}
	
	// Constructors
	StringWriter::StringWriter()
		: java::io::Writer(
			"java.io.StringWriter",
			"()V"
		) {}
	StringWriter::StringWriter(jint arg0)
		: java::io::Writer(
			"java.io.StringWriter",
			"(I)V",
			arg0
		) {}
	
	// Methods
	java::io::StringWriter StringWriter::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/StringWriter;",
			arg0
		);
	}
	java::io::StringWriter StringWriter::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/StringWriter;",
			arg0.object<jstring>()
		);
	}
	java::io::StringWriter StringWriter::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void StringWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void StringWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::lang::StringBuffer StringWriter::getBuffer() const
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/lang/StringBuffer;"
		);
	}
	JString StringWriter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void StringWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void StringWriter::write(JString arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void StringWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void StringWriter::write(JString arg0, jint arg1, jint arg2) const
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

