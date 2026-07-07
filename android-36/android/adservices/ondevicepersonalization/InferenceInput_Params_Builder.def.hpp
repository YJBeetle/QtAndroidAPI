#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class InferenceInput_Params;
}
class JString;

namespace android::adservices::ondevicepersonalization
{
	class InferenceInput_Params_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InferenceInput_Params_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InferenceInput_Params_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InferenceInput_Params_Builder(JObject arg0, JString arg1);
		
		// Methods
		android::adservices::ondevicepersonalization::InferenceInput_Params build() const;
		android::adservices::ondevicepersonalization::InferenceInput_Params_Builder setDelegateType(jint arg0) const;
		android::adservices::ondevicepersonalization::InferenceInput_Params_Builder setKeyValueStore(JObject arg0) const;
		android::adservices::ondevicepersonalization::InferenceInput_Params_Builder setModelKey(JString arg0) const;
		android::adservices::ondevicepersonalization::InferenceInput_Params_Builder setModelType(jint arg0) const;
		android::adservices::ondevicepersonalization::InferenceInput_Params_Builder setRecommendedNumThreads(jint arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

