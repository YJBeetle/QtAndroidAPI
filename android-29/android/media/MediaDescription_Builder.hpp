#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::media
{
	class MediaDescription;
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
	class MediaDescription_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDescription_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDescription_Builder(QJniObject obj);
		
		// Constructors
		MediaDescription_Builder();
		
		// Methods
		android::media::MediaDescription build() const;
		android::media::MediaDescription_Builder setDescription(JString arg0) const;
		android::media::MediaDescription_Builder setExtras(android::os::Bundle arg0) const;
		android::media::MediaDescription_Builder setIconBitmap(android::graphics::Bitmap arg0) const;
		android::media::MediaDescription_Builder setIconUri(android::net::Uri arg0) const;
		android::media::MediaDescription_Builder setMediaId(JString arg0) const;
		android::media::MediaDescription_Builder setMediaUri(android::net::Uri arg0) const;
		android::media::MediaDescription_Builder setSubtitle(JString arg0) const;
		android::media::MediaDescription_Builder setTitle(JString arg0) const;
	};
} // namespace android::media

