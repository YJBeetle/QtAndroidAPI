#pragma once

#include "../../../JObject.hpp"


namespace android::hardware::biometrics
{
	class BiometricManager_Strings : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BiometricManager_Strings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BiometricManager_Strings(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getButtonLabel();
		jstring getPromptMessage();
		jstring getSettingName();
	};
} // namespace android::hardware::biometrics

