#pragma once

#ifndef ANDROID_MEDIA_TV_TVCONTRACT
#define ANDROID_MEDIA_TV_TVCONTRACT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::media::tv
{
	class TvContract : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_INITIALIZE_PROGRAMS();
		static QAndroidJniObject ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT();
		static QAndroidJniObject ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED();
		static QAndroidJniObject ACTION_REQUEST_CHANNEL_BROWSABLE();
		static QAndroidJniObject ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED();
		static QAndroidJniObject AUTHORITY();
		static QAndroidJniObject EXTRA_CHANNEL_ID();
		static QAndroidJniObject EXTRA_PREVIEW_PROGRAM_ID();
		static QAndroidJniObject EXTRA_WATCH_NEXT_PROGRAM_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject buildInputId(__jni_impl::android::content::ComponentName arg0);
		static QAndroidJniObject buildChannelUri(jlong arg0);
		static QAndroidJniObject buildChannelUriForPassthroughInput(jstring arg0);
		static QAndroidJniObject buildChannelLogoUri(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject buildChannelLogoUri(jlong arg0);
		static QAndroidJniObject buildChannelsUriForInput(jstring arg0);
		static QAndroidJniObject buildProgramUri(jlong arg0);
		static QAndroidJniObject buildProgramsUriForChannel(__jni_impl::android::net::Uri arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject buildProgramsUriForChannel(jlong arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject buildProgramsUriForChannel(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject buildProgramsUriForChannel(jlong arg0);
		static QAndroidJniObject buildRecordedProgramUri(jlong arg0);
		static QAndroidJniObject buildPreviewProgramUri(jlong arg0);
		static QAndroidJniObject buildPreviewProgramsUriForChannel(jlong arg0);
		static QAndroidJniObject buildPreviewProgramsUriForChannel(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject buildWatchNextProgramUri(jlong arg0);
		static jboolean isChannelUri(__jni_impl::android::net::Uri arg0);
		static jboolean isChannelUriForTunerInput(__jni_impl::android::net::Uri arg0);
		static jboolean isChannelUriForPassthroughInput(__jni_impl::android::net::Uri arg0);
		static jboolean isProgramUri(__jni_impl::android::net::Uri arg0);
		static jboolean isRecordedProgramUri(__jni_impl::android::net::Uri arg0);
		static void requestChannelBrowsable(__jni_impl::android::content::Context arg0, jlong arg1);
	};
} // namespace __jni_impl::android::media::tv

#include "../../content/ComponentName.hpp"
#include "../../net/Uri.hpp"
#include "../../content/Context.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	QAndroidJniObject TvContract::ACTION_INITIALIZE_PROGRAMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_INITIALIZE_PROGRAMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract::ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract::ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract::ACTION_REQUEST_CHANNEL_BROWSABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_REQUEST_CHANNEL_BROWSABLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract::ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"AUTHORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract::EXTRA_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"EXTRA_CHANNEL_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract::EXTRA_PREVIEW_PROGRAM_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"EXTRA_PREVIEW_PROGRAM_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract::EXTRA_WATCH_NEXT_PROGRAM_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract",
			"EXTRA_WATCH_NEXT_PROGRAM_ID",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void TvContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContract",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TvContract::buildInputId(__jni_impl::android::content::ComponentName arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildInputId",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TvContract::buildChannelUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelUri",
			"(J)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject TvContract::buildChannelUriForPassthroughInput(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelUriForPassthroughInput",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject TvContract::buildChannelLogoUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelLogoUri",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TvContract::buildChannelLogoUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelLogoUri",
			"(J)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject TvContract::buildChannelsUriForInput(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelsUriForInput",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject TvContract::buildProgramUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramUri",
			"(J)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject TvContract::buildProgramsUriForChannel(__jni_impl::android::net::Uri arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(Landroid/net/Uri;JJ)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject TvContract::buildProgramsUriForChannel(jlong arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(JJJ)Landroid/net/Uri;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject TvContract::buildProgramsUriForChannel(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TvContract::buildProgramsUriForChannel(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildProgramsUriForChannel",
			"(J)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject TvContract::buildRecordedProgramUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildRecordedProgramUri",
			"(J)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject TvContract::buildPreviewProgramUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildPreviewProgramUri",
			"(J)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject TvContract::buildPreviewProgramsUriForChannel(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildPreviewProgramsUriForChannel",
			"(J)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject TvContract::buildPreviewProgramsUriForChannel(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildPreviewProgramsUriForChannel",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TvContract::buildWatchNextProgramUri(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildWatchNextProgramUri",
			"(J)Landroid/net/Uri;",
			arg0);
	}
	jboolean TvContract::isChannelUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object());
	}
	jboolean TvContract::isChannelUriForTunerInput(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUriForTunerInput",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object());
	}
	jboolean TvContract::isChannelUriForPassthroughInput(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUriForPassthroughInput",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object());
	}
	jboolean TvContract::isProgramUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isProgramUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object());
	}
	jboolean TvContract::isRecordedProgramUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isRecordedProgramUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object());
	}
	void TvContract::requestChannelBrowsable(__jni_impl::android::content::Context arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.media.tv.TvContract",
			"requestChannelBrowsable",
			"(Landroid/content/Context;J)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvContract : public __jni_impl::android::media::tv::TvContract
	{
	public:
		TvContract(QAndroidJniObject obj) { __thiz = obj; }
		TvContract()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVCONTRACT

