#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class Normalizer_QuickCheckResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Normalizer_QuickCheckResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer_QuickCheckResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::text

