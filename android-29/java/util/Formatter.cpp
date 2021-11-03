#include "../io/File.hpp"
#include "../io/IOException.hpp"
#include "../io/OutputStream.hpp"
#include "../io/PrintStream.hpp"
#include "../nio/charset/Charset.hpp"
#include "./Locale.hpp"
#include "./regex/Pattern.hpp"
#include "./Formatter.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Formatter::Formatter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Formatter::Formatter()
		: JObject(
			"java.util.Formatter",
			"()V"
		) {}
	Formatter::Formatter(java::io::File arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	Formatter::Formatter(java::io::OutputStream arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	Formatter::Formatter(java::io::PrintStream arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		) {}
	Formatter::Formatter(JObject arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/Appendable;)V",
			arg0.object()
		) {}
	Formatter::Formatter(jstring arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Formatter::Formatter(java::util::Locale arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	Formatter::Formatter(java::io::File arg0, jstring arg1)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	Formatter::Formatter(java::io::OutputStream arg0, jstring arg1)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	Formatter::Formatter(JObject arg0, java::util::Locale arg1)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/Appendable;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	Formatter::Formatter(jstring arg0, jstring arg1)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	Formatter::Formatter(java::io::File arg0, jstring arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	Formatter::Formatter(java::io::File arg0, java::nio::charset::Charset arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	Formatter::Formatter(java::io::OutputStream arg0, jstring arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	Formatter::Formatter(java::io::OutputStream arg0, java::nio::charset::Charset arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	Formatter::Formatter(jstring arg0, jstring arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	Formatter::Formatter(jstring arg0, java::nio::charset::Charset arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	void Formatter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Formatter::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::util::Formatter Formatter::format(jstring arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			arg0,
			arg1
		);
	}
	java::util::Formatter Formatter::format(java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::io::IOException Formatter::ioException()
	{
		return callObjectMethod(
			"ioException",
			"()Ljava/io/IOException;"
		);
	}
	java::util::Locale Formatter::locale()
	{
		return callObjectMethod(
			"locale",
			"()Ljava/util/Locale;"
		);
	}
	JObject Formatter::out()
	{
		return callObjectMethod(
			"out",
			"()Ljava/lang/Appendable;"
		);
	}
	jstring Formatter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

