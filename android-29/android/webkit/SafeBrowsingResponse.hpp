#pragma once

#include "../../JObject.hpp"


namespace android::webkit
{
	class SafeBrowsingResponse : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SafeBrowsingResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SafeBrowsingResponse(QAndroidJniObject obj);
		
		// Constructors
		SafeBrowsingResponse();
		
		// Methods
		void backToSafety(jboolean arg0);
		void proceed(jboolean arg0);
		void showInterstitial(jboolean arg0);
	};
} // namespace android::webkit

