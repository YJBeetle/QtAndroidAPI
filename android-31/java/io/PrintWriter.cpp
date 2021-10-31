#include "./File.hpp"
#include "./OutputStream.hpp"
#include "./PrintStream.hpp"
#include "./Writer.hpp"
#include "../nio/charset/Charset.hpp"
#include "../util/Formatter.hpp"
#include "../util/Locale.hpp"
#include "./PrintWriter.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	PrintWriter::PrintWriter(QAndroidJniObject obj) : java::io::Writer(obj) {}
	
	// Constructors
	PrintWriter::PrintWriter(java::io::File arg0)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	PrintWriter::PrintWriter(java::io::OutputStream arg0)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	PrintWriter::PrintWriter(java::io::Writer arg0)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	PrintWriter::PrintWriter(jstring arg0)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	PrintWriter::PrintWriter(java::io::File arg0, jstring arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	PrintWriter::PrintWriter(java::io::File arg0, java::nio::charset::Charset arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	PrintWriter::PrintWriter(java::io::OutputStream arg0, jboolean arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/OutputStream;Z)V",
			arg0.object(),
			arg1
		) {}
	PrintWriter::PrintWriter(java::io::Writer arg0, jboolean arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/Writer;Z)V",
			arg0.object(),
			arg1
		) {}
	PrintWriter::PrintWriter(jstring arg0, jstring arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	PrintWriter::PrintWriter(jstring arg0, java::nio::charset::Charset arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.object()
		) {}
	PrintWriter::PrintWriter(java::io::OutputStream arg0, jboolean arg1, java::nio::charset::Charset arg2)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/OutputStream;ZLjava/nio/charset/Charset;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	java::io::PrintWriter PrintWriter::append(jchar arg0)
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/PrintWriter;",
			arg0
		);
	}
	java::io::PrintWriter PrintWriter::append(jstring arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;",
			arg0
		);
	}
	java::io::PrintWriter PrintWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PrintWriter::checkError()
	{
		return callMethod<jboolean>(
			"checkError",
			"()Z"
		);
	}
	void PrintWriter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PrintWriter::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::io::PrintWriter PrintWriter::format(jstring arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0,
			arg1
		);
	}
	java::io::PrintWriter PrintWriter::format(java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void PrintWriter::print(jcharArray arg0)
	{
		callMethod<void>(
			"print",
			"([C)V",
			arg0
		);
	}
	void PrintWriter::print(jboolean arg0)
	{
		callMethod<void>(
			"print",
			"(Z)V",
			arg0
		);
	}
	void PrintWriter::print(jchar arg0)
	{
		callMethod<void>(
			"print",
			"(C)V",
			arg0
		);
	}
	void PrintWriter::print(jdouble arg0)
	{
		callMethod<void>(
			"print",
			"(D)V",
			arg0
		);
	}
	void PrintWriter::print(jfloat arg0)
	{
		callMethod<void>(
			"print",
			"(F)V",
			arg0
		);
	}
	void PrintWriter::print(jint arg0)
	{
		callMethod<void>(
			"print",
			"(I)V",
			arg0
		);
	}
	void PrintWriter::print(jobject arg0)
	{
		callMethod<void>(
			"print",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void PrintWriter::print(jstring arg0)
	{
		callMethod<void>(
			"print",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PrintWriter::print(jlong arg0)
	{
		callMethod<void>(
			"print",
			"(J)V",
			arg0
		);
	}
	java::io::PrintWriter PrintWriter::printf(jstring arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0,
			arg1
		);
	}
	java::io::PrintWriter PrintWriter::printf(java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return callObjectMethod(
			"printf",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void PrintWriter::println()
	{
		callMethod<void>(
			"println",
			"()V"
		);
	}
	void PrintWriter::println(jcharArray arg0)
	{
		callMethod<void>(
			"println",
			"([C)V",
			arg0
		);
	}
	void PrintWriter::println(jboolean arg0)
	{
		callMethod<void>(
			"println",
			"(Z)V",
			arg0
		);
	}
	void PrintWriter::println(jchar arg0)
	{
		callMethod<void>(
			"println",
			"(C)V",
			arg0
		);
	}
	void PrintWriter::println(jdouble arg0)
	{
		callMethod<void>(
			"println",
			"(D)V",
			arg0
		);
	}
	void PrintWriter::println(jfloat arg0)
	{
		callMethod<void>(
			"println",
			"(F)V",
			arg0
		);
	}
	void PrintWriter::println(jint arg0)
	{
		callMethod<void>(
			"println",
			"(I)V",
			arg0
		);
	}
	void PrintWriter::println(jobject arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void PrintWriter::println(jstring arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PrintWriter::println(jlong arg0)
	{
		callMethod<void>(
			"println",
			"(J)V",
			arg0
		);
	}
	void PrintWriter::write(jcharArray arg0)
	{
		callMethod<void>(
			"write",
			"([C)V",
			arg0
		);
	}
	void PrintWriter::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void PrintWriter::write(jstring arg0)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PrintWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PrintWriter::write(jstring arg0, jint arg1, jint arg2)
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
