#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class VibrationAttributes;
}

namespace android::os
{
	class VibrationAttributes_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VibrationAttributes_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VibrationAttributes_Builder(QJniObject obj);
		
		// Constructors
		VibrationAttributes_Builder();
		VibrationAttributes_Builder(android::os::VibrationAttributes arg0);
		
		// Methods
		android::os::VibrationAttributes build();
		android::os::VibrationAttributes_Builder setFlags(jint arg0, jint arg1);
		android::os::VibrationAttributes_Builder setUsage(jint arg0);
	};
} // namespace android::os

