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
		QAndroidJniObject doubles();
		QAndroidJniObject doubles(jlong arg0);
		QAndroidJniObject doubles(jdouble arg0, jdouble arg1);
		QAndroidJniObject doubles(jlong arg0, jdouble arg1, jdouble arg2);
		QAndroidJniObject ints();
		QAndroidJniObject ints(jlong arg0);
		QAndroidJniObject ints(jint arg0, jint arg1);
		QAndroidJniObject ints(jlong arg0, jint arg1, jint arg2);
		QAndroidJniObject longs();
		QAndroidJniObject longs(jlong arg0);
		QAndroidJniObject longs(jlong arg0, jlong arg1);
		QAndroidJniObject longs(jlong arg0, jlong arg1, jlong arg2);
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

