#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class MediaCas_PluginDescriptor : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCas_PluginDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas_PluginDescriptor(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getName();
		jint getSystemId();
		JString toString();
	};
} // namespace android::media

