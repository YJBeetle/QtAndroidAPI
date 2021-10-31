#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::service::autofill
{
	class FillEventHistory_Event : public __JniBaseClass
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillEventHistory_Event(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FillEventHistory_Event(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getChangedFields();
		android::os::Bundle getClientState();
		jstring getDatasetId();
		__JniBaseClass getFieldsClassification();
		__JniBaseClass getIgnoredDatasetIds();
		__JniBaseClass getManuallyEnteredField();
		jint getNoSaveUiReason();
		__JniBaseClass getSelectedDatasetIds();
		jint getType();
		jstring toString();
	};
} // namespace android::service::autofill

