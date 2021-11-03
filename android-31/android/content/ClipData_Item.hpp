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
namespace android::view::textclassifier
{
	class TextLinks;
}
class JString;
class JString;

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
		ClipData_Item(JString arg0);
		ClipData_Item(JString arg0, JString arg1);
		ClipData_Item(JString arg0, android::content::Intent arg1, android::net::Uri arg2);
		ClipData_Item(JString arg0, JString arg1, android::content::Intent arg2, android::net::Uri arg3);
		
		// Methods
		JString coerceToHtmlText(android::content::Context arg0) const;
		JString coerceToStyledText(android::content::Context arg0) const;
		JString coerceToText(android::content::Context arg0) const;
		JString getHtmlText() const;
		android::content::Intent getIntent() const;
		JString getText() const;
		android::view::textclassifier::TextLinks getTextLinks() const;
		android::net::Uri getUri() const;
		JString toString() const;
	};
} // namespace android::content

