#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ClipData;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class ContentInfo;
}

namespace android::view
{
	class ContentInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		ContentInfo_Builder(android::view::ContentInfo arg0);
		ContentInfo_Builder(android::content::ClipData arg0, jint arg1);
		
		// Methods
		android::view::ContentInfo build() const;
		android::view::ContentInfo_Builder setClip(android::content::ClipData arg0) const;
		android::view::ContentInfo_Builder setExtras(android::os::Bundle arg0) const;
		android::view::ContentInfo_Builder setFlags(jint arg0) const;
		android::view::ContentInfo_Builder setLinkUri(android::net::Uri arg0) const;
		android::view::ContentInfo_Builder setSource(jint arg0) const;
	};
} // namespace android::view

