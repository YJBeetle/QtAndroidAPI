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
		
		// QJniObject forward
		template<typename ...Ts> explicit ConversationAction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationAction(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::app::RemoteAction getAction();
		jfloat getConfidenceScore();
		android::os::Bundle getExtras();
		JString getTextReply();
		JString getType();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

