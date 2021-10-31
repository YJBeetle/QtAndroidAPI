#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Rect;
}
namespace android::net
{
	class Uri;
}
namespace android::view
{
	class View;
}

namespace android::provider
{
	class ContactsContract_QuickContact : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_QUICK_CONTACT();
		static jstring EXTRA_EXCLUDE_MIMES();
		static jstring EXTRA_MODE();
		static jstring EXTRA_PRIORITIZED_MIMETYPE();
		static jint MODE_LARGE();
		static jint MODE_MEDIUM();
		static jint MODE_SMALL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_QuickContact(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_QuickContact(QAndroidJniObject obj);
		
		// Constructors
		ContactsContract_QuickContact();
		
		// Methods
		static void showQuickContact(android::content::Context arg0, android::graphics::Rect arg1, android::net::Uri arg2, jarray arg3, jstring arg4);
		static void showQuickContact(android::content::Context arg0, android::graphics::Rect arg1, android::net::Uri arg2, jint arg3, jarray arg4);
		static void showQuickContact(android::content::Context arg0, android::view::View arg1, android::net::Uri arg2, jarray arg3, jstring arg4);
		static void showQuickContact(android::content::Context arg0, android::view::View arg1, android::net::Uri arg2, jint arg3, jarray arg4);
	};
} // namespace android::provider

