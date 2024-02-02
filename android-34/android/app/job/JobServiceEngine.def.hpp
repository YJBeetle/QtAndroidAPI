#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class Notification;
}
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
	class JobWorkItem;
}

namespace android::app::job
{
	class JobServiceEngine : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JobServiceEngine(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobServiceEngine(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		JobServiceEngine(android::app::Service arg0);
		
		// Methods
		JObject getBinder() const;
		void jobFinished(android::app::job::JobParameters arg0, jboolean arg1) const;
		void onNetworkChanged(android::app::job::JobParameters arg0) const;
		jboolean onStartJob(android::app::job::JobParameters arg0) const;
		jboolean onStopJob(android::app::job::JobParameters arg0) const;
		void setNotification(android::app::job::JobParameters arg0, jint arg1, android::app::Notification arg2, jint arg3) const;
		void updateEstimatedNetworkBytes(android::app::job::JobParameters arg0, android::app::job::JobWorkItem arg1, jlong arg2, jlong arg3) const;
		void updateTransferredNetworkBytes(android::app::job::JobParameters arg0, android::app::job::JobWorkItem arg1, jlong arg2, jlong arg3) const;
	};
} // namespace android::app::job

