#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::hardware::biometrics
{
	class BiometricManager_Strings : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BiometricManager_Strings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BiometricManager_Strings(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getButtonLabel() const;
		JString getPromptMessage() const;
		JString getSettingName() const;
	};
} // namespace android::hardware::biometrics

