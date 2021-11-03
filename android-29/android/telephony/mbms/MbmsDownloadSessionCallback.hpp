#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::telephony::mbms
{
	class MbmsDownloadSessionCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsDownloadSessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsDownloadSessionCallback(QJniObject obj);
		
		// Constructors
		MbmsDownloadSessionCallback();
		
		// Methods
		void onError(jint arg0, JString arg1);
		void onFileServicesUpdated(JObject arg0);
		void onMiddlewareReady();
	};
} // namespace android::telephony::mbms

