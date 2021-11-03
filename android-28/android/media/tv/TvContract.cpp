#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "../../../JString.hpp"
#include "./TvContract.hpp"

namespace android::media::tv
{
	// Fields
	JString TvContract::ACTION_INITIALIZE_PROGRAMS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_INITIALIZE_PROGRAMS",
			"Ljava/lang/String;"
		);
	}
	JString TvContract::ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT",
			"Ljava/lang/String;"
		);
	}
	JString TvContract::ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED",
			"Ljava/lang/String;"
		);
	}
	JString TvContract::ACTION_REQUEST_CHANNEL_BROWSABLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_REQUEST_CHANNEL_BROWSABLE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract::ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED",
			"Ljava/lang/String;"
		);
	}
	JString TvContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	JString TvContract::EXTRA_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract",
			"EXTRA_CHANNEL_ID",
			"Ljava/lang/String;"
		);
	}
	JString TvContract::EXTRA_PREVIEW_PROGRAM_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract",
			"EXTRA_PREVIEW_PROGRAM_ID",
			"Ljava/lang/String;"
		);
	}
	JString TvContract::EXTRA_WATCH_NEXT_PROGRAM_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract",
			"EXTRA_WATCH_NEXT_PROGRAM_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	TvContract::TvContract(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Uri TvContract::buildChannelLogoUri(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelLogoUri",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	android::net::Uri TvContract::buildChannelLogoUri(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelLogoUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri TvContract::buildChannelUri(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri TvContract::buildChannelUriForPassthroughInput(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelUriForPassthroughInput",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	android::net::Uri TvContract::buildChannelsUriForInput(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelsUriForInput",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	JString TvContract::buildInputId(android::content::ComponentName arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildInputId",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	android::net::Uri TvContract::buildPreviewProgramUri(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildPreviewProgramUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri TvContract::buildPreviewProgramsUriForChannel(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildPreviewProgramsUriForChannel",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	android::net::Uri TvContract::buildPreviewProgramsUriForChannel(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildPreviewProgramsUriForChannel",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri TvContract::buildProgramUri(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri TvContract::buildProgramsUriForChannel(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	android::net::Uri TvContract::buildProgramsUriForChannel(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri TvContract::buildProgramsUriForChannel(android::net::Uri arg0, jlong arg1, jlong arg2)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(Landroid/net/Uri;JJ)Landroid/net/Uri;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::net::Uri TvContract::buildProgramsUriForChannel(jlong arg0, jlong arg1, jlong arg2)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(JJJ)Landroid/net/Uri;",
			arg0,
			arg1,
			arg2
		);
	}
	android::net::Uri TvContract::buildRecordedProgramUri(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildRecordedProgramUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri TvContract::buildWatchNextProgramUri(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildWatchNextProgramUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	jboolean TvContract::isChannelUri(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUri",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	jboolean TvContract::isChannelUriForPassthroughInput(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUriForPassthroughInput",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	jboolean TvContract::isChannelUriForTunerInput(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUriForTunerInput",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	jboolean TvContract::isProgramUri(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isProgramUri",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	jboolean TvContract::isRecordedProgramUri(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isRecordedProgramUri",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	void TvContract::requestChannelBrowsable(android::content::Context arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.media.tv.TvContract",
			"requestChannelBrowsable",
			"(Landroid/content/Context;J)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

