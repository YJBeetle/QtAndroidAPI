#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCas_PluginDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCas_PluginDescriptor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas_PluginDescriptor(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getName();
		jint getSystemId();
		jstring toString();
	};
} // namespace android::media

