#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Thread;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class FutureTask : public __JniBaseClass
	{
	public:
		// Fields
		
		FutureTask(QAndroidJniObject obj);
		// Constructors
		FutureTask(__JniBaseClass arg0);
		FutureTask(__JniBaseClass arg0, jobject arg1);
		FutureTask() = default;
		
		// Methods
		jboolean cancel(jboolean arg0);
		jobject get();
		jobject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jboolean isCancelled();
		jboolean isDone();
		void run();
		jstring toString();
	};
} // namespace java::util::concurrent

