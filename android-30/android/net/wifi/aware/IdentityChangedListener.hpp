#pragma once

#include "../../../../JObject.hpp"


namespace android::net::wifi::aware
{
	class IdentityChangedListener : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IdentityChangedListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IdentityChangedListener(QAndroidJniObject obj);
		
		// Constructors
		IdentityChangedListener();
		
		// Methods
		void onIdentityChanged(jbyteArray arg0);
	};
} // namespace android::net::wifi::aware

