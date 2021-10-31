#include "./MediaCommunicationManager.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCommunicationManager::MediaCommunicationManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass MediaCommunicationManager::getSession2Tokens()
	{
		return callObjectMethod(
			"getSession2Tokens",
			"()Ljava/util/List;"
		);
	}
	jint MediaCommunicationManager::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
} // namespace android::media
