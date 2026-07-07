#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class ExecuteInIsolatedServiceRequest_OutputSpec : public JObject
	{
	public:
		// Fields
		static android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_OutputSpec DEFAULT();
		static jint OUTPUT_TYPE_BEST_VALUE();
		static jint OUTPUT_TYPE_NULL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteInIsolatedServiceRequest_OutputSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteInIsolatedServiceRequest_OutputSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_OutputSpec buildBestValueSpec(jint arg0);
		jint getMaxIntValue() const;
		jint getOutputType() const;
	};
} // namespace android::adservices::ondevicepersonalization

