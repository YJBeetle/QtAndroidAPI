#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
namespace android::adservices::ondevicepersonalization
{
	class InferenceInput_Params;
}
namespace android::adservices::ondevicepersonalization
{
	class InferenceOutput;
}
class JObject;

namespace android::adservices::ondevicepersonalization
{
	class InferenceInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InferenceInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InferenceInput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getBatchSize() const;
		android::adservices::ondevicepersonalization::InferenceOutput getExpectedOutputStructure() const;
		JObjectArray getInputData() const;
		android::adservices::ondevicepersonalization::InferenceInput_Params getParams() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

