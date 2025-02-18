#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
		SplittableRandom(QJniObject obj) : JObject(obj) {}
		
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
		void nextBytes(JByteArray arg0) const;
		jint nextInt() const;
		jlong nextLong() const;
		java::util::SplittableRandom split() const;
		java::util::SplittableRandom split(JObject arg0) const;
		JObject splits() const;
		JObject splits(JObject arg0) const;
		JObject splits(jlong arg0) const;
		JObject splits(jlong arg0, JObject arg1) const;
	};
} // namespace java::util

