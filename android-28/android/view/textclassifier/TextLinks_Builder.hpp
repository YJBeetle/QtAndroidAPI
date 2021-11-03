#pragma once

#include "../../../JObject.hpp"

namespace android::view::textclassifier
{
	class TextLinks;
}

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
		TextLinks_Builder(jstring arg0);
		
		// Methods
		android::view::textclassifier::TextLinks_Builder addLink(jint arg0, jint arg1, JObject arg2);
		android::view::textclassifier::TextLinks build();
		android::view::textclassifier::TextLinks_Builder clearTextLinks();
	};
} // namespace android::view::textclassifier

