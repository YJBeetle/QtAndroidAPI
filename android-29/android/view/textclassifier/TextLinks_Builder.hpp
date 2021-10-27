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
		
		TextLinks_Builder(QAndroidJniObject obj);
		// Constructors
		TextLinks_Builder(jstring &arg0);
		TextLinks_Builder(const QString &arg0);
		TextLinks_Builder() = default;
		
		// Methods
		QAndroidJniObject addLink(jint arg0, jint arg1, __JniBaseClass arg2);
		QAndroidJniObject addLink(jint arg0, jint arg1, __JniBaseClass arg2, android::os::Bundle arg3);
		QAndroidJniObject build();
		QAndroidJniObject clearTextLinks();
		QAndroidJniObject setExtras(android::os::Bundle arg0);
	};
} // namespace android::view::textclassifier

