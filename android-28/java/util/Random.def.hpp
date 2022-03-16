#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JString;
namespace java::util::concurrent::atomic
{
	class AtomicLong;
}

namespace java::util
{
	class Random : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Random(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Random(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Random();
		Random(jlong arg0);
		
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
		jfloat nextFloat() const;
		jdouble nextGaussian() const;
		jint nextInt() const;
		jint nextInt(jint arg0) const;
		jlong nextLong() const;
		void setSeed(jlong arg0) const;
	};
} // namespace java::util

