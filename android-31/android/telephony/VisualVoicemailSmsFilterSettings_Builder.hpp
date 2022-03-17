#pragma once

#include "./VisualVoicemailSmsFilterSettings.def.hpp"
#include "../../JString.hpp"
#include "./VisualVoicemailSmsFilterSettings_Builder.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline VisualVoicemailSmsFilterSettings_Builder::VisualVoicemailSmsFilterSettings_Builder()
		: JObject(
			"android.telephony.VisualVoicemailSmsFilterSettings$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::telephony::VisualVoicemailSmsFilterSettings VisualVoicemailSmsFilterSettings_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/VisualVoicemailSmsFilterSettings;"
		);
	}
	inline android::telephony::VisualVoicemailSmsFilterSettings_Builder VisualVoicemailSmsFilterSettings_Builder::setClientPrefix(JString arg0) const
	{
		return callObjectMethod(
			"setClientPrefix",
			"(Ljava/lang/String;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::VisualVoicemailSmsFilterSettings_Builder VisualVoicemailSmsFilterSettings_Builder::setDestinationPort(jint arg0) const
	{
		return callObjectMethod(
			"setDestinationPort",
			"(I)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0
		);
	}
	inline android::telephony::VisualVoicemailSmsFilterSettings_Builder VisualVoicemailSmsFilterSettings_Builder::setOriginatingNumbers(JObject arg0) const
	{
		return callObjectMethod(
			"setOriginatingNumbers",
			"(Ljava/util/List;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0.object()
		);
	}
} // namespace android::telephony

// Base class headers

