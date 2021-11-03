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
class JString;
class JObject;
class JString;

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
		RemoteAction(android::graphics::drawable::Icon arg0, JString arg1, JString arg2, android::app::PendingIntent arg3);
		
		// Methods
		android::app::RemoteAction clone();
		jint describeContents();
		void dump(JString arg0, java::io::PrintWriter arg1);
		android::app::PendingIntent getActionIntent();
		JString getContentDescription();
		android::graphics::drawable::Icon getIcon();
		JString getTitle();
		jboolean isEnabled();
		void setEnabled(jboolean arg0);
		void setShouldShowIcon(jboolean arg0);
		jboolean shouldShowIcon();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

