#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util::concurrent::atomic
{
	class AtomicLong;
}

namespace java::util
{
	class SplittableRandom : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SplittableRandom(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SplittableRandom(QAndroidJniObject obj);
		
		// Constructors
		SplittableRandom();
		SplittableRandom(jlong arg0);
		
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
		jdouble nextDouble(jdouble arg0);
		jdouble nextDouble(jdouble arg0, jdouble arg1);
		jint nextInt();
		jint nextInt(jint arg0);
		jint nextInt(jint arg0, jint arg1);
		jlong nextLong();
		jlong nextLong(jlong arg0);
		jlong nextLong(jlong arg0, jlong arg1);
		QAndroidJniObject split();
	};
} // namespace java::util

