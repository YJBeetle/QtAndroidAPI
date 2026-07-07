#pragma once

#include "../../JCharArray.hpp"
#include "../../JObjectArray.hpp"
#include "./File.def.hpp"
#include "./OutputStream.def.hpp"
#include "./PrintStream.def.hpp"
#include "./Writer.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "../util/Formatter.def.hpp"
#include "../util/Locale.def.hpp"
#include "./PrintWriter.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline PrintWriter::PrintWriter(java::io::File arg0)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline PrintWriter::PrintWriter(java::io::OutputStream arg0)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline PrintWriter::PrintWriter(java::io::Writer arg0)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	inline PrintWriter::PrintWriter(JString arg0)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline PrintWriter::PrintWriter(java::io::File arg0, JString arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline PrintWriter::PrintWriter(java::io::File arg0, java::nio::charset::Charset arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PrintWriter::PrintWriter(java::io::OutputStream arg0, jboolean arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/OutputStream;Z)V",
			arg0.object(),
			arg1
		) {}
	inline PrintWriter::PrintWriter(java::io::Writer arg0, jboolean arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/Writer;Z)V",
			arg0.object(),
			arg1
		) {}
	inline PrintWriter::PrintWriter(JString arg0, JString arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline PrintWriter::PrintWriter(JString arg0, java::nio::charset::Charset arg1)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline PrintWriter::PrintWriter(java::io::OutputStream arg0, jboolean arg1, java::nio::charset::Charset arg2)
		: java::io::Writer(
			"java.io.PrintWriter",
			"(Ljava/io/OutputStream;ZLjava/nio/charset/Charset;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline java::io::PrintWriter PrintWriter::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/PrintWriter;",
			arg0
		);
	}
	inline java::io::PrintWriter PrintWriter::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;",
			arg0.object<jstring>()
		);
	}
	inline java::io::PrintWriter PrintWriter::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jboolean PrintWriter::checkError() const
	{
		return callMethod<jboolean>(
			"checkError",
			"()Z"
		);
	}
	inline void PrintWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PrintWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline java::io::PrintWriter PrintWriter::format(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline java::io::PrintWriter PrintWriter::format(java::util::Locale arg0, JString arg1, JObjectArray arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobjectArray>()
		);
	}
	inline void PrintWriter::print(JCharArray arg0) const
	{
		callMethod<void>(
			"print",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void PrintWriter::print(jboolean arg0) const
	{
		callMethod<void>(
			"print",
			"(Z)V",
			arg0
		);
	}
	inline void PrintWriter::print(jchar arg0) const
	{
		callMethod<void>(
			"print",
			"(C)V",
			arg0
		);
	}
	inline void PrintWriter::print(jdouble arg0) const
	{
		callMethod<void>(
			"print",
			"(D)V",
			arg0
		);
	}
	inline void PrintWriter::print(jfloat arg0) const
	{
		callMethod<void>(
			"print",
			"(F)V",
			arg0
		);
	}
	inline void PrintWriter::print(jint arg0) const
	{
		callMethod<void>(
			"print",
			"(I)V",
			arg0
		);
	}
	inline void PrintWriter::print(JObject arg0) const
	{
		callMethod<void>(
			"print",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void PrintWriter::print(JString arg0) const
	{
		callMethod<void>(
			"print",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PrintWriter::print(jlong arg0) const
	{
		callMethod<void>(
			"print",
			"(J)V",
			arg0
		);
	}
	inline java::io::PrintWriter PrintWriter::printf(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline java::io::PrintWriter PrintWriter::printf(java::util::Locale arg0, JString arg1, JObjectArray arg2) const
	{
		return callObjectMethod(
			"printf",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobjectArray>()
		);
	}
	inline void PrintWriter::println() const
	{
		callMethod<void>(
			"println",
			"()V"
		);
	}
	inline void PrintWriter::println(JCharArray arg0) const
	{
		callMethod<void>(
			"println",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void PrintWriter::println(jboolean arg0) const
	{
		callMethod<void>(
			"println",
			"(Z)V",
			arg0
		);
	}
	inline void PrintWriter::println(jchar arg0) const
	{
		callMethod<void>(
			"println",
			"(C)V",
			arg0
		);
	}
	inline void PrintWriter::println(jdouble arg0) const
	{
		callMethod<void>(
			"println",
			"(D)V",
			arg0
		);
	}
	inline void PrintWriter::println(jfloat arg0) const
	{
		callMethod<void>(
			"println",
			"(F)V",
			arg0
		);
	}
	inline void PrintWriter::println(jint arg0) const
	{
		callMethod<void>(
			"println",
			"(I)V",
			arg0
		);
	}
	inline void PrintWriter::println(JObject arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void PrintWriter::println(JString arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PrintWriter::println(jlong arg0) const
	{
		callMethod<void>(
			"println",
			"(J)V",
			arg0
		);
	}
	inline void PrintWriter::write(JCharArray arg0) const
	{
		callMethod<void>(
			"write",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void PrintWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void PrintWriter::write(JString arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PrintWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void PrintWriter::write(JString arg0, jint arg1, jint arg2) const
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
