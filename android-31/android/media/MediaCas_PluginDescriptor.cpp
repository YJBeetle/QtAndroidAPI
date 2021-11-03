#include "./MediaCas_PluginDescriptor.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCas_PluginDescriptor::MediaCas_PluginDescriptor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring MediaCas_PluginDescriptor::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaCas_PluginDescriptor::getSystemId()
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	jstring MediaCas_PluginDescriptor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

