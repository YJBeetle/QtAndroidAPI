#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view::translation
{
	class TranslationRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_DICTIONARY_RESULT();
		static jint FLAG_PARTIAL_RESPONSES();
		static jint FLAG_TRANSLATION_RESULT();
		static jint FLAG_TRANSLITERATION_RESULT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getFlags();
		JObject getTranslationRequestValues();
		JObject getViewTranslationRequests();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

