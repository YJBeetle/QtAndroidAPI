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
		
		JobServiceEngine(QAndroidJniObject obj);
		// Constructors
		JobServiceEngine(android::app::Service &arg0);
		JobServiceEngine() = default;
		
		// Methods
		QAndroidJniObject getBinder();
		void jobFinished(android::app::job::JobParameters arg0, jboolean arg1);
		jboolean onStartJob(android::app::job::JobParameters arg0);
		jboolean onStopJob(android::app::job::JobParameters arg0);
	};
} // namespace android::app::job

