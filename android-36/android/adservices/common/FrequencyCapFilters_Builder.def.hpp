#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class FrequencyCapFilters;
}

namespace android::adservices::common
{
	class FrequencyCapFilters_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FrequencyCapFilters_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FrequencyCapFilters_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FrequencyCapFilters_Builder();
		
		// Methods
		android::adservices::common::FrequencyCapFilters build() const;
		android::adservices::common::FrequencyCapFilters_Builder setKeyedFrequencyCapsForClickEvents(JObject arg0) const;
		android::adservices::common::FrequencyCapFilters_Builder setKeyedFrequencyCapsForImpressionEvents(JObject arg0) const;
		android::adservices::common::FrequencyCapFilters_Builder setKeyedFrequencyCapsForViewEvents(JObject arg0) const;
		android::adservices::common::FrequencyCapFilters_Builder setKeyedFrequencyCapsForWinEvents(JObject arg0) const;
	};
} // namespace android::adservices::common

