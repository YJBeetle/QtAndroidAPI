#pragma once

#include "../../../JObject.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class CountDownLatch : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CountDownLatch(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CountDownLatch(QAndroidJniObject obj);
		
		// Constructors
		CountDownLatch(jint arg0);
		
		// Methods
		jboolean await(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void await();
		void countDown();
		jlong getCount();
		jstring toString();
	};
} // namespace java::util::concurrent

