#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::hardware
{
	class ConsumerIrManager : public __JniBaseClass
	{
	public:
		// Fields
		
		ConsumerIrManager(QAndroidJniObject obj);
		// Constructors
		ConsumerIrManager() = default;
		
		// Methods
		jarray getCarrierFrequencies();
		jboolean hasIrEmitter();
		void transmit(jint arg0, jintArray arg1);
	};
} // namespace android::hardware

