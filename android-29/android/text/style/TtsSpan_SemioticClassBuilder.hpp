#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"


namespace android::text::style
{
	class TtsSpan_SemioticClassBuilder : public android::text::style::TtsSpan_Builder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_SemioticClassBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_Builder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_SemioticClassBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_SemioticClassBuilder(jstring arg0);
		
		// Methods
		QAndroidJniObject setAnimacy(jstring arg0);
		QAndroidJniObject setCase(jstring arg0);
		QAndroidJniObject setGender(jstring arg0);
		QAndroidJniObject setMultiplicity(jstring arg0);
	};
} // namespace android::text::style

