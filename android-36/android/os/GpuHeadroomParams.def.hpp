#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::os
{
	class GpuHeadroomParams : public JObject
	{
	public:
		// Fields
		static jint GPU_HEADROOM_CALCULATION_TYPE_AVERAGE();
		static jint GPU_HEADROOM_CALCULATION_TYPE_MIN();
		static jint GPU_HEADROOM_CALCULATION_WINDOW_MILLIS_MAX();
		static jint GPU_HEADROOM_CALCULATION_WINDOW_MILLIS_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit GpuHeadroomParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GpuHeadroomParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getCalculationType() const;
		jint getCalculationWindowMillis() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::os

