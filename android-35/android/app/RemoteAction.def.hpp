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
		RemoteAction(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoteAction(android::graphics::drawable::Icon arg0, JString arg1, JString arg2, android::app::PendingIntent arg3);
		
		// Methods
		android::app::RemoteAction clone() const;
		jint describeContents() const;
		void dump(JString arg0, java::io::PrintWriter arg1) const;
		jboolean equals(JObject arg0) const;
		android::app::PendingIntent getActionIntent() const;
		JString getContentDescription() const;
		android::graphics::drawable::Icon getIcon() const;
		JString getTitle() const;
		jint hashCode() const;
		jboolean isEnabled() const;
		void setEnabled(jboolean arg0) const;
		void setShouldShowIcon(jboolean arg0) const;
		jboolean shouldShowIcon() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

