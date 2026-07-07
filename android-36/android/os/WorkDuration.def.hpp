#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::os
{
	class WorkDuration : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WorkDuration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WorkDuration(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WorkDuration();
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getActualCpuDurationNanos() const;
		jlong getActualGpuDurationNanos() const;
		jlong getActualTotalDurationNanos() const;
		jlong getWorkPeriodStartTimestampNanos() const;
		jint hashCode() const;
		void setActualCpuDurationNanos(jlong arg0) const;
		void setActualGpuDurationNanos(jlong arg0) const;
		void setActualTotalDurationNanos(jlong arg0) const;
		void setWorkPeriodStartTimestampNanos(jlong arg0) const;
	};
} // namespace android::os

