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
		
		// QJniObject forward
		template<typename ...Ts> explicit FutureTask(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FutureTask(QJniObject obj);
		
		// Constructors
		FutureTask(__JniBaseClass arg0);
		FutureTask(__JniBaseClass arg0, jobject arg1);
		
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

