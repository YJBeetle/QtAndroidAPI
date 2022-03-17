#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JObjectArray.hpp"
#include "./BufferedWriter.def.hpp"
#include "./File.def.hpp"
#include "./OutputStream.def.hpp"
#include "./OutputStreamWriter.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "../util/Formatter.def.hpp"
#include "../util/Locale.def.hpp"
#include "./PrintStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline PrintStream::PrintStream(java::io::File arg0)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline PrintStream::PrintStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline PrintStream::PrintStream(JString arg0)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline PrintStream::PrintStream(java::io::File arg0, JString arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline PrintStream::PrintStream(java::io::File arg0, java::nio::charset::Charset arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PrintStream::PrintStream(java::io::OutputStream arg0, jboolean arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.object(),
			arg1
		) {}
	inline PrintStream::PrintStream(JString arg0, JString arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline PrintStream::PrintStream(JString arg0, java::nio::charset::Charset arg1)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline PrintStream::PrintStream(java::io::OutputStream arg0, jboolean arg1, JString arg2)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;ZLjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		) {}
	inline PrintStream::PrintStream(java::io::OutputStream arg0, jboolean arg1, java::nio::charset::Charset arg2)
		: java::io::FilterOutputStream(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;ZLjava/nio/charset/Charset;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline java::io::PrintStream PrintStream::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/PrintStream;",
			arg0
		);
	}
	inline java::io::PrintStream PrintStream::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/PrintStream;",
			arg0.object<jstring>()
		);
	}
	inline java::io::PrintStream PrintStream::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jboolean PrintStream::checkError() const
	{
		return callMethod<jboolean>(
			"checkError",
			"()Z"
		);
	}
	inline void PrintStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PrintStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline java::io::PrintStream PrintStream::format(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline java::io::PrintStream PrintStream::format(java::util::Locale arg0, JString arg1, JObjectArray arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobjectArray>()
		);
	}
	inline void PrintStream::print(JCharArray arg0) const
	{
		callMethod<void>(
			"print",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void PrintStream::print(jboolean arg0) const
	{
		callMethod<void>(
			"print",
			"(Z)V",
			arg0
		);
	}
	inline void PrintStream::print(jchar arg0) const
	{
		callMethod<void>(
			"print",
			"(C)V",
			arg0
		);
	}
	inline void PrintStream::print(jdouble arg0) const
	{
		callMethod<void>(
			"print",
			"(D)V",
			arg0
		);
	}
	inline void PrintStream::print(jfloat arg0) const
	{
		callMethod<void>(
			"print",
			"(F)V",
			arg0
		);
	}
	inline void PrintStream::print(jint arg0) const
	{
		callMethod<void>(
			"print",
			"(I)V",
			arg0
		);
	}
	inline void PrintStream::print(JObject arg0) const
	{
		callMethod<void>(
			"print",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void PrintStream::print(JString arg0) const
	{
		callMethod<void>(
			"print",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PrintStream::print(jlong arg0) const
	{
		callMethod<void>(
			"print",
			"(J)V",
			arg0
		);
	}
	inline java::io::PrintStream PrintStream::printf(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline java::io::PrintStream PrintStream::printf(java::util::Locale arg0, JString arg1, JObjectArray arg2) const
	{
		return callObjectMethod(
			"printf",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobjectArray>()
		);
	}
	inline void PrintStream::println() const
	{
		callMethod<void>(
			"println",
			"()V"
		);
	}
	inline void PrintStream::println(JCharArray arg0) const
	{
		callMethod<void>(
			"println",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void PrintStream::println(jboolean arg0) const
	{
		callMethod<void>(
			"println",
			"(Z)V",
			arg0
		);
	}
	inline void PrintStream::println(jchar arg0) const
	{
		callMethod<void>(
			"println",
			"(C)V",
			arg0
		);
	}
	inline void PrintStream::println(jdouble arg0) const
	{
		callMethod<void>(
			"println",
			"(D)V",
			arg0
		);
	}
	inline void PrintStream::println(jfloat arg0) const
	{
		callMethod<void>(
			"println",
			"(F)V",
			arg0
		);
	}
	inline void PrintStream::println(jint arg0) const
	{
		callMethod<void>(
			"println",
			"(I)V",
			arg0
		);
	}
	inline void PrintStream::println(JObject arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void PrintStream::println(JString arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PrintStream::println(jlong arg0) const
	{
		callMethod<void>(
			"println",
			"(J)V",
			arg0
		);
	}
	inline void PrintStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void PrintStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void PrintStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void PrintStream::writeBytes(JByteArray arg0) const
	{
		callMethod<void>(
			"writeBytes",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace java::io

// Base class headers
#include "./OutputStream.hpp"
#include "./FilterOutputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
