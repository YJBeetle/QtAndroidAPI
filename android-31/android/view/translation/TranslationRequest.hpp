#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::translation
{
	class TranslationRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FLAG_DICTIONARY_RESULT();
		static jint FLAG_PARTIAL_RESPONSES();
		static jint FLAG_TRANSLATION_RESULT();
		static jint FLAG_TRANSLITERATION_RESULT();
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TranslationRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getFlags();
		__JniBaseClass getTranslationRequestValues();
		__JniBaseClass getViewTranslationRequests();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

