#include "./MediaCommunicationManager.hpp"

namespace android::media
{
	// Fields
	
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

