#pragma once

#include "../Random.hpp"

class JArray;
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::lang
{
	class Thread;
}
namespace java::lang
{
	class ThreadLocal;
}
namespace java::security
{
	class AccessControlContext;
}
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace java::util::concurrent::atomic
{
	class AtomicLong;
}

namespace java::util::concurrent
{
	class ThreadLocalRandom : public java::util::Random
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ThreadLocalRandom(const char *className, const char *sig, Ts...agv) : java::util::Random(className, sig, std::forward<Ts>(agv)...) {}
		ThreadLocalRandom(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::ThreadLocalRandom current();
		JObject doubles() const;
		JObject doubles(jlong arg0) const;
		JObject doubles(jdouble arg0, jdouble arg1) const;
		JObject doubles(jlong arg0, jdouble arg1, jdouble arg2) const;
		JObject ints() const;
		JObject ints(jlong arg0) const;
		JObject ints(jint arg0, jint arg1) const;
		JObject ints(jlong arg0, jint arg1, jint arg2) const;
		JObject longs() const;
		JObject longs(jlong arg0) const;
		JObject longs(jlong arg0, jlong arg1) const;
		JObject longs(jlong arg0, jlong arg1, jlong arg2) const;
		jboolean nextBoolean() const;
		jdouble nextDouble() const;
		jdouble nextDouble(jdouble arg0) const;
		jdouble nextDouble(jdouble arg0, jdouble arg1) const;
		jfloat nextFloat() const;
		jdouble nextGaussian() const;
		jint nextInt() const;
		jint nextInt(jint arg0) const;
		jint nextInt(jint arg0, jint arg1) const;
		jlong nextLong() const;
		jlong nextLong(jlong arg0) const;
		jlong nextLong(jlong arg0, jlong arg1) const;
		void setSeed(jlong arg0) const;
	};
} // namespace java::util::concurrent

