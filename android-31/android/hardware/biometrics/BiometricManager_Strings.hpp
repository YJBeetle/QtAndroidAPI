#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::biometrics
{
	class BiometricManager_Strings : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BiometricManager_Strings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BiometricManager_Strings(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getButtonLabel();
		jstring getPromptMessage();
		jstring getSettingName();
	};
} // namespace android::hardware::biometrics

