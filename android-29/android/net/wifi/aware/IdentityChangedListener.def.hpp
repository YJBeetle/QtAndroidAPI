#pragma once

#include "../../../../JObject.hpp"

class JByteArray;

namespace android::net::wifi::aware
{
	class IdentityChangedListener : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityChangedListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IdentityChangedListener(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IdentityChangedListener();
		
		// Methods
		void onIdentityChanged(JByteArray arg0) const;
	};
} // namespace android::net::wifi::aware

