#pragma once

#include "./Number.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline Number::Number()
		: JObject(
			"java.lang.Number",
			"()V"
		) {}
	
	// Methods
	inline jbyte Number::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	inline jdouble Number::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jfloat Number::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint Number::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jlong Number::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline jshort Number::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
} // namespace java::lang

// Base class headers

