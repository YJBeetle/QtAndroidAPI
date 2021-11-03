#pragma once

#include "../../JObject.hpp"


namespace android::hardware
{
	class ConsumerIrManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConsumerIrManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConsumerIrManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getCarrierFrequencies();
		jboolean hasIrEmitter();
		void transmit(jint arg0, jintArray arg1);
	};
} // namespace android::hardware

