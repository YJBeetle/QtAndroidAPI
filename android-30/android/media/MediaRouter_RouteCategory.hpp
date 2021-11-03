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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter_RouteCategory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_RouteCategory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getName() const;
		JString getName(android::content::Context arg0) const;
		JObject getRoutes(JObject arg0) const;
		jint getSupportedTypes() const;
		jboolean isGroupable() const;
		JString toString() const;
	};
} // namespace android::media

