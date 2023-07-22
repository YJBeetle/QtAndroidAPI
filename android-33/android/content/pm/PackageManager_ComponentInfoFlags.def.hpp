#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class PackageManager_ComponentInfoFlags : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageManager_ComponentInfoFlags(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager_ComponentInfoFlags(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::pm::PackageManager_ComponentInfoFlags of(jlong arg0);
		jlong getValue() const;
	};
} // namespace android::content::pm

