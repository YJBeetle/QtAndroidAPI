#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class InferenceOutput;
}
class JObject;

namespace android::adservices::ondevicepersonalization
{
	class InferenceOutput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InferenceOutput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InferenceOutput_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InferenceOutput_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::InferenceOutput_Builder addDataOutput(jint arg0, JObject arg1) const;
		android::adservices::ondevicepersonalization::InferenceOutput build() const;
		android::adservices::ondevicepersonalization::InferenceOutput_Builder setDataOutputs(JObject arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

