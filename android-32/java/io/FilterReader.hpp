#pragma once

#include "../../JCharArray.hpp"
#include "./Reader.def.hpp"
#include "./FilterReader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void FilterReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void FilterReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean FilterReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint FilterReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint FilterReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean FilterReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	inline void FilterReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong FilterReader::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

// Base class headers
#include "./Reader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
