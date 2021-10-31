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
		
		// QJniObject forward
		template<typename ...Ts> explicit ConsumerIrManager_CarrierFrequencyRange(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConsumerIrManager_CarrierFrequencyRange(QJniObject obj);
		
		// Constructors
		ConsumerIrManager_CarrierFrequencyRange(android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2);
		
		// Methods
		jint getMaxFrequency();
		jint getMinFrequency();
	};
} // namespace android::hardware

