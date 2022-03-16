#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class KeyguardManager_KeyguardDismissCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyguardManager_KeyguardDismissCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyguardManager_KeyguardDismissCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyguardManager_KeyguardDismissCallback();
		
		// Methods
		void onDismissCancelled() const;
		void onDismissError() const;
		void onDismissSucceeded() const;
	};
} // namespace android::app

