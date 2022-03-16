#pragma once

#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Writer.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::io::Writer Writer::nullWriter()
	{
		return callStaticObjectMethod(
			"java.io.Writer",
			"nullWriter",
			"()Ljava/io/Writer;"
		);
	}
	inline java::io::Writer Writer::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/Writer;",
			arg0
		);
	}
	inline java::io::Writer Writer::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			arg0.object<jstring>()
		);
	}
	inline java::io::Writer Writer::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void Writer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Writer::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void Writer::write(JCharArray arg0) const
	{
		callMethod<void>(
			"write",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void Writer::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void Writer::write(JString arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Writer::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void Writer::write(JString arg0, jint arg1, jint arg2) const
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

