#pragma once

#include "../../../../JObject.hpp"

class JByteArray;

namespace android::net::wifi::aware
{
	class IdentityChangedListener : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IdentityChangedListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IdentityChangedListener(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		IdentityChangedListener();
		
		// Methods
		void onIdentityChanged(JByteArray arg0) const;
	};
} // namespace android::net::wifi::aware

