#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}

namespace android::content
{
	class ClipData_Item : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipData_Item(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClipData_Item(QAndroidJniObject obj);
		
		// Constructors
		ClipData_Item(android::content::Intent arg0);
		ClipData_Item(android::net::Uri arg0);
		ClipData_Item(jstring arg0);
		ClipData_Item(jstring arg0, jstring arg1);
		ClipData_Item(jstring arg0, android::content::Intent arg1, android::net::Uri arg2);
		ClipData_Item(jstring arg0, jstring arg1, android::content::Intent arg2, android::net::Uri arg3);
		
		// Methods
		jstring coerceToHtmlText(android::content::Context arg0);
		jstring coerceToStyledText(android::content::Context arg0);
		jstring coerceToText(android::content::Context arg0);
		jstring getHtmlText();
		android::content::Intent getIntent();
		jstring getText();
		android::net::Uri getUri();
		jstring toString();
	};
} // namespace android::content

