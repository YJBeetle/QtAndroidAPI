#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::view::textclassifier
{
	class TextLanguage : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextLanguage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLanguage(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jfloat getConfidenceScore(android::icu::util::ULocale arg0) const;
		android::os::Bundle getExtras() const;
		JString getId() const;
		android::icu::util::ULocale getLocale(jint arg0) const;
		jint getLocaleHypothesisCount() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textclassifier

