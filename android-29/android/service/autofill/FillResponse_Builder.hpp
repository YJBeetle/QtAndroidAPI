#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::content
{
	class IntentSender;
}
namespace android::os
{
	class Bundle;
}
namespace android::service::autofill
{
	class Dataset;
}
namespace android::service::autofill
{
	class FillResponse;
}
namespace android::service::autofill
{
	class SaveInfo;
}
namespace android::service::autofill
{
	class UserData;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::service::autofill
{
	class FillResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillResponse_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		FillResponse_Builder();
		
		// Methods
		android::service::autofill::FillResponse_Builder addDataset(android::service::autofill::Dataset arg0) const;
		android::service::autofill::FillResponse build() const;
		android::service::autofill::FillResponse_Builder disableAutofill(jlong arg0) const;
		android::service::autofill::FillResponse_Builder setAuthentication(JArray arg0, android::content::IntentSender arg1, android::widget::RemoteViews arg2) const;
		android::service::autofill::FillResponse_Builder setClientState(android::os::Bundle arg0) const;
		android::service::autofill::FillResponse_Builder setFieldClassificationIds(JArray arg0) const;
		android::service::autofill::FillResponse_Builder setFlags(jint arg0) const;
		android::service::autofill::FillResponse_Builder setFooter(android::widget::RemoteViews arg0) const;
		android::service::autofill::FillResponse_Builder setHeader(android::widget::RemoteViews arg0) const;
		android::service::autofill::FillResponse_Builder setIgnoredIds(JArray arg0) const;
		android::service::autofill::FillResponse_Builder setSaveInfo(android::service::autofill::SaveInfo arg0) const;
		android::service::autofill::FillResponse_Builder setUserData(android::service::autofill::UserData arg0) const;
	};
} // namespace android::service::autofill

