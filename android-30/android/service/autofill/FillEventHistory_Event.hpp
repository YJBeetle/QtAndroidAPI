#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::service::autofill
{
	class FillEventHistory_Event : public JObject
	{
	public:
		// Fields
		static jint TYPE_AUTHENTICATION_SELECTED();
		static jint TYPE_CONTEXT_COMMITTED();
		static jint TYPE_DATASETS_SHOWN();
		static jint TYPE_DATASET_AUTHENTICATION_SELECTED();
		static jint TYPE_DATASET_SELECTED();
		static jint TYPE_SAVE_SHOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillEventHistory_Event(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillEventHistory_Event(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getChangedFields() const;
		android::os::Bundle getClientState() const;
		JString getDatasetId() const;
		JObject getFieldsClassification() const;
		JObject getIgnoredDatasetIds() const;
		JObject getManuallyEnteredField() const;
		JObject getSelectedDatasetIds() const;
		jint getType() const;
		JString toString() const;
	};
} // namespace android::service::autofill

