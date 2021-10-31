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
		
		// QJniObject forward
		template<typename ...Ts> explicit JobService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		JobService(QJniObject obj);
		
		// Constructors
		JobService();
		
		// Methods
		void jobFinished(android::app::job::JobParameters arg0, jboolean arg1);
		__JniBaseClass onBind(android::content::Intent arg0);
		jboolean onStartJob(android::app::job::JobParameters arg0);
		jboolean onStopJob(android::app::job::JobParameters arg0);
	};
} // namespace android::app::job

