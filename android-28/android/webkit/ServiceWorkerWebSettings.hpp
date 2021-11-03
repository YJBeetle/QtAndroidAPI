#pragma once

#include "../../JObject.hpp"


namespace android::webkit
{
	class ServiceWorkerWebSettings : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceWorkerWebSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceWorkerWebSettings(QJniObject obj);
		
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

