#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"


namespace android::text::style
{
	class TtsSpan_SemioticClassBuilder : public android::text::style::TtsSpan_Builder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_SemioticClassBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_Builder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_SemioticClassBuilder(QJniObject obj);
		
		// Constructors
		TtsSpan_SemioticClassBuilder(jstring arg0);
		
		// Methods
		android::text::style::TtsSpan_SemioticClassBuilder setAnimacy(jstring arg0);
		android::text::style::TtsSpan_SemioticClassBuilder setCase(jstring arg0);
		android::text::style::TtsSpan_SemioticClassBuilder setGender(jstring arg0);
		android::text::style::TtsSpan_SemioticClassBuilder setMultiplicity(jstring arg0);
	};
} // namespace android::text::style

