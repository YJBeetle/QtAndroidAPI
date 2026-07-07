#pragma once

#include "../../JObject.hpp"

namespace android::speech
{
	class RecognitionPart;
}
class JString;

namespace android::speech
{
	class RecognitionPart_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognitionPart_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionPart_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RecognitionPart_Builder(JString arg0);
		
		// Methods
		android::speech::RecognitionPart build() const;
		android::speech::RecognitionPart_Builder setConfidenceLevel(jint arg0) const;
		android::speech::RecognitionPart_Builder setFormattedText(JString arg0) const;
		android::speech::RecognitionPart_Builder setRawText(JString arg0) const;
		android::speech::RecognitionPart_Builder setTimestampMillis(jlong arg0) const;
	};
} // namespace android::speech

