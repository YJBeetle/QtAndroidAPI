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
		static jint NO_SAVE_UI_REASON_DATASET_MATCH();
		static jint NO_SAVE_UI_REASON_FIELD_VALIDATION_FAILED();
		static jint NO_SAVE_UI_REASON_HAS_EMPTY_REQUIRED();
		static jint NO_SAVE_UI_REASON_NONE();
		static jint NO_SAVE_UI_REASON_NO_SAVE_INFO();
		static jint NO_SAVE_UI_REASON_NO_VALUE_CHANGED();
		static jint NO_SAVE_UI_REASON_WITH_DELAY_SAVE_FLAG();
		static jint TYPE_AUTHENTICATION_SELECTED();
		static jint TYPE_CONTEXT_COMMITTED();
		static jint TYPE_DATASETS_SHOWN();
		static jint TYPE_DATASET_AUTHENTICATION_SELECTED();
		static jint TYPE_DATASET_SELECTED();
		static jint TYPE_SAVE_SHOWN();
		static jint UI_TYPE_DIALOG();
		static jint UI_TYPE_INLINE();
		static jint UI_TYPE_MENU();
		static jint UI_TYPE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillEventHistory_Event(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillEventHistory_Event(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getChangedFields() const;
		android::os::Bundle getClientState() const;
		JString getDatasetId() const;
		JObject getFieldsClassification() const;
		JObject getIgnoredDatasetIds() const;
		JObject getManuallyEnteredField() const;
		jint getNoSaveUiReason() const;
		JObject getSelectedDatasetIds() const;
		jint getType() const;
		jint getUiType() const;
		JString toString() const;
	};
} // namespace android::service::autofill

