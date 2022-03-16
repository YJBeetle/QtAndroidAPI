#pragma once

#include "./TtsSpan_SemioticClassBuilder.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_MoneyBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_MoneyBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_MoneyBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
		
		// Constructors
		TtsSpan_MoneyBuilder();
		
		// Methods
		android::text::style::TtsSpan_MoneyBuilder setCurrency(JString arg0) const;
		android::text::style::TtsSpan_MoneyBuilder setFractionalPart(JString arg0) const;
		android::text::style::TtsSpan_MoneyBuilder setIntegerPart(JString arg0) const;
		android::text::style::TtsSpan_MoneyBuilder setIntegerPart(jlong arg0) const;
		android::text::style::TtsSpan_MoneyBuilder setQuantity(JString arg0) const;
	};
} // namespace android::text::style

