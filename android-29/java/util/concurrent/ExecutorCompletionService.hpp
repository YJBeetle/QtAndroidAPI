#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class AbstractExecutorService;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class ExecutorCompletionService : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExecutorCompletionService(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ExecutorCompletionService(QAndroidJniObject obj);
		
		// Constructors
		ExecutorCompletionService(__JniBaseClass arg0);
		ExecutorCompletionService(__JniBaseClass arg0, __JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject poll();
		QAndroidJniObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject submit(__JniBaseClass arg0);
		QAndroidJniObject submit(__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject take();
	};
} // namespace java::util::concurrent

