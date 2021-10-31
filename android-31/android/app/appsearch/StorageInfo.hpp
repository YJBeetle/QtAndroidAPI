#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class StorageInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StorageInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StorageInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAliveDocumentsCount();
		jint getAliveNamespacesCount();
		jlong getSizeBytes();
	};
} // namespace android::app::appsearch

