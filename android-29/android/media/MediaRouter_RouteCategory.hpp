#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::media
{
	class MediaRouter_RouteCategory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter_RouteCategory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_RouteCategory(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getName();
		jstring getName(android::content::Context arg0);
		JObject getRoutes(JObject arg0);
		jint getSupportedTypes();
		jboolean isGroupable();
		jstring toString();
	};
} // namespace android::media

