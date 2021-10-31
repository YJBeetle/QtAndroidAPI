#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Random : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Random(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Random(QAndroidJniObject obj);
		
		// Constructors
		Random();
		Random(jlong arg0);
		
		// Methods
		__JniBaseClass doubles();
		__JniBaseClass doubles(jlong arg0);
		__JniBaseClass doubles(jdouble arg0, jdouble arg1);
		__JniBaseClass doubles(jlong arg0, jdouble arg1, jdouble arg2);
		__JniBaseClass ints();
		__JniBaseClass ints(jlong arg0);
		__JniBaseClass ints(jint arg0, jint arg1);
		__JniBaseClass ints(jlong arg0, jint arg1, jint arg2);
		__JniBaseClass longs();
		__JniBaseClass longs(jlong arg0);
		__JniBaseClass longs(jlong arg0, jlong arg1);
		__JniBaseClass longs(jlong arg0, jlong arg1, jlong arg2);
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

