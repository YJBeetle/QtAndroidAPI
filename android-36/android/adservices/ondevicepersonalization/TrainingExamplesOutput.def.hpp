#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::adservices::ondevicepersonalization
{
	class TrainingExamplesOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrainingExamplesOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrainingExamplesOutput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getTrainingExampleRecords() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

