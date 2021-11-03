#pragma once

#include "../Service.hpp"

namespace android::app::job
{
	class JobParameters;
}
namespace android::content
{
	class Intent;
}
class JString;

namespace android::app::job
{
	class JobService : public android::app::Service
	{
	public:
		// Fields
		static JString PERMISSION_BIND();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JobService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		JobService(QAndroidJniObject obj);
		
		// Constructors
		JobService();
		
		// Methods
		void jobFinished(android::app::job::JobParameters arg0, jboolean arg1) const;
		JObject onBind(android::content::Intent arg0) const;
		jboolean onStartJob(android::app::job::JobParameters arg0) const;
		jboolean onStopJob(android::app::job::JobParameters arg0) const;
	};
} // namespace android::app::job

