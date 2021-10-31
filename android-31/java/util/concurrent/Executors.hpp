#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::util::concurrent
{
	class Executors : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Executors(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Executors(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass callable(__JniBaseClass arg0);
		static __JniBaseClass callable(__JniBaseClass arg0, jobject arg1);
		static __JniBaseClass defaultThreadFactory();
		static __JniBaseClass newCachedThreadPool();
		static __JniBaseClass newCachedThreadPool(__JniBaseClass arg0);
		static __JniBaseClass newFixedThreadPool(jint arg0);
		static __JniBaseClass newFixedThreadPool(jint arg0, __JniBaseClass arg1);
		static __JniBaseClass newScheduledThreadPool(jint arg0);
		static __JniBaseClass newScheduledThreadPool(jint arg0, __JniBaseClass arg1);
		static __JniBaseClass newSingleThreadExecutor();
		static __JniBaseClass newSingleThreadExecutor(__JniBaseClass arg0);
		static __JniBaseClass newSingleThreadScheduledExecutor();
		static __JniBaseClass newSingleThreadScheduledExecutor(__JniBaseClass arg0);
		static __JniBaseClass newWorkStealingPool();
		static __JniBaseClass newWorkStealingPool(jint arg0);
		static __JniBaseClass privilegedCallable(__JniBaseClass arg0);
		static __JniBaseClass privilegedCallableUsingCurrentClassLoader(__JniBaseClass arg0);
		static __JniBaseClass privilegedThreadFactory();
		static __JniBaseClass unconfigurableExecutorService(__JniBaseClass arg0);
		static __JniBaseClass unconfigurableScheduledExecutorService(__JniBaseClass arg0);
	};
} // namespace java::util::concurrent

