#include "../../JCharArray.hpp"
#include "./Reader.hpp"
#include "../../JString.hpp"
#include "./LineNumberReader.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	LineNumberReader::LineNumberReader(QAndroidJniObject obj) : java::io::BufferedReader(obj) {}
	
	// Constructors
	LineNumberReader::LineNumberReader(java::io::Reader arg0)
		: java::io::BufferedReader(
			"java.io.LineNumberReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	LineNumberReader::LineNumberReader(java::io::Reader arg0, jint arg1)
		: java::io::BufferedReader(
			"java.io.LineNumberReader",
			"(Ljava/io/Reader;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint LineNumberReader::getLineNumber()
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	void LineNumberReader::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jint LineNumberReader::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint LineNumberReader::read(JCharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	JString LineNumberReader::readLine()
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	void LineNumberReader::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void LineNumberReader::setLineNumber(jint arg0)
	{
		callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	jlong LineNumberReader::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

