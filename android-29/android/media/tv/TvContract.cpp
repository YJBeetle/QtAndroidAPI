#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "./TvContract.hpp"

namespace android::media::tv
{
	// Fields
	jstring TvContract::ACTION_INITIALIZE_PROGRAMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_INITIALIZE_PROGRAMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract::ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract::ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract::ACTION_REQUEST_CHANNEL_BROWSABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_REQUEST_CHANNEL_BROWSABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract::ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract::EXTRA_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"EXTRA_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract::EXTRA_PREVIEW_PROGRAM_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"EXTRA_PREVIEW_PROGRAM_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract::EXTRA_WATCH_NEXT_PROGRAM_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"EXTRA_WATCH_NEXT_PROGRAM_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	TvContract::TvContract(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TvContract::buildChannelLogoUri(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelLogoUri",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TvContract::buildChannelLogoUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelLogoUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject TvContract::buildChannelUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject TvContract::buildChannelUriForPassthroughInput(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelUriForPassthroughInput",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject TvContract::buildChannelsUriForInput(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelsUriForInput",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	jstring TvContract::buildInputId(android::content::ComponentName arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildInputId",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject TvContract::buildPreviewProgramUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildPreviewProgramUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject TvContract::buildPreviewProgramsUriForChannel(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildPreviewProgramsUriForChannel",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TvContract::buildPreviewProgramsUriForChannel(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildPreviewProgramsUriForChannel",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject TvContract::buildProgramUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject TvContract::buildProgramsUriForChannel(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TvContract::buildProgramsUriForChannel(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject TvContract::buildProgramsUriForChannel(android::net::Uri arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(Landroid/net/Uri;JJ)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject TvContract::buildProgramsUriForChannel(jlong arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(JJJ)Landroid/net/Uri;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject TvContract::buildRecordedProgramUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildRecordedProgramUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject TvContract::buildWatchNextProgramUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildWatchNextProgramUri",
			"(J)Landroid/net/Uri;",
			arg0
		);
	}
	jboolean TvContract::isChannelUri(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContract::isChannelUriForPassthroughInput(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUriForPassthroughInput",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContract::isChannelUriForTunerInput(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUriForTunerInput",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContract::isProgramUri(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isProgramUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContract::isRecordedProgramUri(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isRecordedProgramUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	void TvContract::requestChannelBrowsable(android::content::Context arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.media.tv.TvContract",
			"requestChannelBrowsable",
			"(Landroid/content/Context;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media::tv

