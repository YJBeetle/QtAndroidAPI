#pragma once

#include "./Charset.def.hpp"
#include "./StandardCharsets.def.hpp"

namespace java::nio::charset
{
	// Fields
	inline java::nio::charset::Charset StandardCharsets::ISO_8859_1()
	{
		return getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"ISO_8859_1",
			"Ljava/nio/charset/Charset;"
		);
	}
	inline java::nio::charset::Charset StandardCharsets::US_ASCII()
	{
		return getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"US_ASCII",
			"Ljava/nio/charset/Charset;"
		);
	}
	inline java::nio::charset::Charset StandardCharsets::UTF_16()
	{
		return getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_16",
			"Ljava/nio/charset/Charset;"
		);
	}
	inline java::nio::charset::Charset StandardCharsets::UTF_16BE()
	{
		return getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_16BE",
			"Ljava/nio/charset/Charset;"
		);
	}
	inline java::nio::charset::Charset StandardCharsets::UTF_16LE()
	{
		return getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_16LE",
			"Ljava/nio/charset/Charset;"
		);
	}
	inline java::nio::charset::Charset StandardCharsets::UTF_8()
	{
		return getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_8",
			"Ljava/nio/charset/Charset;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::nio::charset

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::charset;
#endif
