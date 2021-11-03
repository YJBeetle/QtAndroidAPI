#pragma once

#include "../../../JObject.hpp"

class JArray;
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
class JString;

namespace android::service::autofill
{
	class SaveInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SaveInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SaveInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		SaveInfo_Builder(jint arg0);
		SaveInfo_Builder(jint arg0, JArray arg1);
		
		// Methods
		android::service::autofill::SaveInfo_Builder addSanitizer(JObject arg0, JArray arg1);
		android::service::autofill::SaveInfo build();
		android::service::autofill::SaveInfo_Builder setCustomDescription(android::service::autofill::CustomDescription arg0);
		android::service::autofill::SaveInfo_Builder setDescription(JString arg0);
		android::service::autofill::SaveInfo_Builder setFlags(jint arg0);
		android::service::autofill::SaveInfo_Builder setNegativeAction(jint arg0, android::content::IntentSender arg1);
		android::service::autofill::SaveInfo_Builder setOptionalIds(JArray arg0);
		android::service::autofill::SaveInfo_Builder setTriggerId(android::view::autofill::AutofillId arg0);
		android::service::autofill::SaveInfo_Builder setValidator(JObject arg0);
	};
} // namespace android::service::autofill

