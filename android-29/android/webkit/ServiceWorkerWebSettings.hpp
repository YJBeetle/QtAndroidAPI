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
		jboolean getAllowContentAccess() const;
		jboolean getAllowFileAccess() const;
		jboolean getBlockNetworkLoads() const;
		jint getCacheMode() const;
		void setAllowContentAccess(jboolean arg0) const;
		void setAllowFileAccess(jboolean arg0) const;
		void setBlockNetworkLoads(jboolean arg0) const;
		void setCacheMode(jint arg0) const;
	};
} // namespace android::webkit

