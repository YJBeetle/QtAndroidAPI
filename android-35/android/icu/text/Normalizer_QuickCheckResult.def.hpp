#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class Normalizer_QuickCheckResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Normalizer_QuickCheckResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer_QuickCheckResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::text

