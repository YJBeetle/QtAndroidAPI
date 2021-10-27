#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class SafeBrowsingResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		SafeBrowsingResponse(QAndroidJniObject obj);
		// Constructors
		SafeBrowsingResponse();
		
		// Methods
		void backToSafety(jboolean arg0);
		void proceed(jboolean arg0);
		void showInterstitial(jboolean arg0);
	};
} // namespace android::webkit

