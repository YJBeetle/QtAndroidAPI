#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class PackageManager_PackageInfoFlags : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageManager_PackageInfoFlags(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager_PackageInfoFlags(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::pm::PackageManager_PackageInfoFlags of(jlong arg0);
		jlong getValue() const;
	};
} // namespace android::content::pm

