#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class PackageManager_ResolveInfoFlags : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageManager_ResolveInfoFlags(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager_ResolveInfoFlags(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::pm::PackageManager_ResolveInfoFlags of(jlong arg0);
		jlong getValue() const;
	};
} // namespace android::content::pm

