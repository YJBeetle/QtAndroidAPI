#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
class JObject;

namespace android::webkit
{
	class CookieSyncManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CookieSyncManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CookieSyncManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::webkit::CookieSyncManager createInstance(android::content::Context arg0);
		static android::webkit::CookieSyncManager getInstance();
		void resetSync() const;
		void run() const;
		void startSync() const;
		void stopSync() const;
		void sync() const;
	};
} // namespace android::webkit

