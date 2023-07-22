#pragma once

#include "../../../JObject.hpp"

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
class JString;
class JString;

namespace android::view::textclassifier
{
	class ConversationAction : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString TYPE_CALL_PHONE();
		static JString TYPE_CREATE_REMINDER();
		static JString TYPE_OPEN_URL();
		static JString TYPE_SEND_EMAIL();
		static JString TYPE_SEND_SMS();
		static JString TYPE_SHARE_LOCATION();
		static JString TYPE_TEXT_REPLY();
		static JString TYPE_TRACK_FLIGHT();
		static JString TYPE_VIEW_CALENDAR();
		static JString TYPE_VIEW_MAP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationAction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationAction(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::app::RemoteAction getAction() const;
		jfloat getConfidenceScore() const;
		android::os::Bundle getExtras() const;
		JString getTextReply() const;
		JString getType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textclassifier

