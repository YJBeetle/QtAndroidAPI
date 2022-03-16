#include "./StorageInfo.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	jint StorageInfo::getAliveDocumentsCount() const
	{
		return callMethod<jint>(
			"getAliveDocumentsCount",
			"()I"
		);
	}
	jint StorageInfo::getAliveNamespacesCount() const
	{
		return callMethod<jint>(
			"getAliveNamespacesCount",
			"()I"
		);
	}
	jlong StorageInfo::getSizeBytes() const
	{
		return callMethod<jlong>(
			"getSizeBytes",
			"()J"
		);
	}
} // namespace android::app::appsearch

