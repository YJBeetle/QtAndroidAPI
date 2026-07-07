#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class GpuHeadroomParams;
}

namespace android::os
{
	class GpuHeadroomParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GpuHeadroomParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GpuHeadroomParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GpuHeadroomParams_Builder();
		GpuHeadroomParams_Builder(android::os::GpuHeadroomParams arg0);
		
		// Methods
		android::os::GpuHeadroomParams build() const;
		android::os::GpuHeadroomParams_Builder setCalculationType(jint arg0) const;
		android::os::GpuHeadroomParams_Builder setCalculationWindowMillis(jint arg0) const;
	};
} // namespace android::os

