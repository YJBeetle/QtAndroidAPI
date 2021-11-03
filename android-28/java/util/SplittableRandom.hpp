#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;
namespace java::util::concurrent::atomic
{
	class AtomicLong;
}

namespace java::util
{
	class SplittableRandom : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SplittableRandom(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SplittableRandom(QJniObject obj);
		
		// Constructors
		SplittableRandom();
		SplittableRandom(jlong arg0);
		
		// Methods
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
		void nextBytes(JByteArray arg0);
		jdouble nextDouble();
		jdouble nextDouble(jdouble arg0);
		jdouble nextDouble(jdouble arg0, jdouble arg1);
		jint nextInt();
		jint nextInt(jint arg0);
		jint nextInt(jint arg0, jint arg1);
		jlong nextLong();
		jlong nextLong(jlong arg0);
		jlong nextLong(jlong arg0, jlong arg1);
		java::util::SplittableRandom split();
	};
} // namespace java::util

