#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::view::accessibility
{
	class AccessibilityRequestPreparer : public JObject
	{
	public:
		// Fields
		static jint REQUEST_TYPE_EXTRA_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityRequestPreparer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityRequestPreparer(QAndroidJniObject obj);
		
		// Constructors
		AccessibilityRequestPreparer(android::view::View arg0, jint arg1);
		
		// Methods
		android::view::View getView();
		void onPrepareExtraData(jint arg0, JString arg1, android::os::Bundle arg2, android::os::Message arg3);
	};
} // namespace android::view::accessibility

