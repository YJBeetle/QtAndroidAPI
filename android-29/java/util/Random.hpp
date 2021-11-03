#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
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
		Random(QJniObject obj);
		
		// Constructors
		Random();
		Random(jlong arg0);
		
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
		void nextBytes(jbyteArray arg0);
		jdouble nextDouble();
		jfloat nextFloat();
		jdouble nextGaussian();
		jint nextInt();
		jint nextInt(jint arg0);
		jlong nextLong();
		void setSeed(jlong arg0);
	};
} // namespace java::util

