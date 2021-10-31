#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Contacts_Phones : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URL();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PERSON_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Phones(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Phones(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDisplayLabel(android::content::Context arg0, jint arg1, jstring arg2);
		static jstring getDisplayLabel(android::content::Context arg0, jint arg1, jstring arg2, jarray arg3);
	};
} // namespace android::provider

