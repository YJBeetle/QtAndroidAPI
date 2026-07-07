#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class CpuHeadroomParams_Builder;
}
class JObject;
class JString;

namespace android::os
{
	class CpuHeadroomParams : public JObject
	{
	public:
		// Fields
		static jint CPU_HEADROOM_CALCULATION_TYPE_AVERAGE();
		static jint CPU_HEADROOM_CALCULATION_TYPE_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit CpuHeadroomParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CpuHeadroomParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getCalculationType() const;
		jlong getCalculationWindowMillis() const;
		JIntArray getTids() const;
		jint hashCode() const;
		android::os::CpuHeadroomParams_Builder toBuilder() const;
		JString toString() const;
	};
} // namespace android::os

