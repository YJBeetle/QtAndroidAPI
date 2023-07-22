#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;

namespace android::hardware
{
	class ConsumerIrManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConsumerIrManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConsumerIrManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JArray getCarrierFrequencies() const;
		jboolean hasIrEmitter() const;
		void transmit(jint arg0, JIntArray arg1) const;
	};
} // namespace android::hardware

