#pragma once

#include "./TtsSpan_SemioticClassBuilder.def.hpp"

namespace android::text::style
{
	class TtsSpan_DurationBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_DurationBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_DurationBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
		
		// Constructors
		TtsSpan_DurationBuilder();
		
		// Methods
		android::text::style::TtsSpan_DurationBuilder setHours(jint arg0) const;
		android::text::style::TtsSpan_DurationBuilder setMinutes(jint arg0) const;
		android::text::style::TtsSpan_DurationBuilder setSeconds(jint arg0) const;
	};
} // namespace android::text::style

