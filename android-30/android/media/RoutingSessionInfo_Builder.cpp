#include "./RoutingSessionInfo.hpp"
#include "../os/Bundle.hpp"
#include "./RoutingSessionInfo_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	RoutingSessionInfo_Builder::RoutingSessionInfo_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RoutingSessionInfo_Builder::RoutingSessionInfo_Builder(android::media::RoutingSessionInfo arg0)
		: __JniBaseClass(
			"android.media.RoutingSessionInfo$Builder",
			"(Landroid/media/RoutingSessionInfo;)V",
			arg0.object()
		) {}
	RoutingSessionInfo_Builder::RoutingSessionInfo_Builder(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.media.RoutingSessionInfo$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::addDeselectableRoute(jstring arg0)
	{
		return callObjectMethod(
			"addDeselectableRoute",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::addSelectableRoute(jstring arg0)
	{
		return callObjectMethod(
			"addSelectableRoute",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::addSelectedRoute(jstring arg0)
	{
		return callObjectMethod(
			"addSelectedRoute",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::addTransferableRoute(jstring arg0)
	{
		return callObjectMethod(
			"addTransferableRoute",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo RoutingSessionInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/RoutingSessionInfo;"
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::clearDeselectableRoutes()
	{
		return callObjectMethod(
			"clearDeselectableRoutes",
			"()Landroid/media/RoutingSessionInfo$Builder;"
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::clearSelectableRoutes()
	{
		return callObjectMethod(
			"clearSelectableRoutes",
			"()Landroid/media/RoutingSessionInfo$Builder;"
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::clearSelectedRoutes()
	{
		return callObjectMethod(
			"clearSelectedRoutes",
			"()Landroid/media/RoutingSessionInfo$Builder;"
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::clearTransferableRoutes()
	{
		return callObjectMethod(
			"clearTransferableRoutes",
			"()Landroid/media/RoutingSessionInfo$Builder;"
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::removeDeselectableRoute(jstring arg0)
	{
		return callObjectMethod(
			"removeDeselectableRoute",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::removeSelectableRoute(jstring arg0)
	{
		return callObjectMethod(
			"removeSelectableRoute",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::removeSelectedRoute(jstring arg0)
	{
		return callObjectMethod(
			"removeSelectedRoute",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::removeTransferableRoute(jstring arg0)
	{
		return callObjectMethod(
			"removeTransferableRoute",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::setControlHints(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setControlHints",
			"(Landroid/os/Bundle;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0.object()
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::setName(jstring arg0)
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/CharSequence;)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::setVolume(jint arg0)
	{
		return callObjectMethod(
			"setVolume",
			"(I)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::setVolumeHandling(jint arg0)
	{
		return callObjectMethod(
			"setVolumeHandling",
			"(I)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
	android::media::RoutingSessionInfo_Builder RoutingSessionInfo_Builder::setVolumeMax(jint arg0)
	{
		return callObjectMethod(
			"setVolumeMax",
			"(I)Landroid/media/RoutingSessionInfo$Builder;",
			arg0
		);
	}
} // namespace android::media

