#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class TrainingInterval;
}
namespace java::time
{
	class Duration;
}

namespace android::adservices::ondevicepersonalization
{
	class TrainingInterval_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrainingInterval_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrainingInterval_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TrainingInterval_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::TrainingInterval build() const;
		android::adservices::ondevicepersonalization::TrainingInterval_Builder setMinimumInterval(java::time::Duration arg0) const;
		android::adservices::ondevicepersonalization::TrainingInterval_Builder setSchedulingMode(jint arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

