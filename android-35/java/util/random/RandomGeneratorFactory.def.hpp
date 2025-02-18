#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JClass;
class JString;
namespace java::lang::reflect
{
	class Constructor;
}
namespace java::math
{
	class BigInteger;
}

namespace java::util::random
{
	class RandomGeneratorFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RandomGeneratorFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RandomGeneratorFactory(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject all();
		static java::util::random::RandomGeneratorFactory getDefault();
		static java::util::random::RandomGeneratorFactory of(JString arg0);
		JObject create() const;
		JObject create(JByteArray arg0) const;
		JObject create(jlong arg0) const;
		jint equidistribution() const;
		JString group() const;
		jboolean isArbitrarilyJumpable() const;
		jboolean isDeprecated() const;
		jboolean isHardware() const;
		jboolean isJumpable() const;
		jboolean isLeapable() const;
		jboolean isSplittable() const;
		jboolean isStatistical() const;
		jboolean isStochastic() const;
		jboolean isStreamable() const;
		JString name() const;
		java::math::BigInteger period() const;
		jint stateBits() const;
	};
} // namespace java::util::random

