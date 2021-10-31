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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLinks_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextLinks_Builder(jstring arg0);
		
		// Methods
		QAndroidJniObject addLink(jint arg0, jint arg1, __JniBaseClass arg2);
		QAndroidJniObject addLink(jint arg0, jint arg1, __JniBaseClass arg2, android::os::Bundle arg3);
		QAndroidJniObject build();
		QAndroidJniObject clearTextLinks();
		QAndroidJniObject setExtras(android::os::Bundle arg0);
	};
} // namespace android::view::textclassifier

