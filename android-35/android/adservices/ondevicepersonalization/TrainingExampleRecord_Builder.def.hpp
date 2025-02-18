#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::adservices::ondevicepersonalization
{
	class TrainingExampleRecord;
}

namespace android::adservices::ondevicepersonalization
{
	class TrainingExampleRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrainingExampleRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrainingExampleRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TrainingExampleRecord_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::TrainingExampleRecord build() const;
		android::adservices::ondevicepersonalization::TrainingExampleRecord_Builder setResumptionToken(JByteArray arg0) const;
		android::adservices::ondevicepersonalization::TrainingExampleRecord_Builder setTrainingExample(JByteArray arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

