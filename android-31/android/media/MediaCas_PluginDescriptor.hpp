#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class MediaCas_PluginDescriptor : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCas_PluginDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas_PluginDescriptor(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getName();
		jint getSystemId();
		JString toString();
	};
} // namespace android::media

