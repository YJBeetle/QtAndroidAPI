#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Contacts_People_Phones : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_People_Phones(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_People_Phones(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

