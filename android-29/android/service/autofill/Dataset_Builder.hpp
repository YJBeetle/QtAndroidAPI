#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class IntentSender;
}
namespace android::service::autofill
{
	class Dataset;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace android::widget
{
	class RemoteViews;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class Dataset_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Dataset_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Dataset_Builder(QAndroidJniObject obj);
		
		// Constructors
		Dataset_Builder();
		Dataset_Builder(android::widget::RemoteViews arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAuthentication(android::content::IntentSender arg0);
		QAndroidJniObject setId(jstring arg0);
		QAndroidJniObject setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1);
		QAndroidJniObject setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, android::widget::RemoteViews arg2);
		QAndroidJniObject setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2);
		QAndroidJniObject setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2, android::widget::RemoteViews arg3);
	};
} // namespace android::service::autofill

