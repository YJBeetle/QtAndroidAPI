#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::app::assist
{
	class AssistContent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		AssistContent(QAndroidJniObject obj);
		// Constructors
		AssistContent();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getClipData();
		QAndroidJniObject getExtras();
		QAndroidJniObject getIntent();
		jstring getStructuredData();
		QAndroidJniObject getWebUri();
		jboolean isAppProvidedIntent();
		jboolean isAppProvidedWebUri();
		void setClipData(android::content::ClipData arg0);
		void setIntent(android::content::Intent arg0);
		void setStructuredData(jstring arg0);
		void setStructuredData(const QString &arg0);
		void setWebUri(android::net::Uri arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::assist

