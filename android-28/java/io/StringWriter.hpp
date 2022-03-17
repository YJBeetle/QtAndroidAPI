#pragma once

#include "../../JCharArray.hpp"
#include "./Writer.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.def.hpp"
#include "./StringWriter.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline StringWriter::StringWriter()
		: java::io::Writer(
			"java.io.StringWriter",
			"()V"
		) {}
	inline StringWriter::StringWriter(jint arg0)
		: java::io::Writer(
			"java.io.StringWriter",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline java::io::StringWriter StringWriter::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/StringWriter;",
			arg0
		);
	}
	inline java::io::StringWriter StringWriter::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/StringWriter;",
			arg0.object<jstring>()
		);
	}
	inline java::io::StringWriter StringWriter::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void StringWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void StringWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline java::lang::StringBuffer StringWriter::getBuffer() const
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/lang/StringBuffer;"
		);
	}
	inline JString StringWriter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void StringWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void StringWriter::write(JString arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void StringWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void StringWriter::write(JString arg0, jint arg1, jint arg2) const
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
