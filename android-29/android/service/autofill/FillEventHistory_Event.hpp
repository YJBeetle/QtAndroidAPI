#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::util
{
	class ArraySet;
}
namespace java::util
{
	class ArrayList;
}

namespace android::service::autofill
{
	class FillEventHistory_Event : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_AUTHENTICATION_SELECTED();
		static jint TYPE_CONTEXT_COMMITTED();
		static jint TYPE_DATASET_AUTHENTICATION_SELECTED();
		static jint TYPE_DATASET_SELECTED();
		static jint TYPE_SAVE_SHOWN();
		
		FillEventHistory_Event(QAndroidJniObject obj);
		// Constructors
		FillEventHistory_Event() = default;
		
		// Methods
		QAndroidJniObject getChangedFields();
		QAndroidJniObject getClientState();
		jstring getDatasetId();
		QAndroidJniObject getFieldsClassification();
		QAndroidJniObject getIgnoredDatasetIds();
		QAndroidJniObject getManuallyEnteredField();
		QAndroidJniObject getSelectedDatasetIds();
		jint getType();
		jstring toString();
	};
} // namespace android::service::autofill

