#pragma once

#include "../../../io/ObjectInputStream.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./DoubleAdder.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline DoubleAdder::DoubleAdder()
		: JObject(
			"java.util.concurrent.atomic.DoubleAdder",
			"()V"
		) {}
	
	// Methods
	inline void DoubleAdder::add(jdouble arg0) const
	{
		callMethod<void>(
			"add",
			"(D)V",
			arg0
		);
	}
	inline jdouble DoubleAdder::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jfloat DoubleAdder::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint DoubleAdder::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jlong DoubleAdder::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline void DoubleAdder::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jdouble DoubleAdder::sum() const
	{
		return callMethod<jdouble>(
			"sum",
			"()D"
		);
	}
	inline jdouble DoubleAdder::sumThenReset() const
	{
		return callMethod<jdouble>(
			"sumThenReset",
			"()D"
		);
	}
	inline JString DoubleAdder::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers
#include "../../../lang/Number.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::atomic;
#endif
