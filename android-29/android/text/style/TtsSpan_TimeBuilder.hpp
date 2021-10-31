#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_TimeBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_TimeBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_TimeBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_TimeBuilder();
		TtsSpan_TimeBuilder(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject setHours(jint arg0);
		QAndroidJniObject setMinutes(jint arg0);
	};
} // namespace android::text::style

