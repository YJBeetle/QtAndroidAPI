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
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getFlags() const;
		JObject getTranslationRequestValues() const;
		JObject getViewTranslationRequests() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::translation

