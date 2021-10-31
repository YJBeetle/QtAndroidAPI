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
	class Contacts_Organizations : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_Organizations(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Organizations(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDisplayLabel(android::content::Context arg0, jint arg1, jstring arg2);
	};
} // namespace android::provider

