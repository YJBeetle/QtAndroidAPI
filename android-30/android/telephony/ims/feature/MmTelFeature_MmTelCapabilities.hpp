#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::telephony::ims::feature
{
	class MmTelFeature_MmTelCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAPABILITY_TYPE_SMS();
		static jint CAPABILITY_TYPE_UT();
		static jint CAPABILITY_TYPE_VIDEO();
		static jint CAPABILITY_TYPE_VOICE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MmTelFeature_MmTelCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MmTelFeature_MmTelCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::telephony::ims::feature

