#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::telephony::mbms
{
	class MbmsDownloadSessionCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsDownloadSessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsDownloadSessionCallback(QAndroidJniObject obj);
		
		// Constructors
		MbmsDownloadSessionCallback();
		
		// Methods
		void onError(jint arg0, JString arg1) const;
		void onFileServicesUpdated(JObject arg0) const;
		void onMiddlewareReady() const;
	};
} // namespace android::telephony::mbms

