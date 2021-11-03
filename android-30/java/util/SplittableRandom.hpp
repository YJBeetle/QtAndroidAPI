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
		void nextBytes(JByteArray arg0) const;
		jdouble nextDouble() const;
		jdouble nextDouble(jdouble arg0) const;
		jdouble nextDouble(jdouble arg0, jdouble arg1) const;
		jint nextInt() const;
		jint nextInt(jint arg0) const;
		jint nextInt(jint arg0, jint arg1) const;
		jlong nextLong() const;
		jlong nextLong(jlong arg0) const;
		jlong nextLong(jlong arg0, jlong arg1) const;
		java::util::SplittableRandom split() const;
	};
} // namespace java::util

