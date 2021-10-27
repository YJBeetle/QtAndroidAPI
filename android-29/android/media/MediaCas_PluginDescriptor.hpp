#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCas_PluginDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaCas_PluginDescriptor(QAndroidJniObject obj);
		// Constructors
		MediaCas_PluginDescriptor() = default;
		
		// Methods
		jstring getName();
		jint getSystemId();
		jstring toString();
	};
} // namespace android::media

