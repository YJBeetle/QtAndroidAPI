#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::provider
{
	class Browser : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_APPLICATION_ID();
		static jstring EXTRA_CREATE_NEW_TAB();
		static jstring EXTRA_HEADERS();
		static jstring INITIAL_ZOOM_LEVEL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Browser(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Browser(QAndroidJniObject obj);
		
		// Constructors
		Browser();
		
		// Methods
		static void sendString(android::content::Context arg0, jstring arg1);
	};
} // namespace android::provider

