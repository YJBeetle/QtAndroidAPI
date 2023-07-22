#pragma once

#include "./RecognitionSupport.def.hpp"
#include "../../JString.hpp"
#include "./RecognitionSupport_Builder.def.hpp"

namespace android::speech
{
	// Fields
	
	// Constructors
	inline RecognitionSupport_Builder::RecognitionSupport_Builder()
		: JObject(
			"android.speech.RecognitionSupport$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::speech::RecognitionSupport_Builder RecognitionSupport_Builder::addInstalledOnDeviceLanguage(JString arg0) const
	{
		return callObjectMethod(
			"addInstalledOnDeviceLanguage",
			"(Ljava/lang/String;)Landroid/speech/RecognitionSupport$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::speech::RecognitionSupport_Builder RecognitionSupport_Builder::addOnlineLanguage(JString arg0) const
	{
		return callObjectMethod(
			"addOnlineLanguage",
			"(Ljava/lang/String;)Landroid/speech/RecognitionSupport$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::speech::RecognitionSupport_Builder RecognitionSupport_Builder::addPendingOnDeviceLanguage(JString arg0) const
	{
		return callObjectMethod(
			"addPendingOnDeviceLanguage",
			"(Ljava/lang/String;)Landroid/speech/RecognitionSupport$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::speech::RecognitionSupport_Builder RecognitionSupport_Builder::addSupportedOnDeviceLanguage(JString arg0) const
	{
		return callObjectMethod(
			"addSupportedOnDeviceLanguage",
			"(Ljava/lang/String;)Landroid/speech/RecognitionSupport$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::speech::RecognitionSupport RecognitionSupport_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/speech/RecognitionSupport;"
		);
	}
	inline android::speech::RecognitionSupport_Builder RecognitionSupport_Builder::setInstalledOnDeviceLanguages(JObject arg0) const
	{
		return callObjectMethod(
			"setInstalledOnDeviceLanguages",
			"(Ljava/util/List;)Landroid/speech/RecognitionSupport$Builder;",
			arg0.object()
		);
	}
	inline android::speech::RecognitionSupport_Builder RecognitionSupport_Builder::setOnlineLanguages(JObject arg0) const
	{
		return callObjectMethod(
			"setOnlineLanguages",
			"(Ljava/util/List;)Landroid/speech/RecognitionSupport$Builder;",
			arg0.object()
		);
	}
	inline android::speech::RecognitionSupport_Builder RecognitionSupport_Builder::setPendingOnDeviceLanguages(JObject arg0) const
	{
		return callObjectMethod(
			"setPendingOnDeviceLanguages",
			"(Ljava/util/List;)Landroid/speech/RecognitionSupport$Builder;",
			arg0.object()
		);
	}
	inline android::speech::RecognitionSupport_Builder RecognitionSupport_Builder::setSupportedOnDeviceLanguages(JObject arg0) const
	{
		return callObjectMethod(
			"setSupportedOnDeviceLanguages",
			"(Ljava/util/List;)Landroid/speech/RecognitionSupport$Builder;",
			arg0.object()
		);
	}
} // namespace android::speech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech;
#endif
