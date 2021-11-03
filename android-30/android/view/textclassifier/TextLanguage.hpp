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
		TextLanguage(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jfloat getConfidenceScore(android::icu::util::ULocale arg0);
		android::os::Bundle getExtras();
		JString getId();
		android::icu::util::ULocale getLocale(jint arg0);
		jint getLocaleHypothesisCount();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

