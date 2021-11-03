#include "./PrintWriter.hpp"
#include "./Reader.hpp"
#include "./Writer.hpp"
#include "../nio/charset/Charset.hpp"
#include "../util/Formatter.hpp"
#include "./Console.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	Console::Console(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Console::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::io::Console Console::format(jstring arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			arg0,
			arg1
		);
	}
	java::io::Console Console::printf(jstring arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			arg0,
			arg1
		);
	}
	jstring Console::readLine()
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Console::readLine(jstring arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"readLine",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jcharArray Console::readPassword()
	{
		return callObjectMethod(
			"readPassword",
			"()[C"
		).object<jcharArray>();
	}
	jcharArray Console::readPassword(jstring arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"readPassword",
			"(Ljava/lang/String;[Ljava/lang/Object;)[C",
			arg0,
			arg1
		).object<jcharArray>();
	}
	java::io::Reader Console::reader()
	{
		return callObjectMethod(
			"reader",
			"()Ljava/io/Reader;"
		);
	}
	java::io::PrintWriter Console::writer()
	{
		return callObjectMethod(
			"writer",
			"()Ljava/io/PrintWriter;"
		);
	}
} // namespace java::io

