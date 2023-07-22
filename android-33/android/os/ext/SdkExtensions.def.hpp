#pragma once

#include "../../../JObject.hpp"

namespace android::os::ext
{
	class SdkExtensions : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SdkExtensions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SdkExtensions(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject getAllExtensionVersions();
		static jint getExtensionVersion(jint arg0);
	};
} // namespace android::os::ext

