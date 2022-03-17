#pragma once

#include "../../../io/ObjectInputStream.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./LongAdder.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline LongAdder::LongAdder()
		: JObject(
			"java.util.concurrent.atomic.LongAdder",
			"()V"
		) {}
	
	// Methods
	inline void LongAdder::add(jlong arg0) const
	{
		callMethod<void>(
			"add",
			"(J)V",
			arg0
		);
	}
	inline void LongAdder::decrement() const
	{
		callMethod<void>(
			"decrement",
			"()V"
		);
	}
	inline jdouble LongAdder::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jfloat LongAdder::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline void LongAdder::increment() const
	{
		callMethod<void>(
			"increment",
			"()V"
		);
	}
	inline jint LongAdder::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jlong LongAdder::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline void LongAdder::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong LongAdder::sum() const
	{
		return callMethod<jlong>(
			"sum",
			"()J"
		);
	}
	inline jlong LongAdder::sumThenReset() const
	{
		return callMethod<jlong>(
			"sumThenReset",
			"()J"
		);
	}
	inline JString LongAdder::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers
#include "../../../lang/Number.hpp"

