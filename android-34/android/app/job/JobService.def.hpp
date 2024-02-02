#pragma once

#include "../Service.def.hpp"

namespace android::app
{
	class Notification;
}
namespace android::app::job
{
	class JobParameters;
}
namespace android::app::job
{
	class JobWorkItem;
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
		static jint JOB_END_NOTIFICATION_POLICY_DETACH();
		static jint JOB_END_NOTIFICATION_POLICY_REMOVE();
		static JString PERMISSION_BIND();
		
		// QJniObject forward
		template<typename ...Ts> explicit JobService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		JobService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		JobService();
		
		// Methods
		void jobFinished(android::app::job::JobParameters arg0, jboolean arg1) const;
		JObject onBind(android::content::Intent arg0) const;
		void onNetworkChanged(android::app::job::JobParameters arg0) const;
		jboolean onStartJob(android::app::job::JobParameters arg0) const;
		jboolean onStopJob(android::app::job::JobParameters arg0) const;
		void setNotification(android::app::job::JobParameters arg0, jint arg1, android::app::Notification arg2, jint arg3) const;
		void updateEstimatedNetworkBytes(android::app::job::JobParameters arg0, jlong arg1, jlong arg2) const;
		void updateEstimatedNetworkBytes(android::app::job::JobParameters arg0, android::app::job::JobWorkItem arg1, jlong arg2, jlong arg3) const;
		void updateTransferredNetworkBytes(android::app::job::JobParameters arg0, jlong arg1, jlong arg2) const;
		void updateTransferredNetworkBytes(android::app::job::JobParameters arg0, android::app::job::JobWorkItem arg1, jlong arg2, jlong arg3) const;
	};
} // namespace android::app::job

