#pragma once

#include "../../../__JniBaseClass.hpp"

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
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLinks_Request(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Request(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::os::LocaleList getDefaultLocales();
		android::view::textclassifier::TextClassifier_EntityConfig getEntityConfig();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier
