#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class FillResponse_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		FillResponse_Builder(QAndroidJniObject obj);
		// Constructors
		FillResponse_Builder();
		
		// Methods
		QAndroidJniObject addDataset(android::service::autofill::Dataset arg0);
		QAndroidJniObject build();
		QAndroidJniObject disableAutofill(jlong arg0);
		QAndroidJniObject setAuthentication(jarray arg0, android::content::IntentSender arg1, android::widget::RemoteViews arg2);
		QAndroidJniObject setClientState(android::os::Bundle arg0);
		QAndroidJniObject setFieldClassificationIds(jarray arg0);
		QAndroidJniObject setFlags(jint arg0);
		QAndroidJniObject setFooter(android::widget::RemoteViews arg0);
		QAndroidJniObject setHeader(android::widget::RemoteViews arg0);
		QAndroidJniObject setIgnoredIds(jarray arg0);
		QAndroidJniObject setSaveInfo(android::service::autofill::SaveInfo arg0);
		QAndroidJniObject setUserData(android::service::autofill::UserData arg0);
	};
} // namespace android::service::autofill

