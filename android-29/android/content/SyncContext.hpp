#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class SyncResult;
}

namespace android::content
{
	class SyncContext : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getSyncContextBinder();
		void onFinished(android::content::SyncResult arg0);
	};
} // namespace android::content

