#pragma once

#include "./FrequencyCapFilters.def.hpp"
#include "./FrequencyCapFilters_Builder.def.hpp"

namespace android::adservices::common
{
	// Fields
	
	// Constructors
	inline FrequencyCapFilters_Builder::FrequencyCapFilters_Builder()
		: JObject(
			"android.adservices.common.FrequencyCapFilters$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::common::FrequencyCapFilters FrequencyCapFilters_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/common/FrequencyCapFilters;"
		);
	}
	inline android::adservices::common::FrequencyCapFilters_Builder FrequencyCapFilters_Builder::setKeyedFrequencyCapsForClickEvents(JObject arg0) const
	{
		return callObjectMethod(
			"setKeyedFrequencyCapsForClickEvents",
			"(Ljava/util/List;)Landroid/adservices/common/FrequencyCapFilters$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::common::FrequencyCapFilters_Builder FrequencyCapFilters_Builder::setKeyedFrequencyCapsForImpressionEvents(JObject arg0) const
	{
		return callObjectMethod(
			"setKeyedFrequencyCapsForImpressionEvents",
			"(Ljava/util/List;)Landroid/adservices/common/FrequencyCapFilters$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::common::FrequencyCapFilters_Builder FrequencyCapFilters_Builder::setKeyedFrequencyCapsForViewEvents(JObject arg0) const
	{
		return callObjectMethod(
			"setKeyedFrequencyCapsForViewEvents",
			"(Ljava/util/List;)Landroid/adservices/common/FrequencyCapFilters$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::common::FrequencyCapFilters_Builder FrequencyCapFilters_Builder::setKeyedFrequencyCapsForWinEvents(JObject arg0) const
	{
		return callObjectMethod(
			"setKeyedFrequencyCapsForWinEvents",
			"(Ljava/util/List;)Landroid/adservices/common/FrequencyCapFilters$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::common

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::common;
#endif
