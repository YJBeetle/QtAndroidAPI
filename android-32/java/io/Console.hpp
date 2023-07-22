#pragma once

#include "../../JCharArray.hpp"
#include "../../JObjectArray.hpp"
#include "./PrintWriter.def.hpp"
#include "./Reader.def.hpp"
#include "./Writer.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "../util/Formatter.def.hpp"
#include "./Console.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::charset::Charset Console::charset() const
	{
		return callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	inline void Console::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline java::io::Console Console::format(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline java::io::Console Console::printf(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline JString Console::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	inline JString Console::readLine(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"readLine",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline JCharArray Console::readPassword() const
	{
		return callObjectMethod(
			"readPassword",
			"()[C"
		);
	}
	inline JCharArray Console::readPassword(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"readPassword",
			"(Ljava/lang/String;[Ljava/lang/Object;)[C",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline java::io::Reader Console::reader() const
	{
		return callObjectMethod(
			"reader",
			"()Ljava/io/Reader;"
		);
	}
	inline java::io::PrintWriter Console::writer() const
	{
		return callObjectMethod(
			"writer",
			"()Ljava/io/PrintWriter;"
		);
	}
} // namespace java::io

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
