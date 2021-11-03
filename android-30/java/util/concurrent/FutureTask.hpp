#pragma once

#include "../../../JObject.hpp"

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
	class FutureTask : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FutureTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FutureTask(QAndroidJniObject obj);
		
		// Constructors
		FutureTask(JObject arg0);
		FutureTask(JObject arg0, jobject arg1);
		
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

