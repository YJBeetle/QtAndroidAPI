#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::view::translation
{
	class TranslationSpec : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DATA_FORMAT_TEXT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationSpec(QAndroidJniObject obj);
		
		// Constructors
		TranslationSpec(android::icu::util::ULocale arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getDataFormat() const;
		android::icu::util::ULocale getLocale() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::translation

