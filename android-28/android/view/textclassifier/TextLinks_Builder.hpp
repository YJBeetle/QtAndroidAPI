#pragma once

#include "../../../__JniBaseClass.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLinks_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextLinks_Builder(jstring arg0);
		
		// Methods
		android::view::textclassifier::TextLinks_Builder addLink(jint arg0, jint arg1, __JniBaseClass arg2);
		android::view::textclassifier::TextLinks build();
		android::view::textclassifier::TextLinks_Builder clearTextLinks();
	};
} // namespace android::view::textclassifier
