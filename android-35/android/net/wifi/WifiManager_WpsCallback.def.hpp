#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::net::wifi
{
	class WifiManager_WpsCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiManager_WpsCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_WpsCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiManager_WpsCallback();
		
		// Methods
		void onFailed(jint arg0) const;
		void onStarted(JString arg0) const;
		void onSucceeded() const;
	};
} // namespace android::net::wifi

