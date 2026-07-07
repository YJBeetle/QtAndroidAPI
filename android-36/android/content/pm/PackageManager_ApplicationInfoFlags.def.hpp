#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class PackageManager_ApplicationInfoFlags : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageManager_ApplicationInfoFlags(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager_ApplicationInfoFlags(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::pm::PackageManager_ApplicationInfoFlags of(jlong arg0);
		jlong getValue() const;
	};
} // namespace android::content::pm

