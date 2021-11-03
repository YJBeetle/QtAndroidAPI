#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
class JString;
class JString;

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
		JString getName();
		JString getName(android::content::Context arg0);
		JObject getRoutes(JObject arg0);
		jint getSupportedTypes();
		jboolean isGroupable();
		JString toString();
	};
} // namespace android::media

