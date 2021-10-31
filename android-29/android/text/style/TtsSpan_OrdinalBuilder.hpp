#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_OrdinalBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_OrdinalBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_OrdinalBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_OrdinalBuilder();
		TtsSpan_OrdinalBuilder(jstring arg0);
		TtsSpan_OrdinalBuilder(jlong arg0);
		
		// Methods
		QAndroidJniObject setNumber(jstring arg0);
		QAndroidJniObject setNumber(jlong arg0);
	};
} // namespace android::text::style

