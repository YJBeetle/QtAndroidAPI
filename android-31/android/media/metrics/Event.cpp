#include "../../os/Bundle.hpp"
#include "./Event.hpp"

namespace android::media::metrics
{
	// Fields
	
	// QJniObject forward
	Event::Event(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::Bundle Event::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jlong Event::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
} // namespace android::media::metrics

