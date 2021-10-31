#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::hardware
{
	class ConsumerIrManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConsumerIrManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConsumerIrManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getCarrierFrequencies();
		jboolean hasIrEmitter();
		void transmit(jint arg0, jintArray arg1);
	};
} // namespace android::hardware

