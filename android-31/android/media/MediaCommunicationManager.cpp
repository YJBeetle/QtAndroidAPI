#include "./MediaCommunicationManager.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCommunicationManager::MediaCommunicationManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject MediaCommunicationManager::getSession2Tokens() const
	{
		return callObjectMethod(
			"getSession2Tokens",
			"()Ljava/util/List;"
		);
	}
	jint MediaCommunicationManager::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
} // namespace android::media

