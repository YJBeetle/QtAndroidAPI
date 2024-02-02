#pragma once

#include "./RecognitionPart.def.hpp"
#include "../../JString.hpp"
#include "./RecognitionPart_Builder.def.hpp"

namespace android::speech
{
	// Fields
	
	// Constructors
	inline RecognitionPart_Builder::RecognitionPart_Builder(JString arg0)
		: JObject(
			"android.speech.RecognitionPart$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::speech::RecognitionPart RecognitionPart_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/speech/RecognitionPart;"
		);
	}
	inline android::speech::RecognitionPart_Builder RecognitionPart_Builder::setConfidenceLevel(jint arg0) const
	{
		return callObjectMethod(
			"setConfidenceLevel",
			"(I)Landroid/speech/RecognitionPart$Builder;",
			arg0
		);
	}
	inline android::speech::RecognitionPart_Builder RecognitionPart_Builder::setFormattedText(JString arg0) const
	{
		return callObjectMethod(
			"setFormattedText",
			"(Ljava/lang/String;)Landroid/speech/RecognitionPart$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::speech::RecognitionPart_Builder RecognitionPart_Builder::setRawText(JString arg0) const
	{
		return callObjectMethod(
			"setRawText",
			"(Ljava/lang/String;)Landroid/speech/RecognitionPart$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::speech::RecognitionPart_Builder RecognitionPart_Builder::setTimestampMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimestampMillis",
			"(J)Landroid/speech/RecognitionPart$Builder;",
			arg0
		);
	}
} // namespace android::speech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech;
#endif
