#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::adservices::ondevicepersonalization
{
	class InferenceOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InferenceOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InferenceOutput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getDataOutputs() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

