#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::app
{
	class Notification_Action : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
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
		QAndroidJniObject actionIntent();
		jint icon();
		jstring title();
		
		Notification_Action(QAndroidJniObject obj);
		// Constructors
		Notification_Action(jint arg0, jstring arg1, android::app::PendingIntent arg2);
		Notification_Action() = default;
		
		// Methods
		QAndroidJniObject clone();
		jint describeContents();
		jboolean getAllowGeneratedReplies();
		jarray getDataOnlyRemoteInputs();
		QAndroidJniObject getExtras();
		QAndroidJniObject getIcon();
		jarray getRemoteInputs();
		jint getSemanticAction();
		jboolean isContextual();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

