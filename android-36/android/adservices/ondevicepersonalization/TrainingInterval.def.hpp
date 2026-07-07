#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::time
{
	class Duration;
}

namespace android::adservices::ondevicepersonalization
{
	class TrainingInterval : public JObject
	{
	public:
		// Fields
		static jint SCHEDULING_MODE_ONE_TIME();
		static jint SCHEDULING_MODE_RECURRENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit TrainingInterval(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrainingInterval(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Duration getMinimumInterval() const;
		jint getSchedulingMode() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

