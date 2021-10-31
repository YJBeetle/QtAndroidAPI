#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}

namespace android::view::textclassifier
{
	class TextLinks_Request : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLinks_Request(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Request(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getCallingPackageName();
		QAndroidJniObject getDefaultLocales();
		QAndroidJniObject getEntityConfig();
		QAndroidJniObject getExtras();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

