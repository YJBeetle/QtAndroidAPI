#include "../../JCharArray.hpp"
#include "../../JObjectArray.hpp"
#include "./PrintWriter.hpp"
#include "./Reader.hpp"
#include "./Writer.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.hpp"
#include "../util/Formatter.hpp"
#include "./Console.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	Console::Console(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Console::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::io::Console Console::format(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	java::io::Console Console::printf(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	JString Console::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	JString Console::readLine(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"readLine",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	JCharArray Console::readPassword() const
	{
		return callObjectMethod(
			"readPassword",
			"()[C"
		);
	}
	JCharArray Console::readPassword(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"readPassword",
			"(Ljava/lang/String;[Ljava/lang/Object;)[C",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	java::io::Reader Console::reader() const
	{
		return callObjectMethod(
			"reader",
			"()Ljava/io/Reader;"
		);
	}
	java::io::PrintWriter Console::writer() const
	{
		return callObjectMethod(
			"writer",
			"()Ljava/io/PrintWriter;"
		);
	}
} // namespace java::io

