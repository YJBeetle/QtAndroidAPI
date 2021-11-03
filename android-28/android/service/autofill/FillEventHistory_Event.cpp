#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Bundle.hpp"
#include "../../util/ArraySet.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/ArrayList.hpp"
#include "./FillEventHistory_Event.hpp"

namespace android::service::autofill
{
	// Fields
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
	JObject FillEventHistory_Event::getChangedFields()
	{
		return callObjectMethod(
			"getChangedFields",
			"()Ljava/util/Map;"
		);
	}
	android::os::Bundle FillEventHistory_Event::getClientState()
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	JString FillEventHistory_Event::getDatasetId()
	{
		return callObjectMethod(
			"getDatasetId",
			"()Ljava/lang/String;"
		);
	}
	JObject FillEventHistory_Event::getFieldsClassification()
	{
		return callObjectMethod(
			"getFieldsClassification",
			"()Ljava/util/Map;"
		);
	}
	JObject FillEventHistory_Event::getIgnoredDatasetIds()
	{
		return callObjectMethod(
			"getIgnoredDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	JObject FillEventHistory_Event::getManuallyEnteredField()
	{
		return callObjectMethod(
			"getManuallyEnteredField",
			"()Ljava/util/Map;"
		);
	}
	JObject FillEventHistory_Event::getSelectedDatasetIds()
	{
		return callObjectMethod(
			"getSelectedDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	jint FillEventHistory_Event::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	JString FillEventHistory_Event::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::autofill

