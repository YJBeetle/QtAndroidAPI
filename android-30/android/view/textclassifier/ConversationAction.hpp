#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class RemoteAction;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class ConversationAction : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jstring TYPE_CALL_PHONE();
		static jstring TYPE_CREATE_REMINDER();
		static jstring TYPE_OPEN_URL();
		static jstring TYPE_SEND_EMAIL();
		static jstring TYPE_SEND_SMS();
		static jstring TYPE_SHARE_LOCATION();
		static jstring TYPE_TEXT_REPLY();
		static jstring TYPE_TRACK_FLIGHT();
		static jstring TYPE_VIEW_CALENDAR();
		static jstring TYPE_VIEW_MAP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationAction(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConversationAction(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::app::RemoteAction getAction();
		jfloat getConfidenceScore();
		android::os::Bundle getExtras();
		jstring getTextReply();
		jstring getType();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

