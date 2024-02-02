#pragma once

#include "./RouteListingPreference_Item.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./RouteListingPreference_Item_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline RouteListingPreference_Item_Builder::RouteListingPreference_Item_Builder(JString arg0)
		: JObject(
			"android.media.RouteListingPreference$Item$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::media::RouteListingPreference_Item RouteListingPreference_Item_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/RouteListingPreference$Item;"
		);
	}
	inline android::media::RouteListingPreference_Item_Builder RouteListingPreference_Item_Builder::setCustomSubtextMessage(JString arg0) const
	{
		return callObjectMethod(
			"setCustomSubtextMessage",
			"(Ljava/lang/CharSequence;)Landroid/media/RouteListingPreference$Item$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::RouteListingPreference_Item_Builder RouteListingPreference_Item_Builder::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/media/RouteListingPreference$Item$Builder;",
			arg0
		);
	}
	inline android::media::RouteListingPreference_Item_Builder RouteListingPreference_Item_Builder::setSelectionBehavior(jint arg0) const
	{
		return callObjectMethod(
			"setSelectionBehavior",
			"(I)Landroid/media/RouteListingPreference$Item$Builder;",
			arg0
		);
	}
	inline android::media::RouteListingPreference_Item_Builder RouteListingPreference_Item_Builder::setSubText(jint arg0) const
	{
		return callObjectMethod(
			"setSubText",
			"(I)Landroid/media/RouteListingPreference$Item$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
