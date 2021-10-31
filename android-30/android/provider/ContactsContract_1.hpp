#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_1 : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_1(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_1(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

