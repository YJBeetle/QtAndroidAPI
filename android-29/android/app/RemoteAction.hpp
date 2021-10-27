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
	class Parcel;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::app
{
	class RemoteAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		RemoteAction(QAndroidJniObject obj);
		// Constructors
		RemoteAction(android::graphics::drawable::Icon &arg0, jstring &arg1, jstring &arg2, android::app::PendingIntent &arg3);
		RemoteAction(android::graphics::drawable::Icon &arg0, const QString &arg1, const QString &arg2, android::app::PendingIntent &arg3);
		RemoteAction() = default;
		
		// Methods
		QAndroidJniObject clone();
		jint describeContents();
		void dump(jstring arg0, java::io::PrintWriter arg1);
		void dump(const QString &arg0, java::io::PrintWriter arg1);
		QAndroidJniObject getActionIntent();
		jstring getContentDescription();
		QAndroidJniObject getIcon();
		jstring getTitle();
		jboolean isEnabled();
		void setEnabled(jboolean arg0);
		void setShouldShowIcon(jboolean arg0);
		jboolean shouldShowIcon();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

