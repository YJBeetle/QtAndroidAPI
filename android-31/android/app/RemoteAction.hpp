#pragma once

#include "../../JObject.hpp"

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
	class RemoteAction : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteAction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteAction(QJniObject obj);
		
		// Constructors
		RemoteAction(android::graphics::drawable::Icon arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3);
		
		// Methods
		android::app::RemoteAction clone();
		jint describeContents();
		void dump(jstring arg0, java::io::PrintWriter arg1);
		jboolean equals(jobject arg0);
		android::app::PendingIntent getActionIntent();
		jstring getContentDescription();
		android::graphics::drawable::Icon getIcon();
		jstring getTitle();
		jint hashCode();
		jboolean isEnabled();
		void setEnabled(jboolean arg0);
		void setShouldShowIcon(jboolean arg0);
		jboolean shouldShowIcon();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

