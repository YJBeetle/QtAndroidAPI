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
		JObject doubles();
		JObject doubles(jlong arg0);
		JObject doubles(jdouble arg0, jdouble arg1);
		JObject doubles(jlong arg0, jdouble arg1, jdouble arg2);
		JObject ints();
		JObject ints(jlong arg0);
		JObject ints(jint arg0, jint arg1);
		JObject ints(jlong arg0, jint arg1, jint arg2);
		JObject longs();
		JObject longs(jlong arg0);
		JObject longs(jlong arg0, jlong arg1);
		JObject longs(jlong arg0, jlong arg1, jlong arg2);
		jboolean nextBoolean();
		jdouble nextDouble();
		jdouble nextDouble(jdouble arg0);
		jdouble nextDouble(jdouble arg0, jdouble arg1);
		jfloat nextFloat();
		jdouble nextGaussian();
		jint nextInt();
		jint nextInt(jint arg0);
		jint nextInt(jint arg0, jint arg1);
		jlong nextLong();
		jlong nextLong(jlong arg0);
		jlong nextLong(jlong arg0, jlong arg1);
		void setSeed(jlong arg0);
	};
} // namespace java::util::concurrent

