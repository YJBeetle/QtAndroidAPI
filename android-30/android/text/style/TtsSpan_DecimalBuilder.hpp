#pragma once

#include "./TtsSpan_SemioticClassBuilder.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_DecimalBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_DecimalBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_DecimalBuilder(QJniObject obj);
		
		// Constructors
		TtsSpan_DecimalBuilder();
		TtsSpan_DecimalBuilder(JString arg0, JString arg1);
		TtsSpan_DecimalBuilder(jdouble arg0, jint arg1, jint arg2);
		
		// Methods
		android::text::style::TtsSpan_DecimalBuilder setArgumentsFromDouble(jdouble arg0, jint arg1, jint arg2) const;
		android::text::style::TtsSpan_DecimalBuilder setFractionalPart(JString arg0) const;
		android::text::style::TtsSpan_DecimalBuilder setIntegerPart(JString arg0) const;
		android::text::style::TtsSpan_DecimalBuilder setIntegerPart(jlong arg0) const;
	};
} // namespace android::text::style

