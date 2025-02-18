#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ClipData_Item;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentSender;
}
namespace android::net
{
	class Uri;
}
class JString;
class JString;

namespace android::content
{
	class ClipData_Item_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClipData_Item_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClipData_Item_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ClipData_Item_Builder();
		
		// Methods
		android::content::ClipData_Item build() const;
		android::content::ClipData_Item_Builder setHtmlText(JString arg0) const;
		android::content::ClipData_Item_Builder setIntent(android::content::Intent arg0) const;
		android::content::ClipData_Item_Builder setIntentSender(android::content::IntentSender arg0) const;
		android::content::ClipData_Item_Builder setText(JString arg0) const;
		android::content::ClipData_Item_Builder setUri(android::net::Uri arg0) const;
	};
} // namespace android::content

