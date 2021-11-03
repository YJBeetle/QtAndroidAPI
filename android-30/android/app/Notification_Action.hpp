#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::app
{
	class PendingIntent;
}
namespace android::graphics::drawable
{
	class Icon;
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
class JObject;

namespace android::app
{
	class Notification_Action : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SEMANTIC_ACTION_ARCHIVE();
		static jint SEMANTIC_ACTION_CALL();
		static jint SEMANTIC_ACTION_DELETE();
		static jint SEMANTIC_ACTION_MARK_AS_READ();
		static jint SEMANTIC_ACTION_MARK_AS_UNREAD();
		static jint SEMANTIC_ACTION_MUTE();
		static jint SEMANTIC_ACTION_NONE();
		static jint SEMANTIC_ACTION_REPLY();
		static jint SEMANTIC_ACTION_THUMBS_DOWN();
		static jint SEMANTIC_ACTION_THUMBS_UP();
		static jint SEMANTIC_ACTION_UNMUTE();
		android::app::PendingIntent actionIntent();
		jint icon();
		JString title();
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_Action(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_Action(QJniObject obj);
		
		// Constructors
		Notification_Action(jint arg0, JString arg1, android::app::PendingIntent arg2);
		
		// Methods
		android::app::Notification_Action clone() const;
		jint describeContents() const;
		jboolean getAllowGeneratedReplies() const;
		JArray getDataOnlyRemoteInputs() const;
		android::os::Bundle getExtras() const;
		android::graphics::drawable::Icon getIcon() const;
		JArray getRemoteInputs() const;
		jint getSemanticAction() const;
		jboolean isContextual() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

