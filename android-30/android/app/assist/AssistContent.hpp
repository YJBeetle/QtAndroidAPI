#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
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

namespace android::app::assist
{
	class AssistContent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssistContent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssistContent(QAndroidJniObject obj);
		
		// Constructors
		AssistContent();
		
		// Methods
		jint describeContents() const;
		android::content::ClipData getClipData() const;
		android::os::Bundle getExtras() const;
		android::content::Intent getIntent() const;
		JString getStructuredData() const;
		android::net::Uri getWebUri() const;
		jboolean isAppProvidedIntent() const;
		jboolean isAppProvidedWebUri() const;
		void setClipData(android::content::ClipData arg0) const;
		void setIntent(android::content::Intent arg0) const;
		void setStructuredData(JString arg0) const;
		void setWebUri(android::net::Uri arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::assist

