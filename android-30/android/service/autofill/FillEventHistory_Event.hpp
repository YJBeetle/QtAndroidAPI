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
		static jint TYPE_AUTHENTICATION_SELECTED();
		static jint TYPE_CONTEXT_COMMITTED();
		static jint TYPE_DATASETS_SHOWN();
		static jint TYPE_DATASET_AUTHENTICATION_SELECTED();
		static jint TYPE_DATASET_SELECTED();
		static jint TYPE_SAVE_SHOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit FillEventHistory_Event(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FillEventHistory_Event(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getChangedFields();
		android::os::Bundle getClientState();
		jstring getDatasetId();
		__JniBaseClass getFieldsClassification();
		__JniBaseClass getIgnoredDatasetIds();
		__JniBaseClass getManuallyEnteredField();
		__JniBaseClass getSelectedDatasetIds();
		jint getType();
		jstring toString();
	};
} // namespace android::service::autofill

