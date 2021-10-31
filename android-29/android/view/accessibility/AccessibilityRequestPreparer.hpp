#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Message;
}
namespace android::view
{
	class View;
}

namespace android::view::accessibility
{
	class AccessibilityRequestPreparer : public __JniBaseClass
	{
	public:
		// Fields
		static jint REQUEST_TYPE_EXTRA_DATA();
		
		AccessibilityRequestPreparer(QAndroidJniObject obj);
		// Constructors
		AccessibilityRequestPreparer(android::view::View arg0, jint arg1);
		AccessibilityRequestPreparer() = default;
		
		// Methods
		QAndroidJniObject getView();
		void onPrepareExtraData(jint arg0, jstring arg1, android::os::Bundle arg2, android::os::Message arg3);
	};
} // namespace android::view::accessibility

