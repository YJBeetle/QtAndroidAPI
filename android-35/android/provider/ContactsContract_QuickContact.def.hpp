#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;

namespace android::provider
{
	class ContactsContract_QuickContact : public JObject
	{
	public:
		// Fields
		static JString ACTION_QUICK_CONTACT();
		static JString EXTRA_EXCLUDE_MIMES();
		static JString EXTRA_MODE();
		static JString EXTRA_PRIORITIZED_MIMETYPE();
		static jint MODE_LARGE();
		static jint MODE_MEDIUM();
		static jint MODE_SMALL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_QuickContact(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_QuickContact(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContactsContract_QuickContact();
		
		// Methods
		static void showQuickContact(android::content::Context arg0, android::graphics::Rect arg1, android::net::Uri arg2, JArray arg3, JString arg4);
		static void showQuickContact(android::content::Context arg0, android::graphics::Rect arg1, android::net::Uri arg2, jint arg3, JArray arg4);
		static void showQuickContact(android::content::Context arg0, android::view::View arg1, android::net::Uri arg2, JArray arg3, JString arg4);
		static void showQuickContact(android::content::Context arg0, android::view::View arg1, android::net::Uri arg2, jint arg3, JArray arg4);
	};
} // namespace android::provider

