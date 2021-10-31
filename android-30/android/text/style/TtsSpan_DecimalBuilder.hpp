#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


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
		TtsSpan_DecimalBuilder(jstring arg0, jstring arg1);
		TtsSpan_DecimalBuilder(jdouble arg0, jint arg1, jint arg2);
		
		// Methods
		android::text::style::TtsSpan_DecimalBuilder setArgumentsFromDouble(jdouble arg0, jint arg1, jint arg2);
		android::text::style::TtsSpan_DecimalBuilder setFractionalPart(jstring arg0);
		android::text::style::TtsSpan_DecimalBuilder setIntegerPart(jstring arg0);
		android::text::style::TtsSpan_DecimalBuilder setIntegerPart(jlong arg0);
	};
} // namespace android::text::style

