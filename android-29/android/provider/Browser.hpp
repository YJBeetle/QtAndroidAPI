#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::provider
{
	class Browser : public JObject
	{
	public:
		// Fields
		static JString EXTRA_APPLICATION_ID();
		static JString EXTRA_CREATE_NEW_TAB();
		static JString EXTRA_HEADERS();
		static JString INITIAL_ZOOM_LEVEL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Browser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Browser(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Browser();
		
		// Methods
		static void sendString(android::content::Context arg0, JString arg1);
	};
} // namespace android::provider

