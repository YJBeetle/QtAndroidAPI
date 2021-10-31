#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class CountDownLatch : public __JniBaseClass
	{
	public:
		// Fields
		
		CountDownLatch(QAndroidJniObject obj);
		// Constructors
		CountDownLatch(jint arg0);
		CountDownLatch() = default;
		
		// Methods
		jboolean await(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void await();
		void countDown();
		jlong getCount();
		jstring toString();
	};
} // namespace java::util::concurrent

