#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::translation
{
	class TranslationSpec;
}

namespace android::view::translation
{
	class TranslationContext : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FLAG_DEFINITIONS();
		static jint FLAG_LOW_LATENCY();
		static jint FLAG_TRANSLITERATION();
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TranslationContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::view::translation::TranslationSpec getSourceSpec();
		android::view::translation::TranslationSpec getTargetSpec();
		jint getTranslationFlags();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

