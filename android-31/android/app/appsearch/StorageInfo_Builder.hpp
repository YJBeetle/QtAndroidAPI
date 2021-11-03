#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class StorageInfo;
}

namespace android::app::appsearch
{
	class StorageInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StorageInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StorageInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		StorageInfo_Builder();
		
		// Methods
		android::app::appsearch::StorageInfo build();
		android::app::appsearch::StorageInfo_Builder setAliveDocumentsCount(jint arg0);
		android::app::appsearch::StorageInfo_Builder setAliveNamespacesCount(jint arg0);
		android::app::appsearch::StorageInfo_Builder setSizeBytes(jlong arg0);
	};
} // namespace android::app::appsearch

