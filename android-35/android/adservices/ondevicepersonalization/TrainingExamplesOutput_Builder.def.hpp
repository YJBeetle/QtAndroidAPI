#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class TrainingExampleRecord;
}
namespace android::adservices::ondevicepersonalization
{
	class TrainingExamplesOutput;
}

namespace android::adservices::ondevicepersonalization
{
	class TrainingExamplesOutput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrainingExamplesOutput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrainingExamplesOutput_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TrainingExamplesOutput_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::TrainingExamplesOutput_Builder addTrainingExampleRecord(android::adservices::ondevicepersonalization::TrainingExampleRecord arg0) const;
		android::adservices::ondevicepersonalization::TrainingExamplesOutput build() const;
		android::adservices::ondevicepersonalization::TrainingExamplesOutput_Builder setTrainingExampleRecords(JObject arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

