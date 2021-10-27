#pragma once

#ifndef ANDROID_MEDIA_TV_TVCONTRACT
#define ANDROID_MEDIA_TV_TVCONTRACT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::media::tv
{
	class TvContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_INITIALIZE_PROGRAMS();
		static jstring ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT();
		static jstring ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED();
		static jstring ACTION_REQUEST_CHANNEL_BROWSABLE();
		static jstring ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED();
		static jstring AUTHORITY();
		static jstring EXTRA_CHANNEL_ID();
		static jstring EXTRA_PREVIEW_PROGRAM_ID();
		static jstring EXTRA_WATCH_NEXT_PROGRAM_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject buildChannelLogoUri(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject buildChannelLogoUri(jlong arg0);
		static QAndroidJniObject buildChannelUri(jlong arg0);
		static QAndroidJniObject buildChannelUriForPassthroughInput(jstring arg0);
		static QAndroidJniObject buildChannelUriForPassthroughInput(const QString &arg0);
		static QAndroidJniObject buildChannelsUriForInput(jstring arg0);
		static QAndroidJniObject buildChannelsUriForInput(const QString &arg0);
		static jstring buildInputId(__jni_impl::android::content::ComponentName arg0);
		static QAndroidJniObject buildPreviewProgramUri(jlong arg0);
		static QAndroidJniObject buildPreviewProgramsUriForChannel(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject buildPreviewProgramsUriForChannel(jlong arg0);
		static QAndroidJniObject buildProgramUri(jlong arg0);
		static QAndroidJniObject buildProgramsUriForChannel(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject buildProgramsUriForChannel(jlong arg0);
		static QAndroidJniObject buildProgramsUriForChannel(__jni_impl::android::net::Uri arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject buildProgramsUriForChannel(jlong arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject buildRecordedProgramUri(jlong arg0);
		static QAndroidJniObject buildWatchNextProgramUri(jlong arg0);
		static jboolean isChannelUri(__jni_impl::android::net::Uri arg0);
		static jboolean isChannelUriForPassthroughInput(__jni_impl::android::net::Uri arg0);
		static jboolean isChannelUriForTunerInput(__jni_impl::android::net::Uri arg0);
		static jboolean isProgramUri(__jni_impl::android::net::Uri arg0);
		static jboolean isRecordedProgramUri(__jni_impl::android::net::Uri arg0);
		static void requestChannelBrowsable(__jni_impl::android::content::Context arg0, jlong arg1);
	};
} // namespace __jni_impl::android::media::tv

#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"

namespace __jni_impl::android::media::tv
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
	
	// Constructors
	void TvContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContract",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TvContract::buildChannelLogoUri(__jni_impl::android::net::Uri arg0)
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
	QAndroidJniObject TvContract::buildChannelUriForPassthroughInput(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelUriForPassthroughInput",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject TvContract::buildChannelsUriForInput(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract",
			"buildChannelsUriForInput",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring TvContract::buildInputId(__jni_impl::android::content::ComponentName arg0)
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
	QAndroidJniObject TvContract::buildPreviewProgramsUriForChannel(__jni_impl::android::net::Uri arg0)
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
	QAndroidJniObject TvContract::buildProgramsUriForChannel(__jni_impl::android::net::Uri arg0)
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
	QAndroidJniObject TvContract::buildProgramsUriForChannel(__jni_impl::android::net::Uri arg0, jlong arg1, jlong arg2)
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
	jboolean TvContract::isChannelUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContract::isChannelUriForPassthroughInput(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUriForPassthroughInput",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContract::isChannelUriForTunerInput(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isChannelUriForTunerInput",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContract::isProgramUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isProgramUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContract::isRecordedProgramUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract",
			"isRecordedProgramUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	void TvContract::requestChannelBrowsable(__jni_impl::android::content::Context arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.media.tv.TvContract",
			"requestChannelBrowsable",
			"(Landroid/content/Context;J)V",
			arg0.__jniObject().object(),
			arg1
		);
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

