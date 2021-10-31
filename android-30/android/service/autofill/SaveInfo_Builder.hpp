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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SaveInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SaveInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		SaveInfo_Builder(jint arg0);
		SaveInfo_Builder(jint arg0, jarray arg1);
		
		// Methods
		android::service::autofill::SaveInfo_Builder addSanitizer(__JniBaseClass arg0, jarray arg1);
		android::service::autofill::SaveInfo build();
		android::service::autofill::SaveInfo_Builder setCustomDescription(android::service::autofill::CustomDescription arg0);
		android::service::autofill::SaveInfo_Builder setDescription(jstring arg0);
		android::service::autofill::SaveInfo_Builder setFlags(jint arg0);
		android::service::autofill::SaveInfo_Builder setNegativeAction(jint arg0, android::content::IntentSender arg1);
		android::service::autofill::SaveInfo_Builder setOptionalIds(jarray arg0);
		android::service::autofill::SaveInfo_Builder setPositiveAction(jint arg0);
		android::service::autofill::SaveInfo_Builder setTriggerId(android::view::autofill::AutofillId arg0);
		android::service::autofill::SaveInfo_Builder setValidator(__JniBaseClass arg0);
	};
} // namespace android::service::autofill

