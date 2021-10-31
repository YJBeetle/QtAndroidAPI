#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class ConsumerIrManager;
}

namespace android::hardware
{
	class ConsumerIrManager_CarrierFrequencyRange : public __JniBaseClass
	{
	public:
		// Fields
		
		ConsumerIrManager_CarrierFrequencyRange(QAndroidJniObject obj);
		// Constructors
		ConsumerIrManager_CarrierFrequencyRange(android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2);
		ConsumerIrManager_CarrierFrequencyRange() = default;
		
		// Methods
		jint getMaxFrequency();
		jint getMinFrequency();
	};
} // namespace android::hardware

