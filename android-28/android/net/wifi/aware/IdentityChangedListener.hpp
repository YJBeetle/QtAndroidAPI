#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::net::wifi::aware
{
	class IdentityChangedListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityChangedListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IdentityChangedListener(QJniObject obj);
		
		// Constructors
		IdentityChangedListener();
		
		// Methods
		void onIdentityChanged(jbyteArray arg0);
	};
} // namespace android::net::wifi::aware

