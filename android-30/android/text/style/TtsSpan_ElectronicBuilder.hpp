#pragma once

#include "./TtsSpan_SemioticClassBuilder.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_ElectronicBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_ElectronicBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_ElectronicBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_ElectronicBuilder();
		
		// Methods
		android::text::style::TtsSpan_ElectronicBuilder setDomain(JString arg0);
		android::text::style::TtsSpan_ElectronicBuilder setEmailArguments(JString arg0, JString arg1);
		android::text::style::TtsSpan_ElectronicBuilder setFragmentId(JString arg0);
		android::text::style::TtsSpan_ElectronicBuilder setPassword(JString arg0);
		android::text::style::TtsSpan_ElectronicBuilder setPath(JString arg0);
		android::text::style::TtsSpan_ElectronicBuilder setPort(jint arg0);
		android::text::style::TtsSpan_ElectronicBuilder setProtocol(JString arg0);
		android::text::style::TtsSpan_ElectronicBuilder setQueryString(JString arg0);
		android::text::style::TtsSpan_ElectronicBuilder setUsername(JString arg0);
	};
} // namespace android::text::style

