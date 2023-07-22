#pragma once

#include "../../JCharArray.hpp"
#include "./Writer.def.hpp"
#include "../../JString.hpp"
#include "./FilterWriter.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void FilterWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void FilterWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void FilterWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void FilterWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void FilterWriter::write(JString arg0, jint arg1, jint arg2) const
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
