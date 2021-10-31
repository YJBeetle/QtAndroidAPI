#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class SafeBrowsingResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SafeBrowsingResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SafeBrowsingResponse(QJniObject obj);
		
		// Constructors
		SafeBrowsingResponse();
		
		// Methods
		void backToSafety(jboolean arg0);
		void proceed(jboolean arg0);
		void showInterstitial(jboolean arg0);
	};
} // namespace android::webkit

