#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class ImsStateCallback : public JObject
	{
	public:
		// Fields
		static jint REASON_IMS_SERVICE_DISCONNECTED();
		static jint REASON_IMS_SERVICE_NOT_READY();
		static jint REASON_NO_IMS_SERVICE_CONFIGURED();
		static jint REASON_SUBSCRIPTION_INACTIVE();
		static jint REASON_UNKNOWN_PERMANENT_ERROR();
		static jint REASON_UNKNOWN_TEMPORARY_ERROR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImsStateCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsStateCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ImsStateCallback();
		
		// Methods
		void onAvailable() const;
		void onError() const;
		void onUnavailable(jint arg0) const;
	};
} // namespace android::telephony::ims

