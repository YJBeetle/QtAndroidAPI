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
namespace android::view::textclassifier
{
	class TextLanguage;
}
class JString;

namespace android::view::textclassifier
{
	class TextLanguage_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLanguage_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLanguage_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextLanguage_Builder();
		
		// Methods
		android::view::textclassifier::TextLanguage build() const;
		android::view::textclassifier::TextLanguage_Builder putLocale(android::icu::util::ULocale arg0, jfloat arg1) const;
		android::view::textclassifier::TextLanguage_Builder setExtras(android::os::Bundle arg0) const;
		android::view::textclassifier::TextLanguage_Builder setId(JString arg0) const;
	};
} // namespace android::view::textclassifier

