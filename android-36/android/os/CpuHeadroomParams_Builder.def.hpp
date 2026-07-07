#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class CpuHeadroomParams;
}

namespace android::os
{
	class CpuHeadroomParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CpuHeadroomParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CpuHeadroomParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CpuHeadroomParams_Builder();
		CpuHeadroomParams_Builder(android::os::CpuHeadroomParams arg0);
		
		// Methods
		android::os::CpuHeadroomParams build() const;
		android::os::CpuHeadroomParams_Builder setCalculationType(jint arg0) const;
		android::os::CpuHeadroomParams_Builder setCalculationWindowMillis(jint arg0) const;
		android::os::CpuHeadroomParams_Builder setTids(JIntArray arg0) const;
	};
} // namespace android::os

