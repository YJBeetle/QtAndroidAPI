#pragma once

#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::service::autofill
{
	class FillCallback;
}
namespace android::service::autofill
{
	class FillEventHistory;
}
namespace android::service::autofill
{
	class FillRequest;
}
namespace android::service::autofill
{
	class SaveCallback;
}
namespace android::service::autofill
{
	class SaveRequest;
}
class JString;

namespace android::service::autofill
{
	class AutofillService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AutofillService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		AutofillService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		AutofillService();
		
		// Methods
		android::service::autofill::FillEventHistory getFillEventHistory() const;
		JObject onBind(android::content::Intent arg0) const;
		void onConnected() const;
		void onCreate() const;
		void onDisconnected() const;
		void onFillRequest(android::service::autofill::FillRequest arg0, android::os::CancellationSignal arg1, android::service::autofill::FillCallback arg2) const;
		void onSaveRequest(android::service::autofill::SaveRequest arg0, android::service::autofill::SaveCallback arg1) const;
	};
} // namespace android::service::autofill

