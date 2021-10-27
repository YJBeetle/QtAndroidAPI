#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextLanguage : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextLanguage(QAndroidJniObject obj);
		// Constructors
		TextLanguage() = default;
		
		// Methods
		jint describeContents();
		jfloat getConfidenceScore(android::icu::util::ULocale arg0);
		QAndroidJniObject getExtras();
		jstring getId();
		QAndroidJniObject getLocale(jint arg0);
		jint getLocaleHypothesisCount();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

