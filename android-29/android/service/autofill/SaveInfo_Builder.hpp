#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class IntentSender;
}
namespace android::service::autofill
{
	class CustomDescription;
}
namespace android::service::autofill
{
	class SaveInfo;
}
namespace android::view::autofill
{
	class AutofillId;
}

namespace android::service::autofill
{
	class SaveInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		SaveInfo_Builder(QAndroidJniObject obj);
		// Constructors
		SaveInfo_Builder(jint &arg0);
		SaveInfo_Builder(jint &arg0, jarray &arg1);
		SaveInfo_Builder() = default;
		
		// Methods
		QAndroidJniObject addSanitizer(__JniBaseClass arg0, jarray arg1);
		QAndroidJniObject build();
		QAndroidJniObject setCustomDescription(android::service::autofill::CustomDescription arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDescription(const QString &arg0);
		QAndroidJniObject setFlags(jint arg0);
		QAndroidJniObject setNegativeAction(jint arg0, android::content::IntentSender arg1);
		QAndroidJniObject setOptionalIds(jarray arg0);
		QAndroidJniObject setTriggerId(android::view::autofill::AutofillId arg0);
		QAndroidJniObject setValidator(__JniBaseClass arg0);
	};
} // namespace android::service::autofill

