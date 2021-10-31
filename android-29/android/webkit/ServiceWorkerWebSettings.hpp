#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class ServiceWorkerWebSettings : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceWorkerWebSettings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ServiceWorkerWebSettings(QAndroidJniObject obj);
		
		// Constructors
		ServiceWorkerWebSettings();
		
		// Methods
		jboolean getAllowContentAccess();
		jboolean getAllowFileAccess();
		jboolean getBlockNetworkLoads();
		jint getCacheMode();
		void setAllowContentAccess(jboolean arg0);
		void setAllowFileAccess(jboolean arg0);
		void setBlockNetworkLoads(jboolean arg0);
		void setCacheMode(jint arg0);
	};
} // namespace android::webkit

