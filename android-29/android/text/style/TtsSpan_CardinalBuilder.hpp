#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_CardinalBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_CardinalBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_CardinalBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_CardinalBuilder();
		TtsSpan_CardinalBuilder(jstring arg0);
		TtsSpan_CardinalBuilder(jlong arg0);
		
		// Methods
		android::text::style::TtsSpan_CardinalBuilder setNumber(jstring arg0);
		android::text::style::TtsSpan_CardinalBuilder setNumber(jlong arg0);
	};
} // namespace android::text::style

