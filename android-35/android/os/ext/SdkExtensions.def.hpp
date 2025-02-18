#pragma once

#include "../../../JObject.hpp"

namespace android::os::ext
{
	class SdkExtensions : public JObject
	{
	public:
		// Fields
		static jint AD_SERVICES();
		
		// QJniObject forward
		template<typename ...Ts> explicit SdkExtensions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SdkExtensions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject getAllExtensionVersions();
		static jint getExtensionVersion(jint arg0);
	};
} // namespace android::os::ext

