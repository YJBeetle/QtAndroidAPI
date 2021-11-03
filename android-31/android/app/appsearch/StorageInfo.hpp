#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class StorageInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StorageInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StorageInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAliveDocumentsCount() const;
		jint getAliveNamespacesCount() const;
		jlong getSizeBytes() const;
	};
} // namespace android::app::appsearch

