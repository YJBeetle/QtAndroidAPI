#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class Service;
}
namespace android::app::job
{
	class JobParameters;
}

namespace android::app::job
{
	class JobServiceEngine : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JobServiceEngine(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JobServiceEngine(QAndroidJniObject obj);
		
		// Constructors
		JobServiceEngine(android::app::Service arg0);
		
		// Methods
		__JniBaseClass getBinder();
		void jobFinished(android::app::job::JobParameters arg0, jboolean arg1);
		jboolean onStartJob(android::app::job::JobParameters arg0);
		jboolean onStopJob(android::app::job::JobParameters arg0);
	};
} // namespace android::app::job

