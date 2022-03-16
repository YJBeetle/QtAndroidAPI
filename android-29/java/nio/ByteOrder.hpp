#pragma once

#include "../../JString.hpp"
#include "./ByteOrder.def.hpp"

namespace java::nio
{
	// Fields
	inline java::nio::ByteOrder ByteOrder::BIG_ENDIAN()
	{
		return getStaticObjectField(
			"java.nio.ByteOrder",
			"BIG_ENDIAN",
			"Ljava/nio/ByteOrder;"
		);
	}
	inline java::nio::ByteOrder ByteOrder::LITTLE_ENDIAN()
	{
		return getStaticObjectField(
			"java.nio.ByteOrder",
			"LITTLE_ENDIAN",
			"Ljava/nio/ByteOrder;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::ByteOrder ByteOrder::nativeOrder()
	{
		return callStaticObjectMethod(
			"java.nio.ByteOrder",
			"nativeOrder",
			"()Ljava/nio/ByteOrder;"
		);
	}
	inline JString ByteOrder::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio

// Base class headers

