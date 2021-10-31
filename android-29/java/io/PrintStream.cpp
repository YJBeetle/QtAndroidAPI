#include "./BufferedWriter.hpp"
#include "./File.hpp"
#include "./OutputStream.hpp"
#include "./OutputStreamWriter.hpp"
#include "../nio/charset/Charset.hpp"
#include "../util/Formatter.hpp"
#include "../util/Locale.hpp"
#include "./PrintStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	PrintStream::PrintStream(QAndroidJniObject obj) : java::io::FilterOutputStream(obj) {}
	
	// Constructors
	PrintStream::PrintStream(java::io::File arg0)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	PrintStream::PrintStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	PrintStream::PrintStream(jstring arg0)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	PrintStream::PrintStream(java::io::File arg0, jstring arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	PrintStream::PrintStream(java::io::File arg0, java::nio::charset::Charset arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	PrintStream::PrintStream(java::io::OutputStream arg0, jboolean arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.object(),
			arg1
		) {}
	PrintStream::PrintStream(jstring arg0, jstring arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	PrintStream::PrintStream(jstring arg0, java::nio::charset::Charset arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.object()
		) {}
	PrintStream::PrintStream(java::io::OutputStream arg0, jboolean arg1, jstring arg2)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;ZLjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	PrintStream::PrintStream(java::io::OutputStream arg0, jboolean arg1, java::nio::charset::Charset arg2)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;ZLjava/nio/charset/Charset;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	QAndroidJniObject PrintStream::append(jchar arg0)
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/PrintStream;",
			arg0
		);
	}
	QAndroidJniObject PrintStream::append(jstring arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/PrintStream;",
			arg0
		);
	}
	QAndroidJniObject PrintStream::append(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PrintStream::checkError()
	{
		return callMethod<jboolean>(
			"checkError",
			"()Z"
		);
	}
	void PrintStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PrintStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject PrintStream::format(jstring arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PrintStream::format(java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void PrintStream::print(jcharArray arg0)
	{
		callMethod<void>(
			"print",
			"([C)V",
			arg0
		);
	}
	void PrintStream::print(jboolean arg0)
	{
		callMethod<void>(
			"print",
			"(Z)V",
			arg0
		);
	}
	void PrintStream::print(jchar arg0)
	{
		callMethod<void>(
			"print",
			"(C)V",
			arg0
		);
	}
	void PrintStream::print(jdouble arg0)
	{
		callMethod<void>(
			"print",
			"(D)V",
			arg0
		);
	}
	void PrintStream::print(jfloat arg0)
	{
		callMethod<void>(
			"print",
			"(F)V",
			arg0
		);
	}
	void PrintStream::print(jint arg0)
	{
		callMethod<void>(
			"print",
			"(I)V",
			arg0
		);
	}
	void PrintStream::print(jobject arg0)
	{
		callMethod<void>(
			"print",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void PrintStream::print(jstring arg0)
	{
		callMethod<void>(
			"print",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PrintStream::print(jlong arg0)
	{
		callMethod<void>(
			"print",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject PrintStream::printf(jstring arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PrintStream::printf(java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return callObjectMethod(
			"printf",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void PrintStream::println()
	{
		callMethod<void>(
			"println",
			"()V"
		);
	}
	void PrintStream::println(jcharArray arg0)
	{
		callMethod<void>(
			"println",
			"([C)V",
			arg0
		);
	}
	void PrintStream::println(jboolean arg0)
	{
		callMethod<void>(
			"println",
			"(Z)V",
			arg0
		);
	}
	void PrintStream::println(jchar arg0)
	{
		callMethod<void>(
			"println",
			"(C)V",
			arg0
		);
	}
	void PrintStream::println(jdouble arg0)
	{
		callMethod<void>(
			"println",
			"(D)V",
			arg0
		);
	}
	void PrintStream::println(jfloat arg0)
	{
		callMethod<void>(
			"println",
			"(F)V",
			arg0
		);
	}
	void PrintStream::println(jint arg0)
	{
		callMethod<void>(
			"println",
			"(I)V",
			arg0
		);
	}
	void PrintStream::println(jobject arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void PrintStream::println(jstring arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PrintStream::println(jlong arg0)
	{
		callMethod<void>(
			"println",
			"(J)V",
			arg0
		);
	}
	void PrintStream::write(jbyteArray arg0)
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void PrintStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void PrintStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PrintStream::writeBytes(jbyteArray arg0)
	{
		callMethod<void>(
			"writeBytes",
			"([B)V",
			arg0
		);
	}
} // namespace java::io

