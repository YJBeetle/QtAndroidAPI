#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class AccessNetworkConstants_AccessNetworkType : public JObject
	{
	public:
		// Fields
		static jint CDMA2000();
		static jint EUTRAN();
		static jint GERAN();
		static jint IWLAN();
		static jint UNKNOWN();
		static jint UTRAN();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants_AccessNetworkType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants_AccessNetworkType(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

