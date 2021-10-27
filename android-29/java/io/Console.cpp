#include "./PrintWriter.hpp"
#include "./Reader.hpp"
#include "./Writer.hpp"
#include "../nio/charset/Charset.hpp"
#include "../util/Formatter.hpp"
#include "./Console.hpp"

namespace java::io
{
	// Fields
	
	Console::Console(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Console::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject Console::format(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Console::format(const QString &arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Console::printf(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Console::printf(const QString &arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring Console::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Console::readLine(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"readLine",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Console::readLine(const QString &arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"readLine",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	jcharArray Console::readPassword()
	{
		return __thiz.callObjectMethod(
			"readPassword",
			"()[C"
		).object<jcharArray>();
	}
	jcharArray Console::readPassword(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"readPassword",
			"(Ljava/lang/String;[Ljava/lang/Object;)[C",
			arg0,
			arg1
		).object<jcharArray>();
	}
	jcharArray Console::readPassword(const QString &arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"readPassword",
			"(Ljava/lang/String;[Ljava/lang/Object;)[C",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jcharArray>();
	}
	QAndroidJniObject Console::reader()
	{
		return __thiz.callObjectMethod(
			"reader",
			"()Ljava/io/Reader;"
		);
	}
	QAndroidJniObject Console::writer()
	{
		return __thiz.callObjectMethod(
			"writer",
			"()Ljava/io/PrintWriter;"
		);
	}
} // namespace java::io

