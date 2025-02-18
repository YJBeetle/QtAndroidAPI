#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "../../lang/reflect/Constructor.def.hpp"
#include "../../math/BigInteger.def.hpp"
#include "./RandomGeneratorFactory.def.hpp"

namespace java::util::random
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject RandomGeneratorFactory::all()
	{
		return callStaticObjectMethod(
			"java.util.random.RandomGeneratorFactory",
			"all",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline java::util::random::RandomGeneratorFactory RandomGeneratorFactory::getDefault()
	{
		return callStaticObjectMethod(
			"java.util.random.RandomGeneratorFactory",
			"getDefault",
			"()Ljava/util/random/RandomGeneratorFactory;"
		);
	}
	inline java::util::random::RandomGeneratorFactory RandomGeneratorFactory::of(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.random.RandomGeneratorFactory",
			"of",
			"(Ljava/lang/String;)Ljava/util/random/RandomGeneratorFactory;",
			arg0.object<jstring>()
		);
	}
	inline JObject RandomGeneratorFactory::create() const
	{
		return callObjectMethod(
			"create",
			"()Ljava/util/random/RandomGenerator;"
		);
	}
	inline JObject RandomGeneratorFactory::create(JByteArray arg0) const
	{
		return callObjectMethod(
			"create",
			"([B)Ljava/util/random/RandomGenerator;",
			arg0.object<jbyteArray>()
		);
	}
	inline JObject RandomGeneratorFactory::create(jlong arg0) const
	{
		return callObjectMethod(
			"create",
			"(J)Ljava/util/random/RandomGenerator;",
			arg0
		);
	}
	inline jint RandomGeneratorFactory::equidistribution() const
	{
		return callMethod<jint>(
			"equidistribution",
			"()I"
		);
	}
	inline JString RandomGeneratorFactory::group() const
	{
		return callObjectMethod(
			"group",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean RandomGeneratorFactory::isArbitrarilyJumpable() const
	{
		return callMethod<jboolean>(
			"isArbitrarilyJumpable",
			"()Z"
		);
	}
	inline jboolean RandomGeneratorFactory::isDeprecated() const
	{
		return callMethod<jboolean>(
			"isDeprecated",
			"()Z"
		);
	}
	inline jboolean RandomGeneratorFactory::isHardware() const
	{
		return callMethod<jboolean>(
			"isHardware",
			"()Z"
		);
	}
	inline jboolean RandomGeneratorFactory::isJumpable() const
	{
		return callMethod<jboolean>(
			"isJumpable",
			"()Z"
		);
	}
	inline jboolean RandomGeneratorFactory::isLeapable() const
	{
		return callMethod<jboolean>(
			"isLeapable",
			"()Z"
		);
	}
	inline jboolean RandomGeneratorFactory::isSplittable() const
	{
		return callMethod<jboolean>(
			"isSplittable",
			"()Z"
		);
	}
	inline jboolean RandomGeneratorFactory::isStatistical() const
	{
		return callMethod<jboolean>(
			"isStatistical",
			"()Z"
		);
	}
	inline jboolean RandomGeneratorFactory::isStochastic() const
	{
		return callMethod<jboolean>(
			"isStochastic",
			"()Z"
		);
	}
	inline jboolean RandomGeneratorFactory::isStreamable() const
	{
		return callMethod<jboolean>(
			"isStreamable",
			"()Z"
		);
	}
	inline JString RandomGeneratorFactory::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	inline java::math::BigInteger RandomGeneratorFactory::period() const
	{
		return callObjectMethod(
			"period",
			"()Ljava/math/BigInteger;"
		);
	}
	inline jint RandomGeneratorFactory::stateBits() const
	{
		return callMethod<jint>(
			"stateBits",
			"()I"
		);
	}
} // namespace java::util::random

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::random;
#endif
