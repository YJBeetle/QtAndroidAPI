#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::util::concurrent
{
	class Executors : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Executors(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Executors(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject callable(__JniBaseClass arg0);
		static QAndroidJniObject callable(__JniBaseClass arg0, jobject arg1);
		static QAndroidJniObject defaultThreadFactory();
		static QAndroidJniObject newCachedThreadPool();
		static QAndroidJniObject newCachedThreadPool(__JniBaseClass arg0);
		static QAndroidJniObject newFixedThreadPool(jint arg0);
		static QAndroidJniObject newFixedThreadPool(jint arg0, __JniBaseClass arg1);
		static QAndroidJniObject newScheduledThreadPool(jint arg0);
		static QAndroidJniObject newScheduledThreadPool(jint arg0, __JniBaseClass arg1);
		static QAndroidJniObject newSingleThreadExecutor();
		static QAndroidJniObject newSingleThreadExecutor(__JniBaseClass arg0);
		static QAndroidJniObject newSingleThreadScheduledExecutor();
		static QAndroidJniObject newSingleThreadScheduledExecutor(__JniBaseClass arg0);
		static QAndroidJniObject newWorkStealingPool();
		static QAndroidJniObject newWorkStealingPool(jint arg0);
		static QAndroidJniObject privilegedCallable(__JniBaseClass arg0);
		static QAndroidJniObject privilegedCallableUsingCurrentClassLoader(__JniBaseClass arg0);
		static QAndroidJniObject privilegedThreadFactory();
		static QAndroidJniObject unconfigurableExecutorService(__JniBaseClass arg0);
		static QAndroidJniObject unconfigurableScheduledExecutorService(__JniBaseClass arg0);
	};
} // namespace java::util::concurrent

