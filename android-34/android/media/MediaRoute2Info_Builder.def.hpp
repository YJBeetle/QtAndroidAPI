#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaRoute2Info;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
class JString;
class JString;

namespace android::media
{
	class MediaRoute2Info_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRoute2Info_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRoute2Info_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaRoute2Info_Builder(android::media::MediaRoute2Info arg0);
		MediaRoute2Info_Builder(JString arg0, JString arg1);
		
		// Methods
		android::media::MediaRoute2Info_Builder addFeature(JString arg0) const;
		android::media::MediaRoute2Info_Builder addFeatures(JObject arg0) const;
		android::media::MediaRoute2Info build() const;
		android::media::MediaRoute2Info_Builder clearFeatures() const;
		android::media::MediaRoute2Info_Builder setClientPackageName(JString arg0) const;
		android::media::MediaRoute2Info_Builder setConnectionState(jint arg0) const;
		android::media::MediaRoute2Info_Builder setDeduplicationIds(JObject arg0) const;
		android::media::MediaRoute2Info_Builder setDescription(JString arg0) const;
		android::media::MediaRoute2Info_Builder setExtras(android::os::Bundle arg0) const;
		android::media::MediaRoute2Info_Builder setIconUri(android::net::Uri arg0) const;
		android::media::MediaRoute2Info_Builder setType(jint arg0) const;
		android::media::MediaRoute2Info_Builder setVisibilityPublic() const;
		android::media::MediaRoute2Info_Builder setVisibilityRestricted(JObject arg0) const;
		android::media::MediaRoute2Info_Builder setVolume(jint arg0) const;
		android::media::MediaRoute2Info_Builder setVolumeHandling(jint arg0) const;
		android::media::MediaRoute2Info_Builder setVolumeMax(jint arg0) const;
	};
} // namespace android::media

