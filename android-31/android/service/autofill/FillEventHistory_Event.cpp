#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./FillEventHistory_Event.hpp"

namespace android::service::autofill
{
	// Fields
	jint FillEventHistory_Event::NO_SAVE_UI_REASON_DATASET_MATCH()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"NO_SAVE_UI_REASON_DATASET_MATCH"
		);
	}
	jint FillEventHistory_Event::NO_SAVE_UI_REASON_FIELD_VALIDATION_FAILED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"NO_SAVE_UI_REASON_FIELD_VALIDATION_FAILED"
		);
	}
	jint FillEventHistory_Event::NO_SAVE_UI_REASON_HAS_EMPTY_REQUIRED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"NO_SAVE_UI_REASON_HAS_EMPTY_REQUIRED"
		);
	}
	jint FillEventHistory_Event::NO_SAVE_UI_REASON_NONE()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"NO_SAVE_UI_REASON_NONE"
		);
	}
	jint FillEventHistory_Event::NO_SAVE_UI_REASON_NO_SAVE_INFO()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"NO_SAVE_UI_REASON_NO_SAVE_INFO"
		);
	}
	jint FillEventHistory_Event::NO_SAVE_UI_REASON_NO_VALUE_CHANGED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"NO_SAVE_UI_REASON_NO_VALUE_CHANGED"
		);
	}
	jint FillEventHistory_Event::NO_SAVE_UI_REASON_WITH_DELAY_SAVE_FLAG()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"NO_SAVE_UI_REASON_WITH_DELAY_SAVE_FLAG"
		);
	}
	jint FillEventHistory_Event::TYPE_AUTHENTICATION_SELECTED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_AUTHENTICATION_SELECTED"
		);
	}
	jint FillEventHistory_Event::TYPE_CONTEXT_COMMITTED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_CONTEXT_COMMITTED"
		);
	}
	jint FillEventHistory_Event::TYPE_DATASETS_SHOWN()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_DATASETS_SHOWN"
		);
	}
	jint FillEventHistory_Event::TYPE_DATASET_AUTHENTICATION_SELECTED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_DATASET_AUTHENTICATION_SELECTED"
		);
	}
	jint FillEventHistory_Event::TYPE_DATASET_SELECTED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_DATASET_SELECTED"
		);
	}
	jint FillEventHistory_Event::TYPE_SAVE_SHOWN()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_SAVE_SHOWN"
		);
	}
	
	// QJniObject forward
	FillEventHistory_Event::FillEventHistory_Event(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject FillEventHistory_Event::getChangedFields() const
	{
		return callObjectMethod(
			"getChangedFields",
			"()Ljava/util/Map;"
		);
	}
	android::os::Bundle FillEventHistory_Event::getClientState() const
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	JString FillEventHistory_Event::getDatasetId() const
	{
		return callObjectMethod(
			"getDatasetId",
			"()Ljava/lang/String;"
		);
	}
	JObject FillEventHistory_Event::getFieldsClassification() const
	{
		return callObjectMethod(
			"getFieldsClassification",
			"()Ljava/util/Map;"
		);
	}
	JObject FillEventHistory_Event::getIgnoredDatasetIds() const
	{
		return callObjectMethod(
			"getIgnoredDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	JObject FillEventHistory_Event::getManuallyEnteredField() const
	{
		return callObjectMethod(
			"getManuallyEnteredField",
			"()Ljava/util/Map;"
		);
	}
	jint FillEventHistory_Event::getNoSaveUiReason() const
	{
		return callMethod<jint>(
			"getNoSaveUiReason",
			"()I"
		);
	}
	JObject FillEventHistory_Event::getSelectedDatasetIds() const
	{
		return callObjectMethod(
			"getSelectedDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	jint FillEventHistory_Event::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	JString FillEventHistory_Event::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::autofill

