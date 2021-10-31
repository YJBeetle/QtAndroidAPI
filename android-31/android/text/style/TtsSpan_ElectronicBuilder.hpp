#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_ElectronicBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_ElectronicBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_ElectronicBuilder(QJniObject obj);
		
		// Constructors
		TtsSpan_ElectronicBuilder();
		
		// Methods
		android::text::style::TtsSpan_ElectronicBuilder setDomain(jstring arg0);
		android::text::style::TtsSpan_ElectronicBuilder setEmailArguments(jstring arg0, jstring arg1);
		android::text::style::TtsSpan_ElectronicBuilder setFragmentId(jstring arg0);
		android::text::style::TtsSpan_ElectronicBuilder setPassword(jstring arg0);
		android::text::style::TtsSpan_ElectronicBuilder setPath(jstring arg0);
		android::text::style::TtsSpan_ElectronicBuilder setPort(jint arg0);
		android::text::style::TtsSpan_ElectronicBuilder setProtocol(jstring arg0);
		android::text::style::TtsSpan_ElectronicBuilder setQueryString(jstring arg0);
		android::text::style::TtsSpan_ElectronicBuilder setUsername(jstring arg0);
	};
} // namespace android::text::style

