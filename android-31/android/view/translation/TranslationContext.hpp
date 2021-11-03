#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::translation
{
	class TranslationSpec;
}
class JString;

namespace android::view::translation
{
	class TranslationContext : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_DEFINITIONS();
		static jint FLAG_LOW_LATENCY();
		static jint FLAG_TRANSLITERATION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::view::translation::TranslationSpec getSourceSpec() const;
		android::view::translation::TranslationSpec getTargetSpec() const;
		jint getTranslationFlags() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::translation

