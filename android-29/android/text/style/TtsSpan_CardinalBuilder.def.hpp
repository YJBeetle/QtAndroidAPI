#pragma once

#include "./TtsSpan_SemioticClassBuilder.def.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_CardinalBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_CardinalBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_CardinalBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
		
		// Constructors
		TtsSpan_CardinalBuilder();
		TtsSpan_CardinalBuilder(JString arg0);
		TtsSpan_CardinalBuilder(jlong arg0);
		
		// Methods
		android::text::style::TtsSpan_CardinalBuilder setNumber(JString arg0) const;
		android::text::style::TtsSpan_CardinalBuilder setNumber(jlong arg0) const;
	};
} // namespace android::text::style

