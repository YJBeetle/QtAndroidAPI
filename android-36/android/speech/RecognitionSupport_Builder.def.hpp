#pragma once

#include "../../JObject.hpp"

namespace android::speech
{
	class RecognitionSupport;
}
class JString;

namespace android::speech
{
	class RecognitionSupport_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognitionSupport_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionSupport_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RecognitionSupport_Builder();
		
		// Methods
		android::speech::RecognitionSupport_Builder addInstalledOnDeviceLanguage(JString arg0) const;
		android::speech::RecognitionSupport_Builder addOnlineLanguage(JString arg0) const;
		android::speech::RecognitionSupport_Builder addPendingOnDeviceLanguage(JString arg0) const;
		android::speech::RecognitionSupport_Builder addSupportedOnDeviceLanguage(JString arg0) const;
		android::speech::RecognitionSupport build() const;
		android::speech::RecognitionSupport_Builder setInstalledOnDeviceLanguages(JObject arg0) const;
		android::speech::RecognitionSupport_Builder setOnlineLanguages(JObject arg0) const;
		android::speech::RecognitionSupport_Builder setPendingOnDeviceLanguages(JObject arg0) const;
		android::speech::RecognitionSupport_Builder setSupportedOnDeviceLanguages(JObject arg0) const;
	};
} // namespace android::speech

