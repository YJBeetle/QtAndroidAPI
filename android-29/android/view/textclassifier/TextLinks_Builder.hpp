#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class TextLinks;
}
class JString;

namespace android::view::textclassifier
{
	class TextLinks_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextLinks_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Builder(QJniObject obj);
		
		// Constructors
		TextLinks_Builder(JString arg0);
		
		// Methods
		android::view::textclassifier::TextLinks_Builder addLink(jint arg0, jint arg1, JObject arg2) const;
		android::view::textclassifier::TextLinks_Builder addLink(jint arg0, jint arg1, JObject arg2, android::os::Bundle arg3) const;
		android::view::textclassifier::TextLinks build() const;
		android::view::textclassifier::TextLinks_Builder clearTextLinks() const;
		android::view::textclassifier::TextLinks_Builder setExtras(android::os::Bundle arg0) const;
	};
} // namespace android::view::textclassifier

