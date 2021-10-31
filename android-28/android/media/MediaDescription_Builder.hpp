#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::media
{
	class MediaDescription_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDescription_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDescription_Builder(QJniObject obj);
		
		// Constructors
		MediaDescription_Builder();
		
		// Methods
		android::media::MediaDescription build();
		android::media::MediaDescription_Builder setDescription(jstring arg0);
		android::media::MediaDescription_Builder setExtras(android::os::Bundle arg0);
		android::media::MediaDescription_Builder setIconBitmap(android::graphics::Bitmap arg0);
		android::media::MediaDescription_Builder setIconUri(android::net::Uri arg0);
		android::media::MediaDescription_Builder setMediaId(jstring arg0);
		android::media::MediaDescription_Builder setMediaUri(android::net::Uri arg0);
		android::media::MediaDescription_Builder setSubtitle(jstring arg0);
		android::media::MediaDescription_Builder setTitle(jstring arg0);
	};
} // namespace android::media

