#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../Service.hpp"

namespace android::app::job
{
	class JobParameters;
}
namespace android::content
{
	class Intent;
}

namespace android::app::job
{
	class JobService : public android::app::Service
	{
	public:
		// Fields
		static jstring PERMISSION_BIND();
		
		JobService(QAndroidJniObject obj);
		// Constructors
		JobService();
		
		// Methods
		void jobFinished(android::app::job::JobParameters arg0, jboolean arg1);
		QAndroidJniObject onBind(android::content::Intent arg0);
		jboolean onStartJob(android::app::job::JobParameters arg0);
		jboolean onStopJob(android::app::job::JobParameters arg0);
	};
} // namespace android::app::job

