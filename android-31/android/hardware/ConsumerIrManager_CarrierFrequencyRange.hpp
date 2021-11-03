#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class ConsumerIrManager;
}

namespace android::hardware
{
	class ConsumerIrManager_CarrierFrequencyRange : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConsumerIrManager_CarrierFrequencyRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConsumerIrManager_CarrierFrequencyRange(QAndroidJniObject obj);
		
		// Constructors
		ConsumerIrManager_CarrierFrequencyRange(android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2);
		
		// Methods
		jint getMaxFrequency() const;
		jint getMinFrequency() const;
	};
} // namespace android::hardware

