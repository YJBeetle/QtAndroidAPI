#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class TextLinks;
}

namespace android::view::textclassifier
{
	class TextLinks_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextLinks_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Builder(QJniObject obj);
		
		// Constructors
		TextLinks_Builder(jstring arg0);
		
		// Methods
		android::view::textclassifier::TextLinks_Builder addLink(jint arg0, jint arg1, __JniBaseClass arg2);
		android::view::textclassifier::TextLinks_Builder addLink(jint arg0, jint arg1, __JniBaseClass arg2, android::os::Bundle arg3);
		android::view::textclassifier::TextLinks build();
		android::view::textclassifier::TextLinks_Builder clearTextLinks();
		android::view::textclassifier::TextLinks_Builder setExtras(android::os::Bundle arg0);
	};
} // namespace android::view::textclassifier

