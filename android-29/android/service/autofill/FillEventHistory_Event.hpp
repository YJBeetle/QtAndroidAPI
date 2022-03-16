#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../util/ArraySet.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/ArrayList.def.hpp"
#include "./FillEventHistory_Event.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline jint FillEventHistory_Event::TYPE_AUTHENTICATION_SELECTED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_AUTHENTICATION_SELECTED"
		);
	}
	inline jint FillEventHistory_Event::TYPE_CONTEXT_COMMITTED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_CONTEXT_COMMITTED"
		);
	}
	inline jint FillEventHistory_Event::TYPE_DATASET_AUTHENTICATION_SELECTED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_DATASET_AUTHENTICATION_SELECTED"
		);
	}
	inline jint FillEventHistory_Event::TYPE_DATASET_SELECTED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_DATASET_SELECTED"
		);
	}
	inline jint FillEventHistory_Event::TYPE_SAVE_SHOWN()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_SAVE_SHOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject FillEventHistory_Event::getChangedFields() const
	{
		return callObjectMethod(
			"getChangedFields",
			"()Ljava/util/Map;"
		);
	}
	inline android::os::Bundle FillEventHistory_Event::getClientState() const
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString FillEventHistory_Event::getDatasetId() const
	{
		return callObjectMethod(
			"getDatasetId",
			"()Ljava/lang/String;"
		);
	}
	inline JObject FillEventHistory_Event::getFieldsClassification() const
	{
		return callObjectMethod(
			"getFieldsClassification",
			"()Ljava/util/Map;"
		);
	}
	inline JObject FillEventHistory_Event::getIgnoredDatasetIds() const
	{
		return callObjectMethod(
			"getIgnoredDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	inline JObject FillEventHistory_Event::getManuallyEnteredField() const
	{
		return callObjectMethod(
			"getManuallyEnteredField",
			"()Ljava/util/Map;"
		);
	}
	inline JObject FillEventHistory_Event::getSelectedDatasetIds() const
	{
		return callObjectMethod(
			"getSelectedDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	inline jint FillEventHistory_Event::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JString FillEventHistory_Event::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::autofill

// Base class headers

