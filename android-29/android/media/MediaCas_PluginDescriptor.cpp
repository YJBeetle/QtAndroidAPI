#include "./MediaCas_PluginDescriptor.hpp"

namespace android::media
{
	// Fields
	
	MediaCas_PluginDescriptor::MediaCas_PluginDescriptor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MediaCas_PluginDescriptor::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaCas_PluginDescriptor::getSystemId()
	{
		return __thiz.callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	jstring MediaCas_PluginDescriptor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

