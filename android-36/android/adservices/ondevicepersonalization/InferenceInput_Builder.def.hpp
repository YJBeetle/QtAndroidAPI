#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
namespace android::adservices::ondevicepersonalization
{
	class InferenceInput;
}
namespace android::adservices::ondevicepersonalization
{
	class InferenceInput_Params;
}
namespace android::adservices::ondevicepersonalization
{
	class InferenceOutput;
}

namespace android::adservices::ondevicepersonalization
{
	class InferenceInput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InferenceInput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InferenceInput_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InferenceInput_Builder(android::adservices::ondevicepersonalization::InferenceInput_Params arg0, JObjectArray arg1, android::adservices::ondevicepersonalization::InferenceOutput arg2);
		
		// Methods
		android::adservices::ondevicepersonalization::InferenceInput build() const;
		android::adservices::ondevicepersonalization::InferenceInput_Builder setBatchSize(jint arg0) const;
		android::adservices::ondevicepersonalization::InferenceInput_Builder setExpectedOutputStructure(android::adservices::ondevicepersonalization::InferenceOutput arg0) const;
		android::adservices::ondevicepersonalization::InferenceInput_Builder setInputData(JObjectArray arg0) const;
		android::adservices::ondevicepersonalization::InferenceInput_Builder setParams(android::adservices::ondevicepersonalization::InferenceInput_Params arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

