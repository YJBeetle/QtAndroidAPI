#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::translation
{
	class TranslationSpec : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint DATA_FORMAT_TEXT();
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TranslationSpec(QJniObject obj);
		
		// Constructors
		TranslationSpec(android::icu::util::ULocale arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getDataFormat();
		android::icu::util::ULocale getLocale();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

